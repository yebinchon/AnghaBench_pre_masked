
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_2__* gz_statep ;
typedef int * gzFile ;
struct TYPE_5__ {int have; unsigned char* next; int pos; } ;
struct TYPE_6__ {scalar_t__ mode; scalar_t__ err; unsigned char* out; int size; scalar_t__ past; TYPE_1__ x; int skip; scalar_t__ seek; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_2__*,int ,char*) ;
 int FUNC_1 (TYPE_2__*,int ) ;

int FUNC_2(int VAR_4, gzFile VAR_5)
{
   gz_statep VAR_6;


   if (VAR_5 == ((void*)0))
      return -1;
   VAR_6 = (gz_statep)VAR_5;


   if (VAR_6->mode != VAR_0 ||
         (VAR_6->err != VAR_3 && VAR_6->err != VAR_1))
      return -1;


   if (VAR_6->seek) {
      VAR_6->seek = 0;
      if (FUNC_1(VAR_6, VAR_6->skip) == -1)
         return -1;
   }


   if (VAR_4 < 0)
      return -1;


   if (VAR_6->x.have == 0) {
      VAR_6->x.have = 1;
      VAR_6->x.next = VAR_6->out + (VAR_6->size << 1) - 1;
      VAR_6->x.next[0] = VAR_4;
      VAR_6->x.pos--;
      VAR_6->past = 0;
      return VAR_4;
   }


   if (VAR_6->x.have == (VAR_6->size << 1)) {
      FUNC_0(VAR_6, VAR_2, "out of room to push characters");
      return -1;
   }


   if (VAR_6->x.next == VAR_6->out) {
      unsigned char *VAR_7 = VAR_6->out + VAR_6->x.have;
      unsigned char *VAR_8 = VAR_6->out + (VAR_6->size << 1);
      while (VAR_7 > VAR_6->out)
         *--VAR_8 = *--VAR_7;
      VAR_6->x.next = VAR_8;
   }
   VAR_6->x.have++;
   VAR_6->x.next--;
   VAR_6->x.next[0] = VAR_4;
   VAR_6->x.pos--;
   VAR_6->past = 0;
   return VAR_4;
}
