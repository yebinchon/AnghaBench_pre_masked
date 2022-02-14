
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_6__ {size_t xSourceLp; int xSubtype; } ;
struct TYPE_4__ {scalar_t__* token; } ;
struct TYPE_5__ {TYPE_1__ frames_ack_data; } ;
struct veth_lpevent {TYPE_3__ base_event; TYPE_2__ u; } ;
struct veth_lpar_connection {int lock; int last_contact; int outstanding_tx; scalar_t__ msgs; } ;
typedef size_t HvLpIndex ;


 int FUNC_0 (int) ;




 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 struct veth_lpar_connection** VAR_3 ;
 int FUNC_3 (char*,int,size_t) ;
 int FUNC_4 (struct veth_lpar_connection*,struct veth_lpevent*) ;
 int FUNC_5 (struct veth_lpar_connection*,scalar_t__) ;
 int FUNC_6 (struct veth_lpar_connection*,struct veth_lpevent*) ;
 int FUNC_7 (struct veth_lpar_connection*) ;

__attribute__((used)) static void FUNC_8(struct veth_lpevent *VAR_4)
{
 HvLpIndex VAR_5 = VAR_4->base_event.xSourceLp;
 struct veth_lpar_connection *VAR_6 = VAR_3[VAR_5];
 unsigned long VAR_7;
 int VAR_8, VAR_9 = 0;

 FUNC_0(! VAR_6);

 switch (VAR_4->base_event.xSubtype) {
 case 131:
  FUNC_6(VAR_6, VAR_4);
  break;
 case 128:


  break;
 case 129:
  FUNC_1(&VAR_6->lock, VAR_7);

  for (VAR_8 = 0; VAR_8 < VAR_0; ++VAR_8) {
   u16 VAR_10 = VAR_4->u.frames_ack_data.token[VAR_8];

   if (VAR_10 < VAR_1) {
    FUNC_5(VAR_6, VAR_6->msgs + VAR_10);
    VAR_6->outstanding_tx--;
    VAR_9++;
   }
  }

  if (VAR_9 > 0) {
   VAR_6->last_contact = VAR_2;
   FUNC_7(VAR_6);
  }

  FUNC_2(&VAR_6->lock, VAR_7);
  break;
 case 130:
  FUNC_4(VAR_6, VAR_4);
  break;
 default:
  FUNC_3("Unknown interrupt type %d from LPAR %d.\n",
    VAR_4->base_event.xSubtype, VAR_5);
 };
}
