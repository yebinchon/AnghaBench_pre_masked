
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct warm_change_cb {unsigned long addr; unsigned long size; int cb; int is_set; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int ,struct warm_change_cb*) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_1 ;

int FUNC_2(int VAR_2, int VAR_3, void *VAR_4, unsigned long VAR_5)
{
 struct warm_change_cb VAR_6;
 int VAR_7;

 if (VAR_1 < 0)
  return -1;

 VAR_6.addr = (unsigned long)VAR_4;
 VAR_6.size = VAR_5;
 VAR_6.cb = VAR_2;
 VAR_6.is_set = VAR_3;

 VAR_7 = FUNC_0(VAR_1, VAR_0, &VAR_6);
 if (VAR_7 != 0) {
  FUNC_1("WARMC_CHANGE_CB failed");
  return -1;
 }

 return 0;
}
