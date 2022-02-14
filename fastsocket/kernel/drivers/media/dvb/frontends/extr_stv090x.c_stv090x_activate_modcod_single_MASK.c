
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stv090x_state {int dummy; } ;


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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ FUNC_0 (struct stv090x_state*,int ,int) ;
 int FUNC_1 (int ,int,char*) ;

__attribute__((used)) static int FUNC_2(struct stv090x_state *VAR_17)
{

 if (FUNC_0(VAR_17, VAR_1, 0xff) < 0)
  goto err;
 if (FUNC_0(VAR_17, VAR_2, 0xf0) < 0)
  goto err;
 if (FUNC_0(VAR_17, VAR_3, 0x00) < 0)
  goto err;
 if (FUNC_0(VAR_17, VAR_4, 0x00) < 0)
  goto err;
 if (FUNC_0(VAR_17, VAR_5, 0x00) < 0)
  goto err;
 if (FUNC_0(VAR_17, VAR_6, 0x00) < 0)
  goto err;
 if (FUNC_0(VAR_17, VAR_7, 0x00) < 0)
  goto err;
 if (FUNC_0(VAR_17, VAR_8, 0x00) < 0)
  goto err;
 if (FUNC_0(VAR_17, VAR_9, 0x00) < 0)
  goto err;
 if (FUNC_0(VAR_17, VAR_10, 0x00) < 0)
  goto err;
 if (FUNC_0(VAR_17, VAR_11, 0x00) < 0)
  goto err;
 if (FUNC_0(VAR_17, VAR_12, 0x00) < 0)
  goto err;
 if (FUNC_0(VAR_17, VAR_13, 0x00) < 0)
  goto err;
 if (FUNC_0(VAR_17, VAR_14, 0x00) < 0)
  goto err;
 if (FUNC_0(VAR_17, VAR_15, 0x00) < 0)
  goto err;
 if (FUNC_0(VAR_17, VAR_16, 0x0f) < 0)
  goto err;

 return 0;

err:
 FUNC_1(VAR_0, 1, "I/O error");
 return -1;
}
