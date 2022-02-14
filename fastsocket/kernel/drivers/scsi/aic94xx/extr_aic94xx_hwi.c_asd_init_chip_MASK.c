
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct asd_ha_struct {int pcidev; } ;


 int FUNC_0 (struct asd_ha_struct*) ;
 int FUNC_1 (struct asd_ha_struct*) ;
 int FUNC_2 (struct asd_ha_struct*) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (struct asd_ha_struct*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct asd_ha_struct *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_0(VAR_0);
 if (VAR_1) {
  FUNC_3("couldn't hard reset %s\n",
       FUNC_5(VAR_0->pcidev));
  goto out;
 }

 FUNC_1(VAR_0);

 VAR_1 = FUNC_2(VAR_0);
 if (VAR_1) {
  FUNC_3("couldn't init seqs for %s\n",
      FUNC_5(VAR_0->pcidev));
  goto out;
 }

 VAR_1 = FUNC_4(VAR_0);
 if (VAR_1) {
  FUNC_3("coudln't start seqs for %s\n",
      FUNC_5(VAR_0->pcidev));
  goto out;
 }
out:
 return VAR_1;
}
