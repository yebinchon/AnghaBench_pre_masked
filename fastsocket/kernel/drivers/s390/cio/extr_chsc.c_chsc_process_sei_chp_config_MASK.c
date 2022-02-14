
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct chsc_sei_area {scalar_t__ rs; int ccdf; } ;
struct chp_id {int id; int cssid; } ;
struct chp_config_data {size_t op; int map; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int FUNC_1 (struct chp_id) ;
 int FUNC_2 (struct chp_id,int) ;
 int FUNC_3 (struct chp_id*) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (char*,char*,int ,int) ;

__attribute__((used)) static void FUNC_6(struct chsc_sei_area *VAR_1)
{
 struct chp_config_data *VAR_2;
 struct chp_id VAR_3;
 int VAR_4;
 char *VAR_5[3] = {"configure", "deconfigure", "cancel deconfigure"};

 FUNC_0(4, "chsc: channel-path-configuration notification\n");
 if (VAR_1->rs != 0)
  return;
 VAR_2 = (struct chp_config_data *) &(VAR_1->ccdf);
 FUNC_3(&VAR_3);
 for (VAR_4 = 0; VAR_4 <= VAR_0; VAR_4++) {
  if (!FUNC_4(VAR_2->map, VAR_4))
   continue;
  VAR_3.id = VAR_4;
  FUNC_5("Processing %s for channel path %x.%02x\n",
     VAR_5[VAR_2->op], VAR_3.cssid, VAR_3.id);
  switch (VAR_2->op) {
  case 0:
   FUNC_2(VAR_3, 1);
   break;
  case 1:
   FUNC_2(VAR_3, 0);
   break;
  case 2:
   FUNC_1(VAR_3);
   break;
  }
 }
}
