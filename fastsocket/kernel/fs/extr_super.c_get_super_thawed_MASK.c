
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ frozen; int wait_unfrozen; } ;
struct super_block {scalar_t__ s_frozen; int s_umount; TYPE_1__ s_writers; } ;
struct block_device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct super_block* FUNC_0 (struct block_device*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct super_block*) ;
 int FUNC_3 (struct super_block*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct super_block*,int ) ;
 int FUNC_6 (int ,int) ;

struct super_block *FUNC_7(struct block_device *VAR_2)
{
 while (1) {
  struct super_block *VAR_3 = FUNC_0(VAR_2);

  if (!VAR_3)
   return VAR_3;

  if (FUNC_1(FUNC_3(VAR_3))) {
   if (VAR_3->s_writers.frozen == VAR_1)
    return VAR_3;
   FUNC_4(&VAR_3->s_umount);
   FUNC_6(VAR_3->s_writers.wait_unfrozen,
       VAR_3->s_writers.frozen == VAR_1);
  } else {

   if (VAR_3->s_frozen == VAR_1)
    return VAR_3;
   FUNC_4(&VAR_3->s_umount);
   FUNC_5(VAR_3, VAR_0);
  }
  FUNC_2(VAR_3);
 }
}
