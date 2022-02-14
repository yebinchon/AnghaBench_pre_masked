
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int ,scalar_t__*) ;
 int FUNC_1 (int ,int ,scalar_t__) ;

int FUNC_2(u8 VAR_3)
{
 int VAR_4;
 u8 VAR_5 = 0;
 VAR_4 = FUNC_0(VAR_0, VAR_1, &VAR_5);
 if (VAR_4 < 0)
  return VAR_4;
 if (VAR_3)
  VAR_5 |= VAR_2;
 else
  VAR_5 &= ~VAR_2;
 return FUNC_1(VAR_0, VAR_1, VAR_5);
}
