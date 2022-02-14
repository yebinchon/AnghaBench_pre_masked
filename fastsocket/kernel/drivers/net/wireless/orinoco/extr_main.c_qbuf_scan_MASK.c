
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct orinoco_scan_data {int len; int type; int list; void* buf; } ;
struct orinoco_private {int process_scan; int scan_lock; int scan_list; } ;


 int VAR_0 ;
 struct orinoco_scan_data* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct orinoco_private *VAR_1, void *VAR_2,
        int VAR_3, int VAR_4)
{
 struct orinoco_scan_data *VAR_5;
 unsigned long VAR_6;

 VAR_5 = FUNC_0(sizeof(*VAR_5), VAR_0);
 if (!VAR_5)
  return;

 VAR_5->buf = VAR_2;
 VAR_5->len = VAR_3;
 VAR_5->type = VAR_4;

 FUNC_3(&VAR_1->scan_lock, VAR_6);
 FUNC_1(&VAR_5->list, &VAR_1->scan_list);
 FUNC_4(&VAR_1->scan_lock, VAR_6);

 FUNC_2(&VAR_1->process_scan);
}
