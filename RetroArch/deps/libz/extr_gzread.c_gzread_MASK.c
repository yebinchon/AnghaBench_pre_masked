
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_2__* z_streamp ;
typedef char* voidp ;
typedef TYPE_3__* gz_statep ;
typedef int * gzFile ;
struct TYPE_9__ {int have; unsigned int next; unsigned int pos; } ;
struct TYPE_10__ {scalar_t__ avail_in; unsigned int avail_out; unsigned char* next_out; } ;
struct TYPE_11__ {scalar_t__ mode; scalar_t__ err; int past; scalar_t__ how; int size; TYPE_1__ x; scalar_t__ eof; int skip; scalar_t__ seek; TYPE_2__ strm; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*,int ,char*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*,unsigned char*,unsigned int,unsigned int*) ;
 int FUNC_4 (TYPE_3__*,int ) ;
 int FUNC_5 (char*,unsigned int,unsigned int) ;

int FUNC_6(gzFile VAR_6, voidp VAR_7, unsigned VAR_8)
{
   unsigned VAR_9, VAR_10;
   gz_statep VAR_11;
   z_streamp VAR_12;


   if (VAR_6 == ((void*)0))
      return -1;
   VAR_11 = (gz_statep)VAR_6;
   VAR_12 = &(VAR_11->strm);


   if (VAR_11->mode != VAR_0 ||
         (VAR_11->err != VAR_5 && VAR_11->err != VAR_3))
      return -1;



   if ((int)VAR_8 < 0) {
      FUNC_1(VAR_11, VAR_4, "requested length does not fit in int");
      return -1;
   }


   if (VAR_8 == 0)
      return 0;


   if (VAR_11->seek) {
      VAR_11->seek = 0;
      if (FUNC_4(VAR_11, VAR_11->skip) == -1)
         return -1;
   }


   VAR_9 = 0;
   VAR_10 = 0;
   do {

      if (VAR_11->x.have) {
         VAR_10 = VAR_11->x.have > VAR_8 ? VAR_8 : VAR_11->x.have;
         FUNC_5(VAR_7, VAR_11->x.next, VAR_10);
         VAR_11->x.next += VAR_10;
         VAR_11->x.have -= VAR_10;
      }


      else if (VAR_11->eof && VAR_12->avail_in == 0) {
         VAR_11->past = 1;
         break;
      }



      else if (VAR_11->how == VAR_1 || VAR_8 < (VAR_11->size << 1)) {

         if (FUNC_2(VAR_11) == -1)
            return -1;
         continue;


      }


      else if (VAR_11->how == VAR_2) {
         if (FUNC_3(VAR_11, (unsigned char *)VAR_7, VAR_8, &VAR_10) == -1)
            return -1;
      }


      else {
         VAR_12->avail_out = VAR_8;
         VAR_12->next_out = (unsigned char *)VAR_7;
         if (FUNC_0(VAR_11) == -1)
            return -1;
         VAR_10 = VAR_11->x.have;
         VAR_11->x.have = 0;
      }


      VAR_8 -= VAR_10;
      VAR_7 = (char *)VAR_7 + VAR_10;
      VAR_9 += VAR_10;
      VAR_11->x.pos += VAR_10;
   } while (VAR_8);


   return (int)VAR_9;
}
