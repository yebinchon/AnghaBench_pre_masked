
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct msm_vfe_callback {int dummy; } ;


 int FUNC_0 (struct platform_device*) ;
 int FUNC_1 (struct msm_vfe_callback*,struct platform_device*,int ) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_2(struct msm_vfe_callback *VAR_1,
 struct platform_device *VAR_2)
{
 int VAR_3 = 0;

 VAR_3 = FUNC_1(VAR_1, VAR_2, VAR_0);
 if (VAR_3 < 0)
  return VAR_3;


 return FUNC_0(VAR_2);
}
