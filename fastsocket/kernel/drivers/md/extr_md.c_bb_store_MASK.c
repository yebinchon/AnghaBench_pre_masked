
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct md_rdev {int blocked_wait; int flags; int badblocks; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int *,char const*,size_t,int ) ;
 scalar_t__ FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static ssize_t FUNC_3(struct md_rdev *VAR_1, const char *VAR_2, size_t VAR_3)
{
 int VAR_4 = FUNC_0(&VAR_1->badblocks, VAR_2, VAR_3, 0);

 if (FUNC_1(VAR_0, &VAR_1->flags))
  FUNC_2(&VAR_1->blocked_wait);
 return VAR_4;
}
