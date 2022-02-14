
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* right_setid; void* left_setid; } ;
struct TYPE_4__ {int wql_set; } ;
struct waitq_link {int sl_free_ts; int sl_alloc_th; scalar_t__ sl_mkvalid_ts; int sl_mkvalid_bt; scalar_t__ sl_alloc_ts; int sl_alloc_bt; TYPE_1__ wql_link; TYPE_2__ wql_wqs; } ;
struct lt_elem {int dummy; } ;
struct link_table {int dummy; } ;


 int VAR_0 ;

 void* VAR_1 ;

 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (struct waitq_link*) ;

__attribute__((used)) static void FUNC_3(struct link_table *VAR_3, struct lt_elem *VAR_4)
{
 struct waitq_link *VAR_5 = (struct waitq_link *)VAR_4;
 (void)VAR_3;

 switch (FUNC_2(VAR_5)) {
 case 128:
  VAR_5->wql_wqs.wql_set = VAR_2;
  break;
 case 129:
  VAR_5->wql_link.left_setid = VAR_1;
  VAR_5->wql_link.right_setid = VAR_1;
  break;
 default:
  break;
 }
}
