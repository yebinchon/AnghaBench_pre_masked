
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,void const*,size_t) ;

__attribute__((used)) static ssize_t FUNC_2(void *VAR_4, const void *VAR_5, size_t VAR_6)
{
   ssize_t VAR_7;
   int *VAR_8 = (int*)VAR_4;

   if (VAR_6 == 0)
      return 0;

   if ((VAR_7 = FUNC_1(*VAR_8, VAR_5, VAR_6)) < 0)
   {
      if (VAR_3 == VAR_0 && (FUNC_0(*VAR_8, VAR_1) & VAR_2))
         return 0;

      return -1;
   }

   return VAR_7;
}
