
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct port {int guest_connected; int kref; int outvq_lock; int inbuf_lock; } ;
struct inode {int dummy; } ;
struct file {struct port* private_data; } ;


 int VAR_0 ;
 int FUNC_0 (struct port*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct port*) ;
 int VAR_1 ;
 int FUNC_3 (struct port*,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct inode *VAR_2, struct file *VAR_3)
{
 struct port *VAR_4;

 VAR_4 = VAR_3->private_data;


 FUNC_3(VAR_4, VAR_0, 0);

 FUNC_4(&VAR_4->inbuf_lock);
 VAR_4->guest_connected = 0;

 FUNC_0(VAR_4);

 FUNC_5(&VAR_4->inbuf_lock);

 FUNC_4(&VAR_4->outvq_lock);
 FUNC_2(VAR_4);
 FUNC_5(&VAR_4->outvq_lock);
 FUNC_1(&VAR_4->kref, VAR_1);

 return 0;
}
