
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lbs_private {int wol_criteria; } ;
struct cmd_header {int dummy; } ;
typedef int cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct lbs_private*,int ,struct cmd_header*,int,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (char*,...) ;
 int VAR_3 ;
 int FUNC_4 (struct cmd_header*,int ,int) ;

int FUNC_5(struct lbs_private *VAR_4)
{
 struct cmd_header VAR_5;
 int VAR_6;

 FUNC_1(VAR_2);

 if (VAR_4->wol_criteria == 0xffffffff) {
  FUNC_3("Suspend attempt without configuring wake params!\n");
  return -VAR_1;
 }

 FUNC_4(&VAR_5, 0, sizeof(VAR_5));

 VAR_6 = FUNC_0(VAR_4, VAR_0, &VAR_5,
   sizeof(VAR_5), VAR_3, 0);
 if (VAR_6)
  FUNC_3("HOST_SLEEP_ACTIVATE failed: %d\n", VAR_6);

 FUNC_2(VAR_2, "ret %d", VAR_6);
 return VAR_6;
}
