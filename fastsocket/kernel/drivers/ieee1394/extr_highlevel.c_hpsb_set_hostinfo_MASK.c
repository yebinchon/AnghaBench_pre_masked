
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hpsb_host {int dummy; } ;
struct hpsb_highlevel {int name; } ;
struct hl_host_info {void* data; int size; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 struct hl_host_info* FUNC_1 (struct hpsb_highlevel*,struct hpsb_host*) ;

int FUNC_2(struct hpsb_highlevel *VAR_1, struct hpsb_host *VAR_2,
        void *VAR_3)
{
 struct hl_host_info *VAR_4;

 VAR_4 = FUNC_1(VAR_1, VAR_2);
 if (VAR_4) {
  if (!VAR_4->size && !VAR_4->data) {
   VAR_4->data = VAR_3;
   return 0;
  } else
   FUNC_0("%s called hpsb_set_hostinfo when hostinfo "
     "already has data", VAR_1->name);
 } else
  FUNC_0("%s called hpsb_set_hostinfo when no hostinfo exists",
    VAR_1->name);
 return -VAR_0;
}
