
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int change_count; } ;
struct smp_resp {int result; TYPE_1__ rg; } ;
typedef struct smp_resp u8 ;
struct domain_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct smp_resp VAR_3 ;
 int VAR_4 ;
 struct smp_resp* FUNC_0 (int ) ;
 struct smp_resp* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct smp_resp*) ;
 int FUNC_4 (struct domain_device*,struct smp_resp*,int ,struct smp_resp*,int ) ;

__attribute__((used)) static int FUNC_5(struct domain_device *VAR_5, int *VAR_6)
{
 int VAR_7;
 u8 *VAR_8;
 struct smp_resp *VAR_9;

 VAR_8 = FUNC_0(VAR_1);
 if (!VAR_8)
  return -VAR_0;

 VAR_9 = FUNC_1(VAR_2);
 if (!VAR_9) {
  FUNC_3(VAR_8);
  return -VAR_0;
 }

 VAR_8[1] = VAR_3;

 VAR_7 = FUNC_4(VAR_5, VAR_8, VAR_1, VAR_9,
          VAR_2);
 if (VAR_7)
  goto out;
 if (VAR_9->result != VAR_4) {
  VAR_7 = VAR_9->result;
  goto out;
 }

 *VAR_6 = FUNC_2(VAR_9->rg.change_count);
out:
 FUNC_3(VAR_9);
 FUNC_3(VAR_8);
 return VAR_7;
}
