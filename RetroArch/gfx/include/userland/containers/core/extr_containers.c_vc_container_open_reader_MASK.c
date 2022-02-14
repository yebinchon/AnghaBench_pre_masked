
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VC_CONTAINER_T ;
typedef int VC_CONTAINER_STATUS_T ;
typedef int VC_CONTAINER_PROGRESS_REPORT_FUNC_T ;
typedef int VC_CONTAINER_IO_T ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*,int ,int *) ;
 int * FUNC_2 (int *,char const*,int *,int ,void*) ;

VC_CONTAINER_T *FUNC_3( const char *VAR_1, VC_CONTAINER_STATUS_T *VAR_2,
   VC_CONTAINER_PROGRESS_REPORT_FUNC_T VAR_3, void *VAR_4)
{
   VC_CONTAINER_IO_T *VAR_5;
   VC_CONTAINER_T *VAR_6;


   VAR_5 = FUNC_1( VAR_1, VAR_0, VAR_2 );
   if (!VAR_5)
      return 0;

   VAR_6 = FUNC_2( VAR_5, VAR_1, VAR_2, VAR_3, VAR_4);
   if (!VAR_6)
      FUNC_0(VAR_5);
   return VAR_6;
}
