
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int stripes_to_set; int stripes; } ;
struct raid_set {TYPE_1__ sc; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (TYPE_1__*,unsigned int,int ) ;
 int FUNC_3 (TYPE_1__*,unsigned int) ;

__attribute__((used)) static void FUNC_4(struct raid_set *VAR_1)
{
 unsigned VAR_2 = FUNC_0(&VAR_1->sc.stripes_to_set);

 if (VAR_2) {
  unsigned VAR_3 = FUNC_0(&VAR_1->sc.stripes);
  int VAR_4 = (VAR_2 > VAR_3) ? FUNC_2(&VAR_1->sc, VAR_2 - VAR_3, VAR_0) :
          FUNC_3(&VAR_1->sc, VAR_3 - VAR_2);


  if (!VAR_4)
   FUNC_1(&VAR_1->sc.stripes_to_set, 0);
 }
}
