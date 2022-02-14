
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct asd_ha_struct {int pcidev; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,...) ;
 int FUNC_1 (struct asd_ha_struct*) ;
 int FUNC_2 (struct asd_ha_struct*) ;
 int FUNC_3 (struct asd_ha_struct*) ;
 int FUNC_4 (int ) ;

int FUNC_5(struct asd_ha_struct *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_1(VAR_1);

 if (VAR_2) {
  FUNC_0("Failed to load sequencer firmware file %s, error %d\n",
      VAR_0, VAR_2);
  return VAR_2;
 }

 VAR_2 = FUNC_2(VAR_1);
 if (VAR_2) {
  FUNC_0("couldn't download sequencers for %s\n",
      FUNC_4(VAR_1->pcidev));
  return VAR_2;
 }

 FUNC_3(VAR_1);

 return 0;
}
