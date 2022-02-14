
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nv_adma_port_priv {int flags; } ;
struct TYPE_4__ {int flags; scalar_t__ protocol; } ;
struct ata_queued_cmd {int flags; TYPE_2__ tf; TYPE_1__* ap; } ;
struct TYPE_3__ {struct nv_adma_port_priv* private_data; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_0(struct ata_queued_cmd *VAR_4)
{
 struct nv_adma_port_priv *VAR_5 = VAR_4->ap->private_data;



 if ((VAR_5->flags & VAR_3) ||
    (VAR_4->tf.flags & VAR_2))
  return 1;

 if ((VAR_4->flags & VAR_1) ||
    (VAR_4->tf.protocol == VAR_0))
  return 0;

 return 1;
}
