
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stv090x_state {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct stv090x_state*,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,int,char*) ;

__attribute__((used)) static int FUNC_2(struct stv090x_state *VAR_7)
{
 if (FUNC_0(VAR_7, VAR_1, 0x96) < 0)
  goto err;
 if (FUNC_0(VAR_7, VAR_2, 0x64) < 0)
  goto err;
 if (FUNC_0(VAR_7, VAR_3, 0x36) < 0)
  goto err;
 if (FUNC_0(VAR_7, VAR_4, 0x23) < 0)
  goto err;
 if (FUNC_0(VAR_7, VAR_5, 0x1e) < 0)
  goto err;
 if (FUNC_0(VAR_7, VAR_6, 0x19) < 0)
  goto err;
 return 0;
err:
 FUNC_1(VAR_0, 1, "I/O error");
 return -1;
}
