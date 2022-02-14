
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mddev {unsigned long long suspend_hi; TYPE_1__* pers; } ;
typedef size_t ssize_t ;
struct TYPE_2__ {int (* quiesce ) (struct mddev*,int) ;} ;


 size_t VAR_0 ;
 unsigned long long FUNC_0 (char const*,char**,int) ;
 int FUNC_1 (struct mddev*,int) ;
 int FUNC_2 (struct mddev*,int) ;
 int FUNC_3 (struct mddev*,int) ;

__attribute__((used)) static ssize_t
FUNC_4(struct mddev *VAR_1, const char *VAR_2, size_t VAR_3)
{
 char *VAR_4;
 unsigned long long VAR_5 = FUNC_0(VAR_2, &VAR_4, 10);
 unsigned long long VAR_6 = VAR_1->suspend_hi;

 if (VAR_1->pers == ((void*)0) ||
     VAR_1->pers->quiesce == ((void*)0))
  return -VAR_0;
 if (VAR_2 == VAR_4 || (*VAR_4 && *VAR_4 != '\n'))
  return -VAR_0;

 VAR_1->suspend_hi = VAR_5;
 if (VAR_5 <= VAR_6)

  VAR_1->pers->quiesce(VAR_1, 2);
 else {

  VAR_1->pers->quiesce(VAR_1, 1);
  VAR_1->pers->quiesce(VAR_1, 0);
 }
 return VAR_3;
}
