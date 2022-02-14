
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_ctxt {struct msm_snd_endpoints* snd_epts; int lock; } ;
struct TYPE_2__ {scalar_t__ platform_data; } ;
struct platform_device {TYPE_1__ dev; } ;
struct msm_snd_endpoints {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 struct snd_ctxt VAR_1 ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_2)
{
 struct snd_ctxt *VAR_3 = &VAR_1;
 FUNC_1(&VAR_3->lock);
 VAR_3->snd_epts = (struct msm_snd_endpoints *)VAR_2->dev.platform_data;
 return FUNC_0(&VAR_0);
}
