
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int) ;
 int VAR_2 ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,char*) ;

__attribute__((used)) static int FUNC_7(void)
{
 int VAR_3;

 VAR_3 = FUNC_6(&VAR_2, "mmc");
 if (VAR_3)
  goto out;


 VAR_3 = FUNC_3(VAR_1, "mmc wp");
 if (VAR_3)
  goto out_wp;

 FUNC_0(VAR_1);


 VAR_3 = FUNC_3(VAR_0, "mmc power");
 if (VAR_3)
  goto out_power;

 FUNC_1(VAR_0, 0);
 FUNC_4(100);

 return 0;

out_power:
 FUNC_2(VAR_1);
out_wp:
 FUNC_5(&VAR_2, "mmc");
out:
 return VAR_3;
}
