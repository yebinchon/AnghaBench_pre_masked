
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ total_out; scalar_t__ opaque; void* zfree; void* zalloc; void* avail_out; int * next_out; void* avail_in; int * next_in; } ;
typedef TYPE_1__ z_stream ;
typedef scalar_t__ voidpf ;
typedef scalar_t__ uLongf ;
typedef scalar_t__ uLong ;
typedef void* uInt ;
typedef int Bytef ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int) ;

int FUNC_3 (Bytef *VAR_5, uLongf *VAR_6, const Bytef *VAR_7, uLong VAR_8, int VAR_9)
{
   z_stream VAR_10;
   int VAR_11;

   VAR_10.next_in = (Bytef *)VAR_7;
   VAR_10.avail_in = (uInt)VAR_8;




   VAR_10.next_out = VAR_5;
   VAR_10.avail_out = (uInt)*VAR_6;
   if ((uLong)VAR_10.avail_out != *VAR_6) return VAR_0;

   VAR_10.zalloc = VAR_2;
   VAR_10.zfree = VAR_2;
   VAR_10.opaque = (voidpf)0;

   VAR_11 = FUNC_2(&VAR_10, VAR_9);
   if (VAR_11 != VAR_3) return VAR_11;

   VAR_11 = FUNC_0(&VAR_10, VAR_1);
   if (VAR_11 != VAR_4) {
      FUNC_1(&VAR_10);
      return VAR_11 == VAR_3 ? VAR_0 : VAR_11;
   }
   *VAR_6 = VAR_10.total_out;

   VAR_11 = FUNC_1(&VAR_10);
   return VAR_11;
}
