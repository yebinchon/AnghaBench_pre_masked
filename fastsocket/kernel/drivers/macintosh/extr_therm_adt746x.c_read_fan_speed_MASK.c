
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct thermostat {int dummy; } ;


 int FUNC_0 (struct thermostat*,int) ;

__attribute__((used)) static int FUNC_1(struct thermostat *VAR_0, u8 VAR_1)
{
 u8 VAR_2[2];
 u16 VAR_3;


 VAR_2[1] = FUNC_0(VAR_0, VAR_1);
 VAR_2[0] = FUNC_0(VAR_0, VAR_1 + 1);

 VAR_3 = VAR_2[1] + (VAR_2[0] << 8);

 return (VAR_3 == 0xffff ? 0 : (90000*60)/VAR_3);
}
