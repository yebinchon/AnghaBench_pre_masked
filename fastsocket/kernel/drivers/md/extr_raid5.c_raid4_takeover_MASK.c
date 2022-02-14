
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mddev {int level; scalar_t__ layout; int new_level; scalar_t__ new_layout; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ) ;
 void* FUNC_1 (struct mddev*,int) ;
 void* FUNC_2 (struct mddev*) ;

__attribute__((used)) static void *FUNC_3(struct mddev *VAR_2)
{




 if (VAR_2->level == 0)
  return FUNC_1(VAR_2, 4);
 if (VAR_2->level == 5 &&
     VAR_2->layout == VAR_0) {
  VAR_2->new_layout = 0;
  VAR_2->new_level = 4;
  return FUNC_2(VAR_2);
 }
 return FUNC_0(-VAR_1);
}
