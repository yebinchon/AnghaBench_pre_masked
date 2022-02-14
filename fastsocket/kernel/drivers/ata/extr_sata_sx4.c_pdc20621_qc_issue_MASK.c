
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int protocol; int flags; } ;
struct ata_queued_cmd {TYPE_1__ tf; } ;





 int VAR_0 ;
 int FUNC_0 () ;
 unsigned int FUNC_1 (struct ata_queued_cmd*) ;
 int FUNC_2 (struct ata_queued_cmd*) ;

__attribute__((used)) static unsigned int FUNC_3(struct ata_queued_cmd *VAR_1)
{
 switch (VAR_1->tf.protocol) {
 case 128:
  if (VAR_1->tf.flags & VAR_0)
   break;

 case 129:
  FUNC_2(VAR_1);
  return 0;

 case 130:
  FUNC_0();
  break;

 default:
  break;
 }

 return FUNC_1(VAR_1);
}
