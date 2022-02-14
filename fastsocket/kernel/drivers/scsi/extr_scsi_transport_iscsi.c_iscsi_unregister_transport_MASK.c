
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iscsi_transport {int dummy; } ;
struct TYPE_4__ {int kobj; } ;
struct TYPE_3__ {int host_attrs; } ;
struct iscsi_internal {TYPE_2__ dev; TYPE_1__ t; int session_cont; int conn_cont; int list; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 struct iscsi_internal* FUNC_2 (struct iscsi_transport*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_2 ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *) ;

int FUNC_10(struct iscsi_transport *VAR_3)
{
 struct iscsi_internal *VAR_4;
 unsigned long VAR_5;

 FUNC_0(!VAR_3);

 FUNC_4(&VAR_2);

 VAR_4 = FUNC_2(VAR_3);
 FUNC_0 (!VAR_4);

 FUNC_6(&VAR_1, VAR_5);
 FUNC_3(&VAR_4->list);
 FUNC_7(&VAR_1, VAR_5);

 FUNC_9(&VAR_4->conn_cont);
 FUNC_9(&VAR_4->session_cont);
 FUNC_9(&VAR_4->t.host_attrs);

 FUNC_8(&VAR_4->dev.kobj, &VAR_0);
 FUNC_1(&VAR_4->dev);
 FUNC_5(&VAR_2);

 return 0;
}
