
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct thermostat {int clt; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int*,int) ;

__attribute__((used)) static int
FUNC_2(struct thermostat* VAR_1, int VAR_2)
{
 u8 VAR_3, VAR_4;
 int VAR_5;

 VAR_3 = (u8)VAR_2;
 VAR_5 = FUNC_1(VAR_1->clt, &VAR_3, 1);
 if (VAR_5 < 0)
  return VAR_5;
 if (VAR_5 != 1)
  return -VAR_0;
 VAR_5 = FUNC_0(VAR_1->clt, (char *)&VAR_4, 1);
 if (VAR_5 < 0)
  return VAR_5;
 return VAR_4;
}
