
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;
struct msm_adsp_module {TYPE_1__ pdev; int name; } ;
struct adsp_device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,unsigned int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (scalar_t__,int ,int *,int ) ;
 unsigned int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int *,int ,unsigned int,char*) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (int,int ) ;

void FUNC_9(struct msm_adsp_module *VAR_6, unsigned VAR_7)
{
 int VAR_8;

 VAR_4 = FUNC_8(sizeof(struct adsp_device) * VAR_7, VAR_0);
 if (!VAR_4)
  return;

 VAR_2 = FUNC_5(VAR_1, "adsp");
 if (FUNC_0(VAR_2))
  goto fail_create_class;

 VAR_8 = FUNC_4(&VAR_5, 0, VAR_7, "adsp");
 if (VAR_8 < 0)
  goto fail_alloc_region;

 VAR_3 = VAR_7;
 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
  FUNC_3(VAR_4 + VAR_7,
       VAR_6[VAR_7].name, &VAR_6[VAR_7].pdev.dev,
       FUNC_2(FUNC_1(VAR_5), VAR_7));
 }

 return;

fail_alloc_region:
 FUNC_6(VAR_2);
fail_create_class:
 FUNC_7(VAR_4);
}
