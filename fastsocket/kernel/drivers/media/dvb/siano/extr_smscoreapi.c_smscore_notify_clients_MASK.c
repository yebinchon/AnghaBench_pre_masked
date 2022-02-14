
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ next; } ;
struct smscore_device_t {TYPE_1__ clients; } ;
struct smscore_client_t {int context; int (* onremove_handler ) (int ) ;} ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct smscore_device_t *VAR_0)
{
 struct smscore_client_t *VAR_1;


 while (!FUNC_0(&VAR_0->clients)) {
  VAR_1 = (struct smscore_client_t *) VAR_0->clients.next;
  VAR_1->onremove_handler(VAR_1->context);
 }
}
