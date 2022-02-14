
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* z_streamp ;
typedef TYPE_2__* gz_statep ;
struct TYPE_5__ {int avail_in; unsigned char* next_in; } ;
struct TYPE_6__ {scalar_t__ err; scalar_t__ eof; unsigned char* in; scalar_t__ size; TYPE_1__ strm; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_2__*,unsigned char*,scalar_t__,unsigned int*) ;

__attribute__((used)) static int FUNC_1(gz_statep VAR_2)
{
   unsigned VAR_3;
   z_streamp VAR_4 = &(VAR_2->strm);

   if (VAR_2->err != VAR_1 && VAR_2->err != VAR_0)
      return -1;
   if (VAR_2->eof == 0) {
      if (VAR_4->avail_in) {
         unsigned char *VAR_5 = VAR_2->in;
         unsigned const char *VAR_6 = VAR_4->next_in;
         unsigned VAR_7 = VAR_4->avail_in;
         do {
            *VAR_5++ = *VAR_6++;
         } while (--VAR_7);
      }
      if (FUNC_0(VAR_2, VAR_2->in + VAR_4->avail_in,
               VAR_2->size - VAR_4->avail_in, &VAR_3) == -1)
         return -1;
      VAR_4->avail_in += VAR_3;
      VAR_4->next_in = VAR_2->in;
   }
   return 0;
}
