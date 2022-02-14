
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct iwl_trans {int dummy; } ;
struct iwl_test {struct iwl_trans* trans; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct iwl_trans*,char*,scalar_t__) ;
 int FUNC_1 (struct iwl_trans*,char*,...) ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;



 scalar_t__ FUNC_2 (struct iwl_trans*,scalar_t__) ;
 struct sk_buff* FUNC_3 (struct iwl_test*,int) ;
 int FUNC_4 (struct iwl_test*,struct sk_buff*) ;
 int FUNC_5 (struct iwl_trans*,scalar_t__,scalar_t__) ;
 int FUNC_6 (struct iwl_trans*,scalar_t__,scalar_t__) ;
 int FUNC_7 (struct sk_buff*) ;
 scalar_t__ FUNC_8 (struct nlattr*) ;
 scalar_t__ FUNC_9 (struct nlattr*) ;
 int FUNC_10 (struct sk_buff*,size_t,scalar_t__) ;

__attribute__((used)) static int FUNC_11(struct iwl_test *VAR_9, struct nlattr **VAR_10)
{
 u32 VAR_11, VAR_12, VAR_13;
 u8 VAR_14;
 struct sk_buff *VAR_15;
 int VAR_16 = 0;
 struct iwl_trans *VAR_17 = VAR_9->trans;

 if (!VAR_10[VAR_6]) {
  FUNC_1(VAR_17, "Missing reg offset\n");
  return -VAR_3;
 }

 VAR_11 = FUNC_8(VAR_10[VAR_6]);
 FUNC_0(VAR_17, "test reg access cmd offset=0x%x\n", VAR_11);

 VAR_13 = FUNC_8(VAR_10[VAR_5]);






 if (VAR_11 >= VAR_4) {
  FUNC_1(VAR_17, "offset out of segment (0x0 - 0x%x)\n",
   VAR_4);
  return -VAR_0;
 }

 switch (VAR_13) {
 case 130:
  VAR_12 = FUNC_2(VAR_9->trans, VAR_11);
  FUNC_0(VAR_17, "32 value to read 0x%x\n", VAR_12);

  VAR_15 = FUNC_3(VAR_9, 20);
  if (!VAR_15) {
   FUNC_1(VAR_17, "Memory allocation fail\n");
   return -VAR_2;
  }
  if (FUNC_10(VAR_15, VAR_7, VAR_12))
   goto nla_put_failure;
  VAR_16 = FUNC_4(VAR_9, VAR_15);
  if (VAR_16 < 0)
   FUNC_1(VAR_17, "Error sending msg : %d\n", VAR_16);
  break;

 case 129:
  if (!VAR_10[VAR_7]) {
   FUNC_1(VAR_17, "Missing value to write\n");
   return -VAR_3;
  } else {
   VAR_12 = FUNC_8(VAR_10[VAR_7]);
   FUNC_0(VAR_17, "32b write val=0x%x\n", VAR_12);
   FUNC_6(VAR_9->trans, VAR_11, VAR_12);
  }
  break;

 case 128:
  if (!VAR_10[VAR_8]) {
   FUNC_1(VAR_17, "Missing value to write\n");
   return -VAR_3;
  } else {
   VAR_14 = FUNC_9(VAR_10[VAR_8]);
   FUNC_0(VAR_17, "8b write val=0x%x\n", VAR_14);
   FUNC_5(VAR_9->trans, VAR_11, VAR_14);
  }
  break;

 default:
  FUNC_1(VAR_17, "Unknown test register cmd ID\n");
  return -VAR_3;
 }

 return VAR_16;

nla_put_failure:
 FUNC_7(VAR_15);
 return -VAR_1;
}
