
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mddev {unsigned long safemode_delay; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (unsigned long) ;
 scalar_t__ FUNC_1 (char const*,unsigned long*,int) ;

__attribute__((used)) static ssize_t
FUNC_2(struct mddev *VAR_2, const char *VAR_3, size_t VAR_4)
{
 unsigned long VAR_5;

 if (FUNC_1(VAR_3, &VAR_5, 3) < 0)
  return -VAR_0;
 if (VAR_5 == 0)
  VAR_2->safemode_delay = 0;
 else {
  unsigned long VAR_6 = VAR_2->safemode_delay;
  VAR_2->safemode_delay = (VAR_5*VAR_1)/1000;
  if (VAR_2->safemode_delay == 0)
   VAR_2->safemode_delay = 1;
  if (VAR_2->safemode_delay < VAR_6)
   FUNC_0((unsigned long)VAR_2);
 }
 return VAR_4;
}
