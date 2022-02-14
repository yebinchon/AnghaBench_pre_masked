
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VCOS_STATUS_T ;
typedef int VCOS_ONCE_T ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,void (*) ()) ;
 int FUNC_1 (int ) ;

VCOS_STATUS_T FUNC_2(VCOS_ONCE_T *VAR_4,
                        void (*VAR_5)(void))
{
   int VAR_6 = FUNC_0(VAR_4, VAR_5);
   if (VAR_6 != 0)
   {
      switch (VAR_3)
      {
      case 128:
         return VAR_1;
      default:
         FUNC_1(0);
         return VAR_0;
      }
   }
   else
   {
      return VAR_2;
   }
}
