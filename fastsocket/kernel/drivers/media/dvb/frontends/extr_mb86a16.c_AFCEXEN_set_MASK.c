
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

__attribute__((used)) static int FUNC_2(struct mb86a16_state *VAR_3,
         int VAR_4,
         int VAR_5)
{
 unsigned char VAR_6 ;

 if (VAR_5 > 18875)
  VAR_6 = 4;
 else if (VAR_5 > 9375)
  VAR_6 = 3;
 else if (VAR_5 > 2250)
  VAR_6 = 2;
 else
  VAR_6 = 1;

 if (FUNC_1(VAR_3, 0x2a, 0x02 | (VAR_4 << 5) | (VAR_6 << 2)) < 0)
  goto err;

 return 0;

err:
 FUNC_0(VAR_2, VAR_1, 1, "I2C transfer error");
 return -VAR_0;
}
