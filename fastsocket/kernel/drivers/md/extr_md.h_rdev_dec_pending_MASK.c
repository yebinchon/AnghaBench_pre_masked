
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mddev {int recovery; } ;
struct md_rdev {int nr_pending; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static inline void FUNC_3(struct md_rdev *VAR_2, struct mddev *VAR_3)
{
 int VAR_4 = FUNC_2(VAR_0, &VAR_2->flags);
 if (FUNC_0(&VAR_2->nr_pending) && VAR_4)
  FUNC_1(VAR_1, &VAR_3->recovery);
}
