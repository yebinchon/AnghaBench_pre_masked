
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mb86a16_state {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (struct mb86a16_state*,int ,int ) ;
 scalar_t__ FUNC_1 (struct mb86a16_state*,int ,int ) ;
 int FUNC_2 (int ,int ,int,char*) ;
 scalar_t__ FUNC_3 (struct mb86a16_state*,int,int) ;
 scalar_t__ FUNC_4 (struct mb86a16_state*,int,int) ;
 int FUNC_5 (int) ;
 int VAR_10 ;

__attribute__((used)) static int FUNC_6(struct mb86a16_state *VAR_11)
{
 if (FUNC_4(VAR_11, 5, 7))
  goto err;

 FUNC_5(100);
 if (FUNC_0(VAR_11, 0, 0))
  goto err;

 FUNC_5(100);
 if (FUNC_1(VAR_11, 0, 0))
  goto err;

 FUNC_5(100);
 if (FUNC_3(VAR_11, VAR_1, 0x16) < 0)
  goto err;
 if (FUNC_3(VAR_11, 0x2f, 0x21) < 0)
  goto err;
 if (FUNC_3(VAR_11, VAR_9, 0x38) < 0)
  goto err;
 if (FUNC_3(VAR_11, VAR_3, 0x00) < 0)
  goto err;
 if (FUNC_3(VAR_11, VAR_4, 0x1c) < 0)
  goto err;
 if (FUNC_3(VAR_11, VAR_5, 0x20) < 0)
  goto err;
 if (FUNC_3(VAR_11, VAR_6, 0x1e) < 0)
  goto err;
 if (FUNC_3(VAR_11, VAR_7, 0x23) < 0)
  goto err;
 if (FUNC_3(VAR_11, 0x54, 0xff) < 0)
  goto err;
 if (FUNC_3(VAR_11, VAR_8, 0x00) < 0)
  goto err;

 return 0;

err:
 FUNC_2(VAR_10, VAR_2, 1, "I2C transfer error");
 return -VAR_0;
}
