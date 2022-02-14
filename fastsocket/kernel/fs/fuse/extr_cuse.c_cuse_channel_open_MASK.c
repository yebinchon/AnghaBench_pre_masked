
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int dummy; } ;
struct file {TYPE_1__* private_data; } ;
struct TYPE_3__ {int connected; scalar_t__ blocked; int release; } ;
struct cuse_conn {TYPE_1__ fc; int list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int FUNC_1 (struct cuse_conn*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 struct cuse_conn* FUNC_4 (int,int ) ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_3, struct file *VAR_4)
{
 struct cuse_conn *VAR_5;
 int VAR_6;


 VAR_5 = FUNC_4(sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 FUNC_2(&VAR_5->fc);

 FUNC_0(&VAR_5->list);
 VAR_5->fc.release = VAR_2;

 VAR_5->fc.connected = 1;
 VAR_5->fc.blocked = 0;
 VAR_6 = FUNC_1(VAR_5);
 if (VAR_6) {
  FUNC_3(&VAR_5->fc);
  return VAR_6;
 }
 VAR_4->private_data = &VAR_5->fc;

 return 0;
}
