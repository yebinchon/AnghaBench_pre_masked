
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_8__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {int map; int static_start; TYPE_8__* res; scalar_t__ card_start; int flags; int speed; } ;
struct TYPE_10__ {int index; TYPE_5__ ctl; struct pcmcia_socket* sock; struct pcmcia_device* handle; int magic; } ;
typedef TYPE_2__ window_t ;
typedef TYPE_2__* window_handle_t ;
struct TYPE_11__ {int Attributes; int Size; int Base; int AccessSpeed; } ;
typedef TYPE_4__ win_req_t ;
typedef int u_long ;
struct pcmcia_socket {int state; int map_size; int features; TYPE_1__* ops; TYPE_2__* win; } ;
struct pcmcia_device {int _win; struct pcmcia_socket* socket; } ;
struct TYPE_13__ {int start; } ;
struct TYPE_9__ {scalar_t__ (* set_mem_map ) (struct pcmcia_socket*,TYPE_5__*) ;} ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_2 (struct pcmcia_socket*,int ,char*) ;
 TYPE_8__* FUNC_3 (int,int,int,int,struct pcmcia_socket*) ;
 scalar_t__ FUNC_4 (struct pcmcia_socket*,TYPE_5__*) ;

int FUNC_5(struct pcmcia_device **VAR_20, win_req_t *VAR_21, window_handle_t *VAR_22)
{
 struct pcmcia_socket *VAR_23 = (*VAR_20)->socket;
 window_t *VAR_24;
 u_long VAR_25;
 int VAR_26;

 if (!(VAR_23->state & VAR_8))
  return -VAR_2;
 if (VAR_21->Attributes & (VAR_16 | VAR_17)) {
  FUNC_2(VAR_23, 0, "bad attribute setting for iomem region\n");
  return -VAR_0;
 }


 if (VAR_21->Size == 0)
  VAR_21->Size = VAR_23->map_size;
 VAR_25 = (((VAR_23->features & VAR_9) ||
    (VAR_21->Attributes & VAR_18)) ?
   VAR_21->Size : VAR_23->map_size);
 if (VAR_21->Size & (VAR_23->map_size-1)) {
  FUNC_2(VAR_23, 0, "invalid map size\n");
  return -VAR_0;
 }
 if ((VAR_21->Base && (VAR_23->features & VAR_10)) ||
     (VAR_21->Base & (VAR_25-1))) {
  FUNC_2(VAR_23, 0, "invalid base address\n");
  return -VAR_0;
 }
 if (VAR_21->Base)
  VAR_25 = 0;


 for (VAR_26 = 0; VAR_26 < VAR_7; VAR_26++)
  if (!(VAR_23->state & FUNC_1(VAR_26))) break;
 if (VAR_26 == VAR_7) {
  FUNC_2(VAR_23, 0, "all windows are used already\n");
  return -VAR_0;
 }

 VAR_24 = &VAR_23->win[VAR_26];
 VAR_24->magic = VAR_11;
 VAR_24->index = VAR_26;
 VAR_24->handle = *VAR_20;
 VAR_24->sock = VAR_23;

 if (!(VAR_23->features & VAR_10)) {
  VAR_24->ctl.res = FUNC_3(VAR_21->Base, VAR_21->Size, VAR_25,
            (VAR_21->Attributes & VAR_14), VAR_23);
  if (!VAR_24->ctl.res) {
   FUNC_2(VAR_23, 0, "allocating mem region failed\n");
   return -VAR_0;
  }
 }
 (*VAR_20)->_win |= FUNC_0(VAR_26);


 VAR_24->ctl.map = VAR_26+1;
 VAR_24->ctl.flags = 0;
 VAR_24->ctl.speed = VAR_21->AccessSpeed;
 if (VAR_21->Attributes & VAR_15)
  VAR_24->ctl.flags |= VAR_5;
 if (VAR_21->Attributes & VAR_13)
  VAR_24->ctl.flags |= VAR_4;
 if (VAR_21->Attributes & VAR_12)
  VAR_24->ctl.flags |= VAR_3;
 if (VAR_21->Attributes & VAR_19)
  VAR_24->ctl.flags |= VAR_6;
 VAR_24->ctl.card_start = 0;
 if (VAR_23->ops->set_mem_map(VAR_23, &VAR_24->ctl) != 0) {
  FUNC_2(VAR_23, 0, "failed to set memory mapping\n");
  return -VAR_1;
 }
 VAR_23->state |= FUNC_1(VAR_26);


 if (VAR_23->features & VAR_10) {
  VAR_21->Base = VAR_24->ctl.static_start;
 } else {
  VAR_21->Base = VAR_24->ctl.res->start;
 }
 *VAR_22 = VAR_24;

 return 0;
}
