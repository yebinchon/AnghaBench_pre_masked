
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stripe {int sc; } ;
struct TYPE_2__ {scalar_t__ io_count; } ;
struct raid_set {TYPE_1__ recover; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct raid_set* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct stripe*) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct stripe *VAR_2)
{
 struct raid_set *VAR_3 = FUNC_0(VAR_2->sc);

 FUNC_2(VAR_3->recover.io_count +
     (FUNC_1(VAR_2) ? VAR_0 : VAR_1));
}
