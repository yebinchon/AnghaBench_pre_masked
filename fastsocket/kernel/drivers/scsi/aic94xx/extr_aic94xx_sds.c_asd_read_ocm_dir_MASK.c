
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct asd_ocm_dir {char* sig; scalar_t__ major; int num_de; } ;
struct asd_ha_struct {int dummy; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int FUNC_1 (char*,scalar_t__) ;
 int FUNC_2 (struct asd_ha_struct*,struct asd_ocm_dir*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct asd_ha_struct *VAR_1,
       struct asd_ocm_dir *VAR_2, u32 VAR_3)
{
 int VAR_4 = FUNC_2(VAR_1, VAR_2, VAR_3, sizeof(*VAR_2));
 if (VAR_4) {
  FUNC_0("couldn't read ocm segment\n");
  return VAR_4;
 }

 if (VAR_2->sig[0] != 'M' || VAR_2->sig[1] != 'O') {
  FUNC_0("no valid dir signature(%c%c) at start of OCM\n",
       VAR_2->sig[0], VAR_2->sig[1]);
  return -VAR_0;
 }
 if (VAR_2->major != 0) {
  FUNC_1("unsupported major version of ocm dir:0x%x\n",
      VAR_2->major);
  return -VAR_0;
 }
 VAR_2->num_de &= 0xf;
 return 0;
}
