
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_2__* gz_statep ;
typedef int * gzFile ;
struct TYPE_5__ {unsigned int have; unsigned char* next; unsigned int pos; } ;
struct TYPE_6__ {scalar_t__ mode; scalar_t__ err; int past; TYPE_1__ x; int skip; scalar_t__ seek; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_2 (unsigned char*,char,unsigned int) ;
 int FUNC_3 (char*,unsigned char*,unsigned int) ;

char * FUNC_4(gzFile VAR_3, char *VAR_4, int VAR_5)
{
   unsigned VAR_6, VAR_7;
   char *VAR_8;
   unsigned char *VAR_9;
   gz_statep VAR_10;


   if (VAR_3 == ((void*)0) || VAR_4 == ((void*)0) || VAR_5 < 1)
      return ((void*)0);
   VAR_10 = (gz_statep)VAR_3;


   if (VAR_10->mode != VAR_0 ||
         (VAR_10->err != VAR_2 && VAR_10->err != VAR_1))
      return ((void*)0);


   if (VAR_10->seek) {
      VAR_10->seek = 0;
      if (FUNC_1(VAR_10, VAR_10->skip) == -1)
         return ((void*)0);
   }




   VAR_8 = VAR_4;
   VAR_6 = (unsigned)VAR_5 - 1;
   if (VAR_6) do {

      if (VAR_10->x.have == 0 && FUNC_0(VAR_10) == -1)
         return ((void*)0);
      if (VAR_10->x.have == 0) {
         VAR_10->past = 1;
         break;
      }


      VAR_7 = VAR_10->x.have > VAR_6 ? VAR_6 : VAR_10->x.have;
      VAR_9 = (unsigned char *)FUNC_2(VAR_10->x.next, '\n', VAR_7);
      if (VAR_9 != ((void*)0))
         VAR_7 = (unsigned)(VAR_9 - VAR_10->x.next) + 1;


      FUNC_3(VAR_4, VAR_10->x.next, VAR_7);
      VAR_10->x.have -= VAR_7;
      VAR_10->x.next += VAR_7;
      VAR_10->x.pos += VAR_7;
      VAR_6 -= VAR_7;
      VAR_4 += VAR_7;
   } while (VAR_6 && VAR_9 == ((void*)0));


   if (VAR_4 == VAR_8)
      return ((void*)0);
   VAR_4[0] = 0;
   return VAR_8;
}
