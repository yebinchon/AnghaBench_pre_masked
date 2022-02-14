
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dc_state {int val; char* name; } ;


 struct dc_state* VAR_0 ;

__attribute__((used)) static char *FUNC_0(unsigned char VAR_1)
{
 struct dc_state *VAR_2 = VAR_0;
 while (VAR_2->val != 0xff) {
  if (VAR_2->val == VAR_1)
   break;
  VAR_2++;
 }
 return VAR_2->name;
}
