
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_6__ {int flags; } ;
struct ata_queued_cmd {TYPE_3__ tf; } ;
struct TYPE_5__ {int active_tag; } ;
struct ata_port {TYPE_1__* ops; TYPE_2__ link; } ;
struct TYPE_4__ {int (* sff_check_status ) (struct ata_port*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 struct ata_queued_cmd* FUNC_0 (struct ata_port*,int ) ;
 int FUNC_1 (struct ata_port*,struct ata_queued_cmd*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct ata_port*) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int,struct ata_port*) ;

__attribute__((used)) static void FUNC_6(u8 VAR_2, struct ata_port *VAR_3)
{
 struct ata_queued_cmd *VAR_4;
 int VAR_5 = 0;

 if (FUNC_4(VAR_2 & VAR_1)) {
  FUNC_5(VAR_2, VAR_3);
  return;
 }

 VAR_4 = FUNC_0(VAR_3, VAR_3->link.active_tag);
 if (VAR_4 && FUNC_2(!(VAR_4->tf.flags & VAR_0)))
  VAR_5 = FUNC_1(VAR_3, VAR_4);






 if (FUNC_4(!VAR_5))
  VAR_3->ops->sff_check_status(VAR_3);
}
