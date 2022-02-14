
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int* mdmreg; } ;
struct TYPE_8__ {TYPE_2__ emu; } ;
typedef TYPE_1__ modem_info ;
typedef TYPE_2__ atemu ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char**) ;
 int FUNC_1 (char*,TYPE_1__*) ;
 int FUNC_2 (int,int,TYPE_1__*,TYPE_2__*) ;
 int FUNC_3 (int,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_4(char **VAR_2, modem_info * VAR_3)
{
 atemu *VAR_4 = &VAR_3->emu;
 int VAR_5;
 int VAR_6;
 int VAR_7;
 int VAR_8;

 VAR_6 = FUNC_0(VAR_2);
 if (VAR_6 < 0 || VAR_6 >= VAR_0)
  VAR_1;
 switch (*VAR_2[0]) {
  case '=':
   VAR_2[0]++;
   VAR_7 = FUNC_0(VAR_2);
   if (VAR_7 < 0 || VAR_7 > 255)
    VAR_1;
   if (FUNC_2(VAR_6, VAR_7, VAR_3, VAR_4))
    VAR_1;
   VAR_4->mdmreg[VAR_6] = VAR_7;
   break;
  case '.':

   VAR_2[0]++;
   VAR_5 = FUNC_0(VAR_2);
   if ((VAR_5 < 0) || (VAR_5 > 7))
    VAR_1;
   switch (*VAR_2[0]) {
    case '=':
     VAR_2[0]++;
     VAR_8 = FUNC_0(VAR_2);
     if (VAR_8 < 0 || VAR_8 > 1)
      VAR_1;
     if (VAR_8)
      VAR_7 = VAR_4->mdmreg[VAR_6] | (1 << VAR_5);
     else
      VAR_7 = VAR_4->mdmreg[VAR_6] & ~(1 << VAR_5);
     if (FUNC_2(VAR_6, VAR_7, VAR_3, VAR_4))
      VAR_1;
     VAR_4->mdmreg[VAR_6] = VAR_7;
     break;
    case '?':
     VAR_2[0]++;
     FUNC_1("\r\n", VAR_3);
     FUNC_1((VAR_4->mdmreg[VAR_6] & (1 << VAR_5)) ? "1" : "0",
        VAR_3);
     break;
    default:
     VAR_1;
   }
   break;
  case '?':
   VAR_2[0]++;
   FUNC_3(VAR_6, VAR_3);
   break;
  default:
   VAR_1;
   break;
 }
 return 0;
}
