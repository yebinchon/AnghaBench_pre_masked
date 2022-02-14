
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct lrw_table_ctx {int table; TYPE_1__* mulinc; } ;
struct TYPE_5__ {int member_0; } ;
typedef TYPE_1__ be128 ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int) ;

int FUNC_4(struct lrw_table_ctx *VAR_1, const u8 *VAR_2)
{
 be128 VAR_3 = { 0 };
 int VAR_4;

 if (VAR_1->table)
  FUNC_1(VAR_1->table);


 VAR_1->table = FUNC_2((be128 *)VAR_2);
 if (!VAR_1->table)
  return -VAR_0;


 for (VAR_4 = 0; VAR_4 < 128; VAR_4++) {
  FUNC_3(&VAR_3, VAR_4);
  VAR_1->mulinc[VAR_4] = VAR_3;
  FUNC_0(&VAR_1->mulinc[VAR_4], VAR_1->table);
 }

 return 0;
}
