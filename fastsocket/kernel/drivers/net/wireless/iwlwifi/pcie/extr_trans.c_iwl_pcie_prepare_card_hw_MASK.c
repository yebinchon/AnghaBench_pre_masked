
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_trans {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct iwl_trans*,char*) ;
 int FUNC_1 (struct iwl_trans*) ;
 int FUNC_2 (struct iwl_trans*,int ,int ) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static int FUNC_4(struct iwl_trans *VAR_2)
{
 int VAR_3;
 int VAR_4 = 0;

 FUNC_0(VAR_2, "iwl_trans_prepare_card_hw enter\n");

 VAR_3 = FUNC_1(VAR_2);

 if (VAR_3 >= 0)
  return 0;


 FUNC_2(VAR_2, VAR_0,
      VAR_1);

 do {
  VAR_3 = FUNC_1(VAR_2);
  if (VAR_3 >= 0)
   return 0;

  FUNC_3(200, 1000);
  VAR_4 += 200;
 } while (VAR_4 < 150000);

 return VAR_3;
}
