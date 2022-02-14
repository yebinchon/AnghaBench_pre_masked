
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mb86a16_state {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int,char*) ;
 scalar_t__ FUNC_1 (struct mb86a16_state*,int,int) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_2(struct mb86a16_state *VAR_3, unsigned char VAR_4)
{

 if (FUNC_1(VAR_3, 0x06, 0xdf | (VAR_4 << 5)) < 0) {
  FUNC_0(VAR_2, VAR_1, 1, "I2C transfer error");
  return -VAR_0;
 }

 return 0;
}
