
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ata_taskfile {int dummy; } ;
struct ata_port {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* sff_exec_command ) (struct ata_port*,struct ata_taskfile const*) ;int (* sff_tf_load ) (struct ata_port*,struct ata_taskfile const*) ;} ;


 int FUNC_0 (struct ata_port*,struct ata_taskfile const*) ;
 int FUNC_1 (struct ata_port*,struct ata_taskfile const*) ;

__attribute__((used)) static inline void FUNC_2(struct ata_port *VAR_0,
      const struct ata_taskfile *VAR_1)
{
 VAR_0->ops->sff_tf_load(VAR_0, VAR_1);
 VAR_0->ops->sff_exec_command(VAR_0, VAR_1);
}
