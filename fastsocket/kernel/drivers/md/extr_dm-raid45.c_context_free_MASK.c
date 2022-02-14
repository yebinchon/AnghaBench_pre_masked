
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int rh; } ;
struct raid_set {TYPE_2__ recover; int sc; TYPE_1__* dev; int ti; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct raid_set*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct raid_set *VAR_0, unsigned VAR_1)
{
 while (VAR_1--)
  FUNC_0(VAR_0->ti, VAR_0->dev[VAR_1].dev);

 FUNC_3(&VAR_0->sc);
 FUNC_1(VAR_0->recover.rh);
 FUNC_2(VAR_0);
}
