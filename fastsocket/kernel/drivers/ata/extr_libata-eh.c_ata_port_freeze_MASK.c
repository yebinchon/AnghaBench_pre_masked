
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ata_port {TYPE_1__* ops; } ;
struct TYPE_2__ {int error_handler; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct ata_port*) ;
 int FUNC_2 (struct ata_port*) ;

int FUNC_3(struct ata_port *VAR_0)
{
 int VAR_1;

 FUNC_0(!VAR_0->ops->error_handler);

 FUNC_1(VAR_0);
 VAR_1 = FUNC_2(VAR_0);

 return VAR_1;
}
