
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pd_unit {int access; } ;
struct block_device {TYPE_1__* bd_disk; } ;
typedef int fmode_t ;
struct TYPE_2__ {struct pd_unit* private_data; } ;



 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pd_unit*,int ) ;

__attribute__((used)) static int FUNC_1(struct block_device *VAR_2, fmode_t VAR_3,
  unsigned int VAR_4, unsigned long VAR_5)
{
 struct pd_unit *VAR_6 = VAR_2->bd_disk->private_data;

 switch (VAR_4) {
 case 128:
  if (VAR_6->access == 1)
   FUNC_0(VAR_6, VAR_1);
  return 0;
 default:
  return -VAR_0;
 }
}
