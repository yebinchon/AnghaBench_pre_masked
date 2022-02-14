
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r5conf {int dummy; } ;
struct mddev {struct r5conf* private; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ FUNC_0 (char const*,int,unsigned long*) ;
 int FUNC_1 (struct mddev*,unsigned long) ;

__attribute__((used)) static ssize_t
FUNC_2(struct mddev *VAR_3, const char *VAR_4, size_t VAR_5)
{
 struct r5conf *VAR_6 = VAR_3->private;
 unsigned long VAR_7;
 int VAR_8;

 if (VAR_5 >= VAR_2)
  return -VAR_0;
 if (!VAR_6)
  return -VAR_1;

 if (FUNC_0(VAR_4, 10, &VAR_7))
  return -VAR_0;
 VAR_8 = FUNC_1(VAR_3, VAR_7);
 if (VAR_8)
  return VAR_8;
 return VAR_5;
}
