
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {struct pcmcia_socket* socket; } ;
typedef TYPE_3__ user_info_t ;
typedef int u_int ;
struct pcmcia_socket {int queue; } ;
struct TYPE_7__ {TYPE_1__* dentry; } ;
struct file {TYPE_3__* private_data; TYPE_2__ f_path; } ;
typedef int poll_table ;
struct TYPE_6__ {int d_inode; } ;


 scalar_t__ FUNC_0 (TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,char*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct file*,int *,int *) ;
 int FUNC_4 (TYPE_3__*) ;

__attribute__((used)) static u_int FUNC_5(struct file *VAR_3, poll_table *VAR_4)
{
    struct pcmcia_socket *VAR_5;
    user_info_t *VAR_6;

    FUNC_1(2, "ds_poll(socket %d)\n", FUNC_2(VAR_3->f_path.dentry->d_inode));

    VAR_6 = VAR_3->private_data;
    if (FUNC_0(VAR_6))
 return VAR_0;
    VAR_5 = VAR_6->socket;




    FUNC_3(VAR_3, &VAR_5->queue, VAR_4);
    if (!FUNC_4(VAR_6))
 return VAR_1 | VAR_2;
    return 0;
}
