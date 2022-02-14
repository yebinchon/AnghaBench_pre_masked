
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct stripe_chunk {int dummy; } ;
struct stripe {int dummy; } ;
struct TYPE_4__ {int recovery_stripes; int io_size; scalar_t__ end_jiffies; } ;
struct TYPE_6__ {int io_size; int raid_devs; } ;
struct TYPE_5__ {int stripes; } ;
struct raid_set {TYPE_1__ recover; TYPE_3__ set; TYPE_2__ sc; } ;
struct page_list {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static unsigned FUNC_3(struct raid_set *VAR_0)
{
 return FUNC_2(FUNC_0(&VAR_0->sc.stripes) *
    (sizeof(struct stripe) +
     (sizeof(struct stripe_chunk) +
      (sizeof(struct page_list) +
       FUNC_1(VAR_0->set.io_size) *
       VAR_0->set.raid_devs)) +
     (VAR_0->recover.end_jiffies ?
      0 : VAR_0->recover.recovery_stripes *
      FUNC_1(VAR_0->set.raid_devs * VAR_0->recover.io_size))));
}
