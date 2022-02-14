
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pd_unit {scalar_t__ removable; int access; } ;
struct block_device {TYPE_1__* bd_disk; } ;
typedef int fmode_t ;
struct TYPE_2__ {struct pd_unit* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pd_unit*,int ) ;

__attribute__((used)) static int FUNC_1(struct block_device *VAR_2, fmode_t VAR_3)
{
 struct pd_unit *VAR_4 = VAR_2->bd_disk->private_data;

 VAR_4->access++;

 if (VAR_4->removable) {
  FUNC_0(VAR_4, VAR_1);
  FUNC_0(VAR_4, VAR_0);
 }
 return 0;
}
