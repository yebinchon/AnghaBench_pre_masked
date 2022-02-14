
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int protocol; } ;
struct ata_queued_cmd {TYPE_1__ tf; } ;




 int FUNC_0 (struct ata_queued_cmd*) ;
 int FUNC_1 (struct ata_queued_cmd*) ;

__attribute__((used)) static void FUNC_2(struct ata_queued_cmd *VAR_0)
{
 switch (VAR_0->tf.protocol) {
 case 129:
  FUNC_0(VAR_0);
  break;
 case 128:
  FUNC_1(VAR_0);
  break;
 default:
  break;
 }
}
