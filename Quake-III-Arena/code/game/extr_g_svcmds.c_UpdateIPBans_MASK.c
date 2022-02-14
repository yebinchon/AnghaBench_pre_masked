
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int iplist_final ;
typedef int ip ;
typedef int byte ;
struct TYPE_2__ {int compare; unsigned int mask; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (char*,int,char*) ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char*) ;
 char* FUNC_4 (char*,int) ;

__attribute__((used)) static void FUNC_5 (void)
{
 byte VAR_3[4];
 byte VAR_4[4];
 int VAR_5,VAR_6;
 char VAR_7[VAR_0];
 char VAR_8[64];

 *VAR_7 = 0;
 for (VAR_5 = 0 ; VAR_5 < VAR_2 ; VAR_5++)
 {
  if (VAR_1[VAR_5].compare == 0xffffffff)
   continue;

  *(unsigned *)VAR_3 = VAR_1[VAR_5].compare;
  *(unsigned *)VAR_4 = VAR_1[VAR_5].mask;
  *VAR_8 = 0;
  for (VAR_6 = 0 ; VAR_6 < 4 ; VAR_6++)
  {
   if (VAR_4[VAR_6]!=255)
    FUNC_1(VAR_8, sizeof(VAR_8), "*");
   else
    FUNC_1(VAR_8, sizeof(VAR_8), FUNC_4("%i", VAR_3[VAR_6]));
   FUNC_1(VAR_8, sizeof(VAR_8), (VAR_6<3) ? "." : " ");
  }
  if (FUNC_2(VAR_7)+FUNC_2(VAR_8) < VAR_0)
  {
   FUNC_1( VAR_7, sizeof(VAR_7), VAR_8);
  }
  else
  {
   FUNC_0("g_banIPs overflowed at MAX_CVAR_VALUE_STRING\n");
   break;
  }
 }

 FUNC_3( "g_banIPs", VAR_7 );
}
