
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int end_jiffies; int start_jiffies; } ;
struct TYPE_3__ {int dev_to_init; } ;
struct raid_set {TYPE_2__ recover; TYPE_1__ set; } ;


 int FUNC_0 (struct raid_set*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(struct raid_set *VAR_1)
{
 FUNC_0(VAR_1);

 VAR_1->set.dev_to_init = -1;


 VAR_1->recover.end_jiffies = VAR_0;
 if (VAR_1->recover.end_jiffies < VAR_1->recover.start_jiffies)
  VAR_1->recover.end_jiffies = ~0;
}
