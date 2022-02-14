
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {int event; int fd; int dst; } ;
typedef TYPE_1__ network_socket ;
struct TYPE_15__ {TYPE_1__* server; TYPE_3__* config; } ;
typedef TYPE_2__ network_mysqld_con ;
struct TYPE_16__ {int address; TYPE_2__* listen_con; } ;
typedef TYPE_3__ chassis_plugin_config ;
struct TYPE_17__ {int event_base; } ;
typedef TYPE_4__ chassis ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *,int ,int,int ,TYPE_2__*) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 (TYPE_4__*,TYPE_2__*) ;
 int VAR_2 ;
 TYPE_2__* FUNC_6 () ;
 int FUNC_7 (TYPE_2__*) ;
 scalar_t__ FUNC_8 (TYPE_1__*) ;
 TYPE_1__* FUNC_9 () ;

__attribute__((used)) static int FUNC_10(chassis *VAR_3, chassis_plugin_config *VAR_4) {
 network_mysqld_con *VAR_5;
 network_socket *VAR_6;

 if (!VAR_4->address) VAR_4->address = FUNC_3(":4043");




 VAR_5 = FUNC_6();
 FUNC_5(VAR_3, VAR_5);
 VAR_5->config = VAR_4;

 VAR_4->listen_con = VAR_5;

 VAR_6 = FUNC_9();
 VAR_5->server = VAR_6;


 FUNC_7(VAR_5);


 if (0 != FUNC_4(VAR_6->dst, VAR_4->address)) {
  return -1;
 }


 if (0 != FUNC_8(VAR_6)) {
  return -1;
 }




 FUNC_2(&(VAR_6->event), VAR_6->fd, VAR_1|VAR_0, VAR_2, VAR_5);
 FUNC_1(VAR_3->event_base, &(VAR_6->event));
 FUNC_0(&(VAR_6->event), ((void*)0));

 return 0;
}
