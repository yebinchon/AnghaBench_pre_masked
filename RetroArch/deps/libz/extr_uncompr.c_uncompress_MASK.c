
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ avail_in; unsigned char* next_out; scalar_t__ total_out; void* zfree; void* zalloc; void* avail_out; int * next_in; } ;
typedef TYPE_1__ z_stream ;
typedef scalar_t__ uint32_t ;
typedef void* uInt ;
typedef int Bytef ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

int FUNC_3 (unsigned char *VAR_7, uint32_t *VAR_8, const unsigned char *VAR_9, uint32_t VAR_10)
{
   z_stream VAR_11;
   int VAR_12;

   VAR_11.next_in = (Bytef *)VAR_9;
   VAR_11.avail_in = (uInt)VAR_10;

   if ((uint32_t)VAR_11.avail_in != VAR_10) return VAR_0;

   VAR_11.next_out = VAR_7;
   VAR_11.avail_out = (uInt)*VAR_8;
   if ((uint32_t)VAR_11.avail_out != *VAR_8) return VAR_0;

   VAR_11.zalloc = VAR_4;
   VAR_11.zfree = VAR_4;

   VAR_12 = FUNC_2(&VAR_11);
   if (VAR_12 != VAR_5) return VAR_12;

   VAR_12 = FUNC_0(&VAR_11, VAR_2);
   if (VAR_12 != VAR_6)
   {
      FUNC_1(&VAR_11);
      if (VAR_12 == VAR_3 || (VAR_12 == VAR_0 && VAR_11.avail_in == 0))
         return VAR_1;
      return VAR_12;
   }
   *VAR_8 = VAR_11.total_out;

   VAR_12 = FUNC_1(&VAR_11);
   return VAR_12;
}
