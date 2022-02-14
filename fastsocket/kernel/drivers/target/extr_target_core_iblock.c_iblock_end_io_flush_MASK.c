
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct se_cmd {int dummy; } ;
struct bio {struct se_cmd* bi_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bio*) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (struct se_cmd*,int ) ;

__attribute__((used)) static void FUNC_3(struct bio *VAR_2, int VAR_3)
{
 struct se_cmd *VAR_4 = VAR_2->bi_private;

 if (VAR_3)
  FUNC_1("IBLOCK: cache flush failed: %d\n", VAR_3);

 if (VAR_4) {
  if (VAR_3)
   FUNC_2(VAR_4, VAR_0);
  else
   FUNC_2(VAR_4, VAR_1);
 }

 FUNC_0(VAR_2);
}
