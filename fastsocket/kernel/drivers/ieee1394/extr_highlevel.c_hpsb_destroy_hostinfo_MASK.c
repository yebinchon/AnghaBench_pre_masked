
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hpsb_host {int dummy; } ;
struct hpsb_highlevel {int host_info_lock; } ;
struct hl_host_info {int list; } ;


 struct hl_host_info* FUNC_0 (struct hpsb_highlevel*,struct hpsb_host*) ;
 int FUNC_1 (struct hl_host_info*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

void FUNC_5(struct hpsb_highlevel *VAR_0, struct hpsb_host *VAR_1)
{
 struct hl_host_info *VAR_2;

 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (VAR_2) {
  unsigned long VAR_3;
  FUNC_3(&VAR_0->host_info_lock, VAR_3);
  FUNC_2(&VAR_2->list);
  FUNC_4(&VAR_0->host_info_lock, VAR_3);
  FUNC_1(VAR_2);
 }
 return;
}
