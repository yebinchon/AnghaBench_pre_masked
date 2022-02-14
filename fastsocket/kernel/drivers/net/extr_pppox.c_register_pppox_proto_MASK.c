
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pppox_proto {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct pppox_proto** VAR_3 ;

int FUNC_0(int VAR_4, struct pppox_proto *VAR_5)
{
 if (VAR_4 < 0 || VAR_4 > VAR_2)
  return -VAR_1;
 if (VAR_3[VAR_4])
  return -VAR_0;
 VAR_3[VAR_4] = VAR_5;
 return 0;
}
