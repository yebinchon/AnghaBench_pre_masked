
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_2(VAR_1, "tc6393xb #pclr");
 if (VAR_4)
  goto err_req_pclr;
 VAR_4 = FUNC_2(VAR_2, "tc6393xb #suspend");
 if (VAR_4)
  goto err_req_suspend;
 VAR_4 = FUNC_2(VAR_0, "tc6393xb l3v");
 if (VAR_4)
  goto err_req_l3v;
 VAR_4 = FUNC_0(VAR_0, 0);
 if (VAR_4)
  goto err_dir_l3v;
 VAR_4 = FUNC_0(VAR_2, 0);
 if (VAR_4)
  goto err_dir_suspend;
 VAR_4 = FUNC_0(VAR_1, 0);
 if (VAR_4)
  goto err_dir_pclr;

 FUNC_4(1);

 FUNC_3(VAR_2, 1);

 FUNC_4(10);

 FUNC_3(VAR_1, 1);
 FUNC_3(VAR_0, 1);

 return 0;
err_dir_pclr:
err_dir_suspend:
err_dir_l3v:
 FUNC_1(VAR_0);
err_req_l3v:
 FUNC_1(VAR_2);
err_req_suspend:
 FUNC_1(VAR_1);
err_req_pclr:
 return VAR_4;
}
