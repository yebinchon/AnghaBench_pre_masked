
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int protocol; int flags; } ;
struct ata_queued_cmd {TYPE_2__ tf; TYPE_1__* dev; } ;
struct TYPE_3__ {int flags; } ;




 int VAR_0 ;


 int VAR_1 ;
 unsigned int FUNC_0 (struct ata_queued_cmd*) ;
 int FUNC_1 (struct ata_queued_cmd*) ;

__attribute__((used)) static unsigned int FUNC_2(struct ata_queued_cmd *VAR_2)
{
 switch (VAR_2->tf.protocol) {
 case 130:
  if (VAR_2->dev->flags & VAR_0)
   break;

 case 128:
  if (VAR_2->tf.flags & VAR_1)
   break;

 case 131:
 case 129:
  FUNC_1(VAR_2);
  return 0;
 default:
  break;
 }
 return FUNC_0(VAR_2);
}
