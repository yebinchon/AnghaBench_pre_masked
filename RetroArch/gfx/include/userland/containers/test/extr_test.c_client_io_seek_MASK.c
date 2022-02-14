
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
typedef void* VC_CONTAINER_STATUS_T ;
struct TYPE_3__ {void* status; scalar_t__ module; } ;
typedef TYPE_1__ VC_CONTAINER_IO_T ;
typedef int FILE ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,long,int ) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_3(VC_CONTAINER_IO_T *VAR_5, int64_t VAR_6)
{
   VC_CONTAINER_STATUS_T VAR_7 = VAR_4;
   FILE *VAR_8 = (FILE *)VAR_5->module;
   int VAR_9;


   if (VAR_6 > (int64_t)VAR_1)
   {
      FUNC_0( 0, "no large file support");
      VAR_5->status = VAR_2;
      return VAR_2;
   }

   VAR_9 = FUNC_2(VAR_8, (long)VAR_6, VAR_0);
   if(VAR_9)
   {
      if( FUNC_1(VAR_8) ) VAR_7 = VAR_2;
      else VAR_7 = VAR_3;
   }

   VAR_5->status = VAR_7;
   return VAR_7;
}
