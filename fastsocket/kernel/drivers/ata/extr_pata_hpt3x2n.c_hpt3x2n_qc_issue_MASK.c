
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int flags; } ;
struct ata_queued_cmd {TYPE_2__ tf; struct ata_port* ap; } ;
struct ata_port {TYPE_1__* host; } ;
struct TYPE_3__ {void* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (struct ata_queued_cmd*) ;
 int FUNC_1 (struct ata_port*,int) ;
 int FUNC_2 (struct ata_port*,int) ;

__attribute__((used)) static unsigned int FUNC_3(struct ata_queued_cmd *VAR_2)
{
 struct ata_port *VAR_3 = VAR_2->ap;
 int VAR_4 = (long)VAR_3->host->private_data;
 int VAR_5 = FUNC_2(VAR_3, VAR_2->tf.flags & VAR_0);

 if ((VAR_4 & VAR_1) != VAR_5) {
  VAR_4 &= ~VAR_1;
  VAR_4 |= VAR_5;
  VAR_3->host->private_data = (void *)(long)VAR_4;

  FUNC_1(VAR_3, VAR_5 ? 0x21 : 0x23);
 }
 return FUNC_0(VAR_2);
}
