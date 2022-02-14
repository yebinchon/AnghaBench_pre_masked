
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hpsb_host {int dummy; } ;
struct hpsb_highlevel {int host_info_lock; int host_info_list; int name; } ;
struct hl_host_info {size_t size; int list; struct hpsb_host* host; struct hl_host_info* data; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 struct hl_host_info* FUNC_1 (struct hpsb_highlevel*,struct hpsb_host*) ;
 struct hl_host_info* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

void *FUNC_6(struct hpsb_highlevel *VAR_1, struct hpsb_host *VAR_2,
      size_t VAR_3)
{
 struct hl_host_info *VAR_4;
 void *VAR_5;
 unsigned long VAR_6;

 VAR_4 = FUNC_1(VAR_1, VAR_2);
 if (VAR_4) {
  FUNC_0("%s called hpsb_create_hostinfo when hostinfo already"
    " exists", VAR_1->name);
  return ((void*)0);
 }

 VAR_4 = FUNC_2(sizeof(*VAR_4) + VAR_3, VAR_0);
 if (!VAR_4)
  return ((void*)0);

 if (VAR_3) {
  VAR_5 = VAR_4->data = VAR_4 + 1;
  VAR_4->size = VAR_3;
 } else
  VAR_5 = VAR_4;

 VAR_4->host = VAR_2;

 FUNC_4(&VAR_1->host_info_lock, VAR_6);
 FUNC_3(&VAR_4->list, &VAR_1->host_info_list);
 FUNC_5(&VAR_1->host_info_lock, VAR_6);

 return VAR_5;
}
