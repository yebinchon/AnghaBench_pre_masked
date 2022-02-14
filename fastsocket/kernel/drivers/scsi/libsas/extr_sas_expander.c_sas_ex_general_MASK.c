
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smp_resp {int result; } ;
typedef struct smp_resp u8 ;
struct TYPE_2__ {scalar_t__ configuring; } ;
struct domain_device {int sas_addr; TYPE_1__ ex_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,...) ;
 struct smp_resp VAR_4 ;
 int VAR_5 ;
 struct smp_resp* FUNC_2 (int ) ;
 struct smp_resp* FUNC_3 (int ) ;
 int FUNC_4 (struct domain_device*,struct smp_resp*) ;
 int FUNC_5 (struct smp_resp*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct domain_device*,struct smp_resp*,int ,struct smp_resp*,int ) ;

__attribute__((used)) static int FUNC_8(struct domain_device *VAR_6)
{
 u8 *VAR_7;
 struct smp_resp *VAR_8;
 int VAR_9;
 int VAR_10;

 VAR_7 = FUNC_2(VAR_2);
 if (!VAR_7)
  return -VAR_0;

 VAR_8 = FUNC_3(VAR_3);
 if (!VAR_8) {
  FUNC_5(VAR_7);
  return -VAR_0;
 }

 VAR_7[1] = VAR_4;

 for (VAR_10 = 0; VAR_10 < 5; VAR_10++) {
  VAR_9 = FUNC_7(VAR_6, VAR_7, VAR_2, VAR_8,
           VAR_3);

  if (VAR_9) {
   FUNC_1("RG to ex %016llx failed:0x%x\n",
        FUNC_0(VAR_6->sas_addr), VAR_9);
   goto out;
  } else if (VAR_8->result != VAR_5) {
   FUNC_1("RG:ex %016llx returned SMP result:0x%x\n",
        FUNC_0(VAR_6->sas_addr), VAR_8->result);
   VAR_9 = VAR_8->result;
   goto out;
  }

  FUNC_4(VAR_6, VAR_8);

  if (VAR_6->ex_dev.configuring) {
   FUNC_1("RG: ex %llx self-configuring...\n",
        FUNC_0(VAR_6->sas_addr));
   FUNC_6(5*VAR_1);
  } else
   break;
 }
out:
 FUNC_5(VAR_7);
 FUNC_5(VAR_8);
 return VAR_9;
}
