
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int hwblk_id; int flags; int mutex; int entry; } ;
struct platform_device {TYPE_1__ archdata; } ;
struct notifier_block {int dummy; } ;
struct device {int dummy; } ;






 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int,int ) ;
 int FUNC_3 (int ,int,int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int) ;
 int VAR_2 ;
 int FUNC_6 (int *) ;
 struct platform_device* FUNC_7 (struct device*) ;

__attribute__((used)) static int FUNC_8(struct notifier_block *VAR_3,
          unsigned long VAR_4, void *VAR_5)
{
 struct device *VAR_6 = VAR_5;
 struct platform_device *VAR_7 = FUNC_7(VAR_6);
 int VAR_8 = VAR_7->archdata.hwblk_id;


 if (!VAR_8)
  return 0;

 switch (VAR_4) {
 case 131:
  FUNC_0(&VAR_7->archdata.entry);
  FUNC_6(&VAR_7->archdata.mutex);

  FUNC_5(VAR_2, VAR_8);
  FUNC_4(VAR_2, VAR_8);

  FUNC_1(VAR_1, &VAR_7->archdata.flags);
  break;

 case 130:

  FUNC_3(VAR_2, VAR_8, VAR_0);
  break;
 case 128:

  FUNC_2(VAR_2, VAR_8, VAR_0);

  FUNC_1(VAR_1, &VAR_7->archdata.flags);
  break;
 case 129:
  break;
 }
 return 0;
}
