
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int str ;
struct TYPE_2__ {char* string; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (char*,char*,int) ;
 TYPE_1__ VAR_1 ;
 char* FUNC_2 (char*,char) ;

void FUNC_3(void)
{
 char *VAR_2, *VAR_3;
 char VAR_4[VAR_0];

 FUNC_1( VAR_4, VAR_1.string, sizeof(VAR_4) );

 for (VAR_3 = VAR_2 = VAR_1.string; *VAR_3; ) {
  VAR_2 = FUNC_2(VAR_2, ' ');
  if (!VAR_2)
   break;
  while (*VAR_2 == ' ')
   *VAR_2++ = 0;
  if (*VAR_3)
   FUNC_0( VAR_3 );
  VAR_3 = VAR_2;
 }
}
