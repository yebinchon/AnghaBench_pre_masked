
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iwl_trans {int dummy; } ;
typedef enum iwl_d3_status { ____Placeholder_iwl_d3_status } iwl_d3_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct iwl_trans*,char*) ;
 int FUNC_1 (struct iwl_trans*) ;
 int FUNC_2 (struct iwl_trans*) ;
 int FUNC_3 (struct iwl_trans*,int) ;
 int FUNC_4 (struct iwl_trans*,int ,int ,int ,int) ;
 int FUNC_5 (struct iwl_trans*,int ) ;
 int FUNC_6 (struct iwl_trans*,int ,int ) ;
 int FUNC_7 (struct iwl_trans*) ;
 int FUNC_8 (struct iwl_trans*,int ,int ) ;

__attribute__((used)) static int FUNC_9(struct iwl_trans *VAR_10,
        enum iwl_d3_status *VAR_11)
{
 u32 VAR_12;
 int VAR_13;

 FUNC_3(VAR_10, 0);

 VAR_12 = FUNC_5(VAR_10, VAR_4);
 if (VAR_12 & VAR_5) {
  *VAR_11 = VAR_9;
  return 0;
 }






 FUNC_1(VAR_10);

 FUNC_6(VAR_10, VAR_0, VAR_2);
 FUNC_6(VAR_10, VAR_0, VAR_1);

 VAR_13 = FUNC_4(VAR_10, VAR_0,
      VAR_3,
      VAR_3,
      25000);
 if (VAR_13) {
  FUNC_0(VAR_10, "Failed to resume the device (mac ready)\n");
  return VAR_13;
 }

 FUNC_7(VAR_10);

 VAR_13 = FUNC_2(VAR_10);
 if (VAR_13) {
  FUNC_0(VAR_10, "Failed to resume the device (RX reset)\n");
  return VAR_13;
 }

 FUNC_8(VAR_10, VAR_7,
      VAR_6);

 *VAR_11 = VAR_8;
 return 0;
}
