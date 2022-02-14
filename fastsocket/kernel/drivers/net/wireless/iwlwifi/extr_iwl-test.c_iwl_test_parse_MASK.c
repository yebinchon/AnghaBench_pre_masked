
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
struct iwl_test {int trans; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct nlattr**,scalar_t__,void*,int,int ) ;

int FUNC_2(struct iwl_test *VAR_4, struct nlattr **VAR_5,
     void *VAR_6, int VAR_7)
{
 int VAR_8;

 VAR_8 = FUNC_1(VAR_5, VAR_2 - 1, VAR_6, VAR_7,
   VAR_3);
 if (VAR_8) {
  FUNC_0(VAR_4->trans, "Fail parse gnl msg: %d\n", VAR_8);
  return VAR_8;
 }


 if (!VAR_5[VAR_1]) {
  FUNC_0(VAR_4->trans, "Missing testmode command type\n");
  return -VAR_0;
 }
 return 0;
}
