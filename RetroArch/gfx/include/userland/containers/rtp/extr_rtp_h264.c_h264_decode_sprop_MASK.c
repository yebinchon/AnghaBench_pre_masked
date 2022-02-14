
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VC_CONTAINER_TRACK_T ;
typedef int VC_CONTAINER_T ;
typedef int VC_CONTAINER_STATUS_T ;
typedef int VC_CONTAINER_BITS_T ;


 int FUNC_0 (int *,int *,int,char*) ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int *,int *) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_2(VC_CONTAINER_T *VAR_3,
      VC_CONTAINER_TRACK_T *VAR_4,
      VC_CONTAINER_BITS_T *VAR_5)
{
   switch (FUNC_0(VAR_3, VAR_5, 8, "nal_unit_header") & VAR_0)
   {
   case 128:
      return FUNC_1(VAR_3, VAR_4, VAR_5);
   case 129:

      return VAR_2;
   default:
      return VAR_1;
   }
}
