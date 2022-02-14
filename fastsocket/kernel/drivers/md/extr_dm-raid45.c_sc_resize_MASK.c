
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int stripes_to_set; int stripes; } ;
struct raid_set {TYPE_1__ sc; } ;
typedef enum raid_set_flags { ____Placeholder_raid_set_flags } raid_set_flags ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int,int ,int ) ;
 int FUNC_4 (char*,char*,int*) ;
 int FUNC_5 (struct raid_set*) ;

__attribute__((used)) static int FUNC_6(struct raid_set *VAR_4, int VAR_5, char **VAR_6,
       enum raid_set_flags VAR_7)
{
 int VAR_8, VAR_9;

 if (VAR_5 != 2)
  return -VAR_0;


 if (FUNC_1(&VAR_4->sc.stripes_to_set))
  return -VAR_1;

 if (FUNC_4(VAR_6[1], "%d", &VAR_9) == 1 &&
     VAR_9 > 0) {
  VAR_8 = FUNC_1(&VAR_4->sc.stripes);


  VAR_9 = FUNC_0(VAR_6[0], VAR_8, VAR_9);





  if (FUNC_3(VAR_9, VAR_3, VAR_2) &&
      VAR_9 != FUNC_1(&VAR_4->sc.stripes)) {
   FUNC_2(&VAR_4->sc.stripes_to_set, VAR_9);
   FUNC_5(VAR_4);
   return 0;
  }
 }

 return -VAR_0;
}
