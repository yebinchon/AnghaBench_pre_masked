
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ib_qp_attr {int qp_access_flags; int port_num; int pkey_index; } ;
struct TYPE_6__ {TYPE_2__* port; int pkey_index; } ;
struct TYPE_4__ {int state; } ;
struct cm_id_private {int lock; TYPE_3__ av; int responder_resources; TYPE_1__ id; } ;
struct TYPE_5__ {int port_num; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_2(struct cm_id_private *VAR_8,
    struct ib_qp_attr *VAR_9,
    int *VAR_10)
{
 unsigned long VAR_11;
 int VAR_12;

 FUNC_0(&VAR_8->lock, VAR_11);
 switch (VAR_8->id.state) {
 case 128:
 case 133:
 case 129:
 case 132:
 case 131:
 case 134:
 case 130:
 case 135:
 case 136:
  *VAR_10 = VAR_7 | VAR_4 |
    VAR_5 | VAR_6;
  VAR_9->qp_access_flags = VAR_3;
  if (VAR_8->responder_resources)
   VAR_9->qp_access_flags |= VAR_2 |
          VAR_1;
  VAR_9->pkey_index = VAR_8->av.pkey_index;
  VAR_9->port_num = VAR_8->av.port->port_num;
  VAR_12 = 0;
  break;
 default:
  VAR_12 = -VAR_0;
  break;
 }
 FUNC_1(&VAR_8->lock, VAR_11);
 return VAR_12;
}
