
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ata_port {int print_id; int pflags; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* freeze ) (struct ata_port*) ;int error_handler; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct ata_port*) ;

__attribute__((used)) static void FUNC_3(struct ata_port *VAR_1)
{
 FUNC_1(!VAR_1->ops->error_handler);

 if (VAR_1->ops->freeze)
  VAR_1->ops->freeze(VAR_1);

 VAR_1->pflags |= VAR_0;

 FUNC_0("ata%u port frozen\n", VAR_1->print_id);
}
