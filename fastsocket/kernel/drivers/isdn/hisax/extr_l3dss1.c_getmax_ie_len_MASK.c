
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_2__ {int ie; int len; } ;


 TYPE_1__* VAR_0 ;

__attribute__((used)) static int
FUNC_0(u_char VAR_1) {
 int VAR_2 = 0;
 while (VAR_0[VAR_2].ie != -1) {
  if (VAR_0[VAR_2].ie == VAR_1)
   return(VAR_0[VAR_2].len);
  VAR_2++;
 }
 return(255);
}
