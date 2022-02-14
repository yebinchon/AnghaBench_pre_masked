
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bandwidth; } ;
struct raid_set {TYPE_1__ recover; } ;
typedef enum raid_set_flags { ____Placeholder_raid_set_flags } raid_set_flags ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int,int) ;
 scalar_t__ FUNC_1 (int,int ,int ) ;
 int FUNC_2 (struct raid_set*,int) ;
 int FUNC_3 (char*,char*,int*) ;

__attribute__((used)) static int FUNC_4(struct raid_set *VAR_3, int VAR_4, char **VAR_5,
       enum raid_set_flags VAR_6)
{
 int VAR_7 = VAR_3->recover.bandwidth, VAR_8;

 if (VAR_4 != 2)
  return -VAR_2;

 if (FUNC_3(VAR_5[1], "%d", &VAR_8) == 1 &&
     FUNC_1(VAR_8, VAR_1, VAR_0)) {

  VAR_8 = FUNC_0(VAR_5[0], VAR_7, VAR_8);


  if (FUNC_1(VAR_8, VAR_1, VAR_0)) {
   FUNC_2(VAR_3, VAR_8);
   return 0;
  }
 }

 return -VAR_2;
}
