
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct substring {size_t length; size_t string; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (size_t,size_t,size_t) ;

__attribute__((used)) static bool
FUNC_1(struct substring VAR_1, struct substring VAR_2, bool VAR_3)
{
 if (VAR_1.length <= VAR_2.length) {
  return (VAR_0);
 }

 size_t VAR_4 = (VAR_1.length - VAR_2.length);

 if (VAR_3) {
  if (((char *)(VAR_1.string + VAR_4 - 1))[0] != '.') {
   return (VAR_0);
  }
 }


 return (FUNC_0(VAR_1.string + VAR_4, VAR_2.string, VAR_2.length) == 0);
}
