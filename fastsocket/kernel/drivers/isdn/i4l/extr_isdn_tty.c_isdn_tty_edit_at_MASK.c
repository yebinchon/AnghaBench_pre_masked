
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef char u_char ;
struct TYPE_7__ {char* mdmreg; char* mdmcmd; size_t mdmcmdl; } ;
struct TYPE_6__ {TYPE_2__ emu; } ;
typedef TYPE_1__ modem_info ;
typedef TYPE_2__ atemu ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 scalar_t__ FUNC_0 (char) ;
 int FUNC_1 (char*,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 char FUNC_3 (char) ;
 int FUNC_4 (char*,char*,int) ;

__attribute__((used)) static int
FUNC_5(const char *VAR_5, int VAR_6, modem_info * VAR_7)
{
 atemu *VAR_8 = &VAR_7->emu;
 int VAR_9 = 0;
 u_char VAR_10;
 char VAR_11[2];
 int VAR_12;

 for (VAR_12 = VAR_6; VAR_12 > 0; VAR_5++, VAR_12--) {
  VAR_10 = *VAR_5;
  VAR_9++;
  if (VAR_10 == VAR_8->mdmreg[VAR_2] || VAR_10 == VAR_8->mdmreg[VAR_4]) {

   VAR_8->mdmcmd[VAR_8->mdmcmdl] = 0;
   if (VAR_8->mdmreg[VAR_3] & VAR_0) {
    VAR_11[0] = VAR_10;
    VAR_11[1] = 0;
    FUNC_1(VAR_11, VAR_7);
   }
   if ((VAR_8->mdmcmdl >= 2) && (!(FUNC_4(VAR_8->mdmcmd, "AT", 2))))
    FUNC_2(VAR_7);
   VAR_8->mdmcmdl = 0;
   continue;
  }
  if (VAR_10 == VAR_8->mdmreg[VAR_1] && VAR_8->mdmreg[VAR_1] < 128) {

   if ((VAR_8->mdmcmdl > 2) || (!VAR_8->mdmcmdl)) {
    if (VAR_8->mdmcmdl)
     VAR_8->mdmcmdl--;
    if (VAR_8->mdmreg[VAR_3] & VAR_0)
     FUNC_1("\b", VAR_7);
   }
   continue;
  }
  if (FUNC_0(VAR_10)) {
   if (VAR_8->mdmreg[VAR_3] & VAR_0) {
    VAR_11[0] = VAR_10;
    VAR_11[1] = 0;
    FUNC_1(VAR_11, VAR_7);
   }
   if (VAR_8->mdmcmdl < 255) {
    VAR_10 = FUNC_3(VAR_10);
    switch (VAR_8->mdmcmdl) {
     case 1:
      if (VAR_10 == 'T') {
       VAR_8->mdmcmd[VAR_8->mdmcmdl] = VAR_10;
       VAR_8->mdmcmd[++VAR_8->mdmcmdl] = 0;
       break;
      } else
       VAR_8->mdmcmdl = 0;

     case 0:
      if (VAR_10 == 'A') {
       VAR_8->mdmcmd[VAR_8->mdmcmdl] = VAR_10;
       VAR_8->mdmcmd[++VAR_8->mdmcmdl] = 0;
      }
      break;
     default:
      VAR_8->mdmcmd[VAR_8->mdmcmdl] = VAR_10;
      VAR_8->mdmcmd[++VAR_8->mdmcmdl] = 0;
    }
   }
  }
 }
 return VAR_9;
}
