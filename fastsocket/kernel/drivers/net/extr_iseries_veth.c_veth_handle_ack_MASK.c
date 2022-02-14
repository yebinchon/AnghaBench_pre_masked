
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t xTargetLp; int xSubtype; } ;
struct veth_lpevent {TYPE_1__ base_event; } ;
struct veth_lpar_connection {int dummy; } ;
typedef size_t HvLpIndex ;


 int FUNC_0 (int) ;


 struct veth_lpar_connection** VAR_0 ;
 int FUNC_1 (char*,int,size_t) ;
 int FUNC_2 (struct veth_lpar_connection*,struct veth_lpevent*) ;
 int FUNC_3 (struct veth_lpar_connection*,struct veth_lpevent*) ;

__attribute__((used)) static void FUNC_4(struct veth_lpevent *VAR_1)
{
 HvLpIndex VAR_2 = VAR_1->base_event.xTargetLp;
 struct veth_lpar_connection *VAR_3 = VAR_0[VAR_2];

 FUNC_0(! VAR_3);

 switch (VAR_1->base_event.xSubtype) {
 case 129:
  FUNC_2(VAR_3, VAR_1);
  break;
 case 128:
  FUNC_3(VAR_3, VAR_1);
  break;
 default:
  FUNC_1("Unknown ack type %d from LPAR %d.\n",
    VAR_1->base_event.xSubtype, VAR_2);
 };
}
