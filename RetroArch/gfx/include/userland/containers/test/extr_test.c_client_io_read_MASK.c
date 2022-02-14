
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int status; scalar_t__ module; } ;
typedef TYPE_1__ VC_CONTAINER_IO_T ;
typedef int FILE ;


 int FUNC_0 (int ,char*,size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *) ;
 size_t FUNC_2 (void*,int,size_t,int *) ;

__attribute__((used)) static size_t FUNC_3(VC_CONTAINER_IO_T *VAR_2, void *VAR_3, size_t VAR_4)
{
   FILE *VAR_5 = (FILE *)VAR_2->module;
   size_t VAR_6 = FUNC_2(VAR_3, 1, VAR_4, VAR_5);
   if(VAR_6 != VAR_4)
   {

      if( ((int)VAR_6) < 0 ) VAR_6 = 0;

      if( FUNC_1(VAR_5) ) VAR_2->status = VAR_0;
      else VAR_2->status = VAR_1;
   }
   FUNC_0( 0, "read: %i", VAR_6 );
   return VAR_6;
}
