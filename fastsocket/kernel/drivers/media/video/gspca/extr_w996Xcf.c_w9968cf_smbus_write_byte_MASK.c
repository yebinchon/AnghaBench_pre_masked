
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sd {int dummy; } ;


 int FUNC_0 (struct sd*,int) ;

__attribute__((used)) static void FUNC_1(struct sd *VAR_0, u8 VAR_1)
{
 u8 VAR_2;
 int VAR_3;

 for (VAR_2 = 0 ; VAR_2 < 8 ; VAR_2++) {
  VAR_3 = (VAR_1 & 0x80) ? 2 : 0;
  VAR_1 <<= 1;

  FUNC_0(VAR_0, 0x10 | VAR_3);

  FUNC_0(VAR_0, 0x11 | VAR_3);

  FUNC_0(VAR_0, 0x10 | VAR_3);
 }
}
