
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_trans {int dev; } ;
struct iwl_tfd {int num_tbs; } ;
struct iwl_cmd_meta {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct iwl_trans*,char*,int) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (struct iwl_tfd*) ;
 int FUNC_3 (struct iwl_tfd*,int) ;
 int FUNC_4 (struct iwl_tfd*,int) ;

__attribute__((used)) static void FUNC_5(struct iwl_trans *VAR_2,
          struct iwl_cmd_meta *VAR_3,
          struct iwl_tfd *VAR_4)
{
 int VAR_5;
 int VAR_6;


 VAR_6 = FUNC_2(VAR_4);

 if (VAR_6 >= VAR_1) {
  FUNC_0(VAR_2, "Too many chunks: %i\n", VAR_6);

  return;
 }



 for (VAR_5 = 1; VAR_5 < VAR_6; VAR_5++)
  FUNC_1(VAR_2->dev, FUNC_3(VAR_4, VAR_5),
     FUNC_4(VAR_4, VAR_5),
     VAR_0);

 VAR_4->num_tbs = 0;
}
