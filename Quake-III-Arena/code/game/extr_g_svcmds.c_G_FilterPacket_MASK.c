
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int qboolean ;
typedef int byte ;
struct TYPE_4__ {scalar_t__ integer; } ;
struct TYPE_3__ {unsigned int mask; unsigned int compare; } ;


 TYPE_2__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;

qboolean FUNC_0 (char *VAR_3)
{
 int VAR_4;
 unsigned VAR_5;
 byte VAR_6[4];
 char *VAR_7;

 VAR_4 = 0;
 VAR_7 = VAR_3;
 while (*VAR_7 && VAR_4 < 4) {
  VAR_6[VAR_4] = 0;
  while (*VAR_7 >= '0' && *VAR_7 <= '9') {
   VAR_6[VAR_4] = VAR_6[VAR_4]*10 + (*VAR_7 - '0');
   VAR_7++;
  }
  if (!*VAR_7 || *VAR_7 == ':')
   break;
  VAR_4++, VAR_7++;
 }

 VAR_5 = *(unsigned *)VAR_6;

 for (VAR_4=0 ; VAR_4<VAR_2 ; VAR_4++)
  if ( (VAR_5 & VAR_1[VAR_4].mask) == VAR_1[VAR_4].compare)
   return VAR_0.integer != 0;

 return VAR_0.integer == 0;
}
