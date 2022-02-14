
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int raid_devs; } ;
struct raid_set {TYPE_1__ set; } ;


 int FUNC_0 (unsigned int) ;

__attribute__((used)) static inline unsigned FUNC_1(struct raid_set *VAR_0, unsigned VAR_1)
{
 return FUNC_0(VAR_1) * VAR_0->set.raid_devs;
}
