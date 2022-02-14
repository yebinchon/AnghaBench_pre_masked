
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fc_exch {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char*,int,int ,int ,int *) ;
 int FUNC_2 (int ) ;
 int VAR_6 ;

int FUNC_3(void)
{
 VAR_4 = FUNC_1("libfc_em", sizeof(struct fc_exch),
      0, VAR_1, ((void*)0));
 if (!VAR_4)
  return -VAR_0;
 VAR_2 = 1;
 VAR_3 = 0;
 while (VAR_2 < VAR_6) {
  VAR_2 <<= 1;
  VAR_3++;
 }
 VAR_2--;

 VAR_5 = FUNC_0("fc_exch_workqueue");
 if (!VAR_5)
  goto err;
 return 0;
err:
 FUNC_2(VAR_4);
 return -VAR_0;
}
