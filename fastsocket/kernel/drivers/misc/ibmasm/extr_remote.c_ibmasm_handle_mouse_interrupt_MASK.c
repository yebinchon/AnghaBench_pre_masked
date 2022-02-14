
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int keybd_dev; int mouse_dev; } ;
struct service_processor {TYPE_1__ remote; } ;
struct remote_input {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned long FUNC_0 (struct service_processor*,unsigned long) ;
 int FUNC_1 (struct service_processor*,unsigned long) ;
 unsigned long FUNC_2 (struct service_processor*) ;
 unsigned long FUNC_3 (struct service_processor*) ;
 int FUNC_4 (struct remote_input*,int ,int) ;
 int FUNC_5 (struct remote_input*) ;
 int FUNC_6 (int ,struct remote_input*) ;
 int FUNC_7 (int ,struct remote_input*) ;

void FUNC_8(struct service_processor *VAR_2)
{
 unsigned long VAR_3;
 unsigned long VAR_4;
 struct remote_input VAR_5;

 VAR_3 = FUNC_2(VAR_2);
 VAR_4 = FUNC_3(VAR_2);

 while (VAR_3 != VAR_4) {
  FUNC_4(&VAR_5, FUNC_1(VAR_2, VAR_3),
    sizeof(struct remote_input));

  FUNC_5(&VAR_5);
  if (VAR_5.type == VAR_1) {
   FUNC_7(VAR_2->remote.mouse_dev, &VAR_5);
  } else if (VAR_5.type == VAR_0) {
   FUNC_6(VAR_2->remote.keybd_dev, &VAR_5);
  } else
   break;

  VAR_3 = FUNC_0(VAR_2, VAR_3);
  VAR_4 = FUNC_3(VAR_2);
 }
}
