
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serio_raw_list {int node; struct serio_raw* serio_raw; } ;
struct serio_raw {int list; int refcnt; int serio; } ;
struct inode {int dummy; } ;
struct file {struct serio_raw_list* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct inode*) ;
 struct serio_raw_list* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct serio_raw* FUNC_6 (int ) ;
 int VAR_3 ;
 int FUNC_7 () ;

__attribute__((used)) static int FUNC_8(struct inode *VAR_4, struct file *VAR_5)
{
 struct serio_raw *VAR_6;
 struct serio_raw_list *VAR_7;
 int VAR_8 = 0;

 FUNC_3();
 VAR_8 = FUNC_4(&VAR_3);
 if (VAR_8)
  goto out_bkl;

 if (!(VAR_6 = FUNC_6(FUNC_0(VAR_4)))) {
  VAR_8 = -VAR_0;
  goto out;
 }

 if (!VAR_6->serio) {
  VAR_8 = -VAR_0;
  goto out;
 }

 if (!(VAR_7 = FUNC_1(sizeof(struct serio_raw_list), VAR_2))) {
  VAR_8 = -VAR_1;
  goto out;
 }

 VAR_7->serio_raw = VAR_6;
 VAR_5->private_data = VAR_7;

 VAR_6->refcnt++;
 FUNC_2(&VAR_7->node, &VAR_6->list);

out:
 FUNC_5(&VAR_3);
out_bkl:
 FUNC_7();
 return VAR_8;
}
