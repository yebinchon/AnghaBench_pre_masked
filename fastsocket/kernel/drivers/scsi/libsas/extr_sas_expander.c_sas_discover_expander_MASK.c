
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct domain_device {int sas_addr; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (struct domain_device*) ;
 int FUNC_3 (struct domain_device*) ;
 int FUNC_4 (struct domain_device*) ;
 int FUNC_5 (struct domain_device*) ;
 int FUNC_6 (struct domain_device*) ;
 int FUNC_7 (struct domain_device*) ;
 int FUNC_8 (struct domain_device*) ;

__attribute__((used)) static int FUNC_9(struct domain_device *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_7(VAR_0);
 if (VAR_1)
  return VAR_1;

 VAR_1 = FUNC_4(VAR_0);
 if (VAR_1)
  goto out_err;
 VAR_1 = FUNC_5(VAR_0);
 if (VAR_1)
  goto out_err;

 VAR_1 = FUNC_6(VAR_0);
 if (VAR_1) {
  FUNC_1("expander %016llx discovery failed(0x%x)\n",
       FUNC_0(VAR_0->sas_addr), VAR_1);
  goto out_err;
 }

 FUNC_2(VAR_0);
 VAR_1 = FUNC_3(VAR_0);
 if (VAR_1)
  goto out_err;
 return 0;
out_err:
 FUNC_8(VAR_0);
 return VAR_1;
}
