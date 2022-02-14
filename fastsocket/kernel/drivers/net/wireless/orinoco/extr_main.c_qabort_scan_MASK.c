
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct orinoco_scan_data {int len; int list; } ;
struct orinoco_private {int process_scan; int scan_lock; int scan_list; } ;


 int VAR_0 ;
 struct orinoco_scan_data* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct orinoco_private *VAR_1)
{
 struct orinoco_scan_data *VAR_2;
 unsigned long VAR_3;

 VAR_2 = FUNC_0(sizeof(*VAR_2), VAR_0);
 if (!VAR_2)
  return;

 VAR_2->len = -1;

 FUNC_3(&VAR_1->scan_lock, VAR_3);
 FUNC_1(&VAR_2->list, &VAR_1->scan_list);
 FUNC_4(&VAR_1->scan_lock, VAR_3);

 FUNC_2(&VAR_1->process_scan);
}
