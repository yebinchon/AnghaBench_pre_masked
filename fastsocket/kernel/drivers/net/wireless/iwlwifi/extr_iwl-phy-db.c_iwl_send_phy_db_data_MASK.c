
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct iwl_phy_db {int trans; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct iwl_phy_db*,int ,int **,int *,int ) ;
 int FUNC_3 (struct iwl_phy_db*,int ,int ) ;
 int FUNC_4 (struct iwl_phy_db*,int ,int ,int *) ;

int FUNC_5(struct iwl_phy_db *VAR_6)
{
 u8 *VAR_7 = ((void*)0);
 u16 VAR_8 = 0;
 int VAR_9;

 FUNC_0(VAR_6->trans,
         "Sending phy db data and configuration to runtime image\n");


 VAR_9 = FUNC_2(VAR_6, VAR_5,
       &VAR_7, &VAR_8, 0);
 if (VAR_9) {
  FUNC_1(VAR_6->trans, "Cannot get Phy DB cfg section\n");
  return VAR_9;
 }

 VAR_9 = FUNC_4(VAR_6, VAR_5, VAR_8, VAR_7);
 if (VAR_9) {
  FUNC_1(VAR_6->trans,
   "Cannot send HCMD of  Phy DB cfg section\n");
  return VAR_9;
 }

 VAR_9 = FUNC_2(VAR_6, VAR_4,
       &VAR_7, &VAR_8, 0);
 if (VAR_9) {
  FUNC_1(VAR_6->trans,
   "Cannot get Phy DB non specific channel section\n");
  return VAR_9;
 }

 VAR_9 = FUNC_4(VAR_6, VAR_4, VAR_8, VAR_7);
 if (VAR_9) {
  FUNC_1(VAR_6->trans,
   "Cannot send HCMD of Phy DB non specific channel section\n");
  return VAR_9;
 }


 VAR_9 = FUNC_3(VAR_6,
       VAR_2,
       VAR_0);
 if (VAR_9) {
  FUNC_1(VAR_6->trans,
   "Cannot send channel specific PAPD groups");
  return VAR_9;
 }


 VAR_9 = FUNC_3(VAR_6,
       VAR_3,
       VAR_1);
 if (VAR_9) {
  FUNC_1(VAR_6->trans,
   "Cannot send channel specific TX power groups");
  return VAR_9;
 }

 FUNC_0(VAR_6->trans,
         "Finished sending phy db non channel data\n");
 return 0;
}
