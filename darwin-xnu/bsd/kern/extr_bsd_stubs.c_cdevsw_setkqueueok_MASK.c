
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct cdevsw {int dummy; } ;


 int VAR_0 ;
 struct cdevsw* VAR_1 ;
 int* VAR_2 ;
 scalar_t__ FUNC_0 (char*,char*,int) ;
 int VAR_3 ;

int
FUNC_1(int VAR_4, struct cdevsw * VAR_5, int VAR_6)
{
 struct cdevsw * VAR_7;
 uint64_t VAR_8 = VAR_0;

 if (VAR_4 < 0 || VAR_4 >= VAR_3) {
  return -1;
 }

 VAR_7 = &VAR_1[VAR_4];
 if ((FUNC_0((char *)VAR_7, (char *)VAR_5, sizeof(struct cdevsw)) != 0)) {
  return -1;
 }

 VAR_8 |= VAR_6;

 VAR_2[VAR_4] = VAR_8;
 return 0;
}
