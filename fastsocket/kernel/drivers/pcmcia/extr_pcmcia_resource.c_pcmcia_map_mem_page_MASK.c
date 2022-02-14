
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_2__* window_handle_t ;
struct pcmcia_socket {TYPE_1__* ops; } ;
struct TYPE_9__ {scalar_t__ Page; int CardOffset; } ;
typedef TYPE_3__ memreq_t ;
struct TYPE_10__ {int card_start; } ;
struct TYPE_8__ {scalar_t__ magic; TYPE_4__ ctl; struct pcmcia_socket* sock; } ;
struct TYPE_7__ {scalar_t__ (* set_mem_map ) (struct pcmcia_socket*,TYPE_4__*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct pcmcia_socket*,int ,char*) ;
 scalar_t__ FUNC_1 (struct pcmcia_socket*,TYPE_4__*) ;

int FUNC_2(window_handle_t VAR_3, memreq_t *VAR_4)
{
 struct pcmcia_socket *VAR_5;
 if ((VAR_3 == ((void*)0)) || (VAR_3->magic != VAR_2))
  return -VAR_0;
 VAR_5 = VAR_3->sock;
 if (VAR_4->Page != 0) {
  FUNC_0(VAR_5, 0, "failure: requested page is zero\n");
  return -VAR_0;
 }
 VAR_3->ctl.card_start = VAR_4->CardOffset;
 if (VAR_5->ops->set_mem_map(VAR_5, &VAR_3->ctl) != 0) {
  FUNC_0(VAR_5, 0, "failed to set_mem_map\n");
  return -VAR_1;
 }
 return 0;
}
