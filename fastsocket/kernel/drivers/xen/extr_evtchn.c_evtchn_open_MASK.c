
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct per_user_data {int ring_cons_mutex; int bind_mutex; struct per_user_data* name; int * ring; int evtchn_wait; } ;
struct inode {int dummy; } ;
struct file {struct per_user_data* private_data; } ;
typedef int evtchn_port_t ;
struct TYPE_2__ {int comm; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (int *) ;
 struct per_user_data* FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (struct per_user_data*) ;
 struct per_user_data* FUNC_4 (int,int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct inode *VAR_3, struct file *VAR_4)
{
 struct per_user_data *VAR_5;

 VAR_5 = FUNC_4(sizeof(*VAR_5), VAR_1);
 if (VAR_5 == ((void*)0))
  return -VAR_0;

 VAR_5->name = FUNC_2(VAR_1, "evtchn:%s", VAR_2->comm);
 if (VAR_5->name == ((void*)0)) {
  FUNC_3(VAR_5);
  return -VAR_0;
 }

 FUNC_1(&VAR_5->evtchn_wait);

 VAR_5->ring = (evtchn_port_t *)FUNC_0(VAR_1);
 if (VAR_5->ring == ((void*)0)) {
  FUNC_3(VAR_5->name);
  FUNC_3(VAR_5);
  return -VAR_0;
 }

 FUNC_5(&VAR_5->bind_mutex);
 FUNC_5(&VAR_5->ring_cons_mutex);

 VAR_4->private_data = VAR_5;

 return 0;
}
