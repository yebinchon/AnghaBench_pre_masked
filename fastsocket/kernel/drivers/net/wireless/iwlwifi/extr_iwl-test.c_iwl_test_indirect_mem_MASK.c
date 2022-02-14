
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct nlattr {int dummy; } ;
struct TYPE_2__ {scalar_t__ in_read; } ;
struct iwl_test {int trans; TYPE_1__ mem; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (struct iwl_test*,scalar_t__,scalar_t__) ;
 int FUNC_2 (struct iwl_test*,scalar_t__,scalar_t__,unsigned char*) ;
 scalar_t__ FUNC_3 (struct nlattr*) ;
 scalar_t__ FUNC_4 (struct nlattr*) ;

__attribute__((used)) static int FUNC_5(struct iwl_test *VAR_8, struct nlattr **VAR_9)
{
 u32 VAR_10, VAR_11, VAR_12;
 unsigned char *VAR_13;


 if (VAR_8->mem.in_read)
  return -VAR_0;

 VAR_12 = FUNC_4(VAR_9[VAR_5]);
 if (!VAR_9[VAR_6]) {
  FUNC_0(VAR_8->trans, "Error finding memory offset address\n");
  return -VAR_2;
 }
 VAR_10 = FUNC_4(VAR_9[VAR_6]);
 if (!VAR_9[VAR_4]) {
  FUNC_0(VAR_8->trans, "Error finding size for memory reading\n");
  return -VAR_2;
 }
 VAR_11 = FUNC_4(VAR_9[VAR_4]);

 if (VAR_12 == VAR_7) {
  return FUNC_1(VAR_8, VAR_10, VAR_11);
 } else {
  if (!VAR_9[VAR_3])
   return -VAR_1;
  VAR_13 = (unsigned char *)FUNC_3(VAR_9[VAR_3]);
  return FUNC_2(VAR_8, VAR_10, VAR_11, VAR_13);
 }
}
