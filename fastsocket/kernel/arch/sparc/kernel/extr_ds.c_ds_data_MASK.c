
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ds_queue_entry {int list; int req; struct ds_info* dp; } ;
struct ds_msg_tag {int dummy; } ;
struct ds_info {int dummy; } ;
struct ds_data {int handle; } ;


 int VAR_0 ;
 int FUNC_0 (struct ds_info*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 struct ds_queue_entry* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,struct ds_msg_tag*,int) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct ds_info *VAR_3, struct ds_msg_tag *VAR_4, int VAR_5)
{
 struct ds_data *VAR_6 = (struct ds_data *) VAR_4;
 struct ds_queue_entry *VAR_7;

 VAR_7 = FUNC_1(sizeof(struct ds_queue_entry) + VAR_5, VAR_0);
 if (!VAR_7) {
  FUNC_0(VAR_3, VAR_6->handle);
 } else {
  VAR_7->dp = VAR_3;
  FUNC_3(&VAR_7->req, VAR_4, VAR_5);
  FUNC_2(&VAR_7->list, &VAR_2);
  FUNC_4(&VAR_1);
 }
 return 0;
}
