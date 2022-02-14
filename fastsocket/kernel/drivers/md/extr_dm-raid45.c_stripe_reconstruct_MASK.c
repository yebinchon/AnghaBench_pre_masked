
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int size; } ;
struct TYPE_6__ {int recover; } ;
struct stripe {TYPE_1__ io; TYPE_3__ idx; int sc; } ;
struct TYPE_5__ {int raid_devs; } ;
struct raid_set {scalar_t__ stats; TYPE_2__ set; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct stripe*,int) ;
 int FUNC_2 (int ) ;
 struct raid_set* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct raid_set*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (struct stripe*,int ,int ,int) ;
 int FUNC_7 (struct stripe*,int) ;

__attribute__((used)) static void FUNC_8(struct stripe *VAR_2)
{
 struct raid_set *VAR_3 = FUNC_3(VAR_2->sc);
 int VAR_4 = VAR_3->set.raid_devs, VAR_5 = VAR_2->idx.recover;

 FUNC_0(VAR_5 < 0);


 while (VAR_4--)
  FUNC_0(VAR_4 != VAR_5 && !FUNC_2(FUNC_1(VAR_2, VAR_4)));


 FUNC_5(VAR_3->stats + (FUNC_4(VAR_3) ? VAR_1 :
       VAR_0));

 FUNC_7(VAR_2, VAR_5);
 FUNC_6(VAR_2, VAR_2->io.size, 0, VAR_5);
}
