
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ata_queued_cmd {int flags; TYPE_1__* dev; } ;
struct ata_port {TYPE_2__* ops; } ;
struct ata_link {int dummy; } ;
struct TYPE_4__ {int error_handler; } ;
struct TYPE_3__ {struct ata_link* link; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ata_port*,int ) ;
 int FUNC_2 (struct ata_port*) ;
 int FUNC_3 (struct ata_queued_cmd*) ;
 struct ata_queued_cmd* FUNC_4 (struct ata_port*,int) ;

__attribute__((used)) static int FUNC_5(struct ata_port *VAR_2, struct ata_link *VAR_3)
{
 int VAR_4, VAR_5 = 0;

 FUNC_0(!VAR_2->ops->error_handler);


 FUNC_1(VAR_2, 0);

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  struct ata_queued_cmd *VAR_6 = FUNC_4(VAR_2, VAR_4);

  if (VAR_6 && (!VAR_3 || VAR_6->dev->link == VAR_3)) {
   VAR_6->flags |= VAR_1;
   FUNC_3(VAR_6);
   VAR_5++;
  }
 }

 if (!VAR_5)
  FUNC_2(VAR_2);

 return VAR_5;
}
