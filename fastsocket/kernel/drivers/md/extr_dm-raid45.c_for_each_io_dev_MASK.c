
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stripe {int sc; } ;
struct TYPE_2__ {unsigned int raid_devs; } ;
struct raid_set {scalar_t__ dev; TYPE_1__ set; } ;


 int FUNC_0 (struct stripe*,unsigned int) ;
 int FUNC_1 (scalar_t__) ;
 struct raid_set* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static unsigned FUNC_4(struct stripe *VAR_0,
           void (*VAR_1)(struct stripe *VAR_2, unsigned VAR_3))
{
 struct raid_set *VAR_4 = FUNC_2(VAR_0->sc);
 unsigned VAR_5, VAR_6 = 0;

 for (VAR_5 = 0; VAR_5 < VAR_4->set.raid_devs; VAR_5++) {
  if (FUNC_3(FUNC_0(VAR_0, VAR_5)) && !FUNC_1(VAR_4->dev + VAR_5)) {
   VAR_1(VAR_0, VAR_5);
   VAR_6++;
  }
 }

 return VAR_6;
}
