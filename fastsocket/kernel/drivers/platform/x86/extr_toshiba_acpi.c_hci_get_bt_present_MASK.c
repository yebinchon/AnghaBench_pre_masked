
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,scalar_t__*,scalar_t__*,scalar_t__*) ;

__attribute__((used)) static u32 FUNC_1(bool *VAR_3)
{
 u32 VAR_4;
 u32 VAR_5, VAR_6;

 VAR_5 = 0;
 VAR_6 = 0;
 FUNC_0(VAR_1, &VAR_5, &VAR_6, &VAR_4);
 if (VAR_4 == VAR_0)
  *VAR_3 = (VAR_5 & VAR_2) ? 1 : 0;

 return VAR_4;
}
