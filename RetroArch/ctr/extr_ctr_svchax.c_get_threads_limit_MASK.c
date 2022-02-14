
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef scalar_t__ s64 ;
typedef int Handle ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (scalar_t__*,int ,scalar_t__*,int) ;
 int FUNC_3 (scalar_t__*,int ,scalar_t__*,int) ;

__attribute__((used)) static u32 FUNC_4(void)
{
   Handle VAR_3;
   s64 VAR_4;
   s64 VAR_5;
   u32 VAR_6 = VAR_2;

   FUNC_1(&VAR_3, VAR_0);
   FUNC_2(&VAR_4, VAR_3, &VAR_6, 1);
   FUNC_3(&VAR_5, VAR_3, &VAR_6, 1);
   FUNC_0(VAR_3);

   if (VAR_5 > VAR_1)
      VAR_5 = VAR_1;

   return VAR_5 - VAR_4;
}
