
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iucv_path {struct iucv_connection* private; } ;
struct iucv_message {int dummy; } ;
struct iucv_event {struct iucv_message* data; struct iucv_connection* conn; } ;
struct iucv_connection {int fsm; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,struct iucv_event*) ;

__attribute__((used)) static void FUNC_1(struct iucv_path *VAR_1,
        struct iucv_message *VAR_2)
{
 struct iucv_connection *VAR_3 = VAR_1->private;
 struct iucv_event VAR_4;

 VAR_4.conn = VAR_3;
 VAR_4.data = VAR_2;
 FUNC_0(VAR_3->fsm, VAR_0, &VAR_4);
}
