
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ user_magic; struct TYPE_6__* next; struct pcmcia_socket* socket; } ;
typedef TYPE_2__ user_info_t ;
struct TYPE_5__ {scalar_t__ busy; } ;
struct pcmcia_socket {TYPE_2__* user; TYPE_1__ pcmcia_state; } ;
struct inode {int dummy; } ;
struct file {int f_flags; TYPE_2__* private_data; } ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (struct pcmcia_socket*) ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_2, struct file *VAR_3)
{
    struct pcmcia_socket *VAR_4;
    user_info_t *VAR_5, **VAR_6;

    FUNC_1(0, "ds_release(socket %d)\n", FUNC_2(VAR_2));

    VAR_5 = VAR_3->private_data;
    if (FUNC_0(VAR_5))
 goto out;

    VAR_4 = VAR_5->socket;


    if ((VAR_3->f_flags & VAR_0) != VAR_1) {
 VAR_4->pcmcia_state.busy = 0;
    }
    VAR_3->private_data = ((void*)0);
    for (VAR_6 = &VAR_4->user; *VAR_6; VAR_6 = &(*VAR_6)->next)
 if (*VAR_6 == VAR_5) break;
    if (VAR_6 == ((void*)0))
 goto out;
    *VAR_6 = VAR_5->next;
    VAR_5->user_magic = 0;
    FUNC_3(VAR_5);
    FUNC_4(VAR_4);
out:
    return 0;
}
