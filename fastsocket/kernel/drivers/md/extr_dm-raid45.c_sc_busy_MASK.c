
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int stripes; } ;
struct raid_set {TYPE_1__ sc; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_2(struct raid_set *VAR_1)
{
 return FUNC_1(&VAR_1->sc) >
        FUNC_0(&VAR_1->sc.stripes) - (VAR_0 / 2);
}
