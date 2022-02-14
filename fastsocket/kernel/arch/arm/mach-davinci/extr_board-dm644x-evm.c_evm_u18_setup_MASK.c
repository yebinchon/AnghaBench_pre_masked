
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,char*) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_5(struct i2c_client *VAR_3, int VAR_4, unsigned VAR_5, void *VAR_6)
{
 int VAR_7;


 VAR_2 = VAR_4 + 7;
 VAR_7 = FUNC_4(VAR_2, "user_sw");
 if (VAR_7 == 0)
  VAR_7 = FUNC_1(VAR_2);
 if (VAR_7 == 0)
  VAR_7 = FUNC_0(&VAR_3->dev, &VAR_1);
 else
  FUNC_3(VAR_2);
 if (VAR_7 != 0)
  VAR_2 = -VAR_0;


 FUNC_4(VAR_4 + 3, "pll_fs2");
 FUNC_2(VAR_4 + 3, 0);

 FUNC_4(VAR_4 + 2, "pll_fs1");
 FUNC_2(VAR_4 + 2, 0);

 FUNC_4(VAR_4 + 1, "pll_sr");
 FUNC_2(VAR_4 + 1, 0);

 return 0;
}
