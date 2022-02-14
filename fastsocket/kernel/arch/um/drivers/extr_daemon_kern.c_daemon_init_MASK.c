
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uml_net_private {scalar_t__ user; } ;
struct net_device {int dummy; } ;
struct daemon_init {int ctl_sock; int sock_type; } ;
struct daemon_data {int fd; int control; int ctl_sock; int sock_type; int * local_addr; int * data_addr; int * ctl_addr; struct net_device* dev; } ;


 int VAR_0 ;
 struct uml_net_private* FUNC_0 (struct net_device*) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_1, void *VAR_2)
{
 struct uml_net_private *VAR_3;
 struct daemon_data *VAR_4;
 struct daemon_init *VAR_5 = VAR_2;

 VAR_3 = FUNC_0(VAR_1);
 VAR_4 = (struct daemon_data *) VAR_3->user;
 VAR_4->sock_type = VAR_5->sock_type;
 VAR_4->ctl_sock = VAR_5->ctl_sock;
 VAR_4->fd = -1;
 VAR_4->control = -1;
 VAR_4->dev = VAR_1;

 VAR_4->ctl_addr = ((void*)0);
 VAR_4->data_addr = ((void*)0);
 VAR_4->local_addr = ((void*)0);

 FUNC_1("daemon backend (uml_switch version %d) - %s:%s",
        VAR_0, VAR_4->sock_type, VAR_4->ctl_sock);
 FUNC_1("\n");
}
