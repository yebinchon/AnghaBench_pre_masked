
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_char ;
struct call_struc {int dummy; } ;
struct TYPE_6__ {char* data; int datalen; int ll_id; } ;
struct TYPE_7__ {TYPE_1__ dss1_io; } ;
struct TYPE_8__ {int driver; TYPE_2__ parm; } ;
typedef TYPE_3__ isdn_ctrl ;
struct TYPE_9__ {int (* drv_to_name ) (int ) ;} ;


 int VAR_0 ;
 TYPE_5__ VAR_1 ;
 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char*,...) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(isdn_ctrl *VAR_2, struct call_struc *VAR_3)
{ char *VAR_4 = VAR_2->parm.dss1_io.data;
  int VAR_5 = VAR_2->parm.dss1_io.datalen;
  int VAR_6 = 1;
  u_char VAR_7,VAR_8;
  char VAR_9[90], *VAR_10, *VAR_11;

  if (VAR_5 < 2) return(-100);
  if (*VAR_4++ != 0x30) return(-101);
  if ((VAR_7 = *VAR_4++) > 0x81) return(-102);
  VAR_5 -= 2;
  if (VAR_7 == 0x80)
   { if (VAR_5 < 2) return(-103);
     if ((*(VAR_4+VAR_5-1)) || (*(VAR_4+VAR_5-2))) return(-104);
     VAR_5 -= 2;
   }
  else
   if ( VAR_7 == 0x81)
    { VAR_7 = *VAR_4++;
      VAR_5--;
      if (VAR_7 > VAR_5) return(-105);
      VAR_5 = VAR_7;
    }
   else
    if (VAR_7 > VAR_5) return(-106);
     else
      VAR_5 = VAR_7;
  if (VAR_5 < 3) return(-107);
  if ((*VAR_4++ != 2) || (*VAR_4++ != 1) || (*VAR_4++ != 0x0B)) return(-108);
  VAR_5 -= 3;
  if (VAR_5 < 2) return(-109);
  if (*VAR_4 == 0x31)
   { VAR_4++;
     if ((VAR_7 = *VAR_4++) > 0x81) return(-110);
     VAR_5 -= 2;
     if (VAR_7 == 0x80)
      { if (VAR_5 < 2) return(-111);
        if ((*(VAR_4+VAR_5-1)) || (*(VAR_4+VAR_5-2))) return(-112);
        VAR_5 -= 2;
      }
     else
      if ( VAR_7 == 0x81)
       { VAR_7 = *VAR_4++;
         VAR_5--;
         if (VAR_7 > VAR_5) return(-113);
         VAR_5 = VAR_7;
       }
      else
       if (VAR_7 > VAR_5) return(-114);
        else
         VAR_5 = VAR_7;
   }

  while (VAR_5 >= 2)
   { VAR_11 = VAR_9;
     FUNC_2(VAR_11,"%d 0x%lx %d %s ",VAR_0, VAR_2->parm.dss1_io.ll_id,
                 VAR_6++,VAR_1.drv_to_name(VAR_2->driver));
     VAR_11 += FUNC_3(VAR_11);
     if (*VAR_4++ != 0x30) return(-115);
     VAR_7 = *VAR_4++;
     VAR_5 -= 2;
     if (VAR_7 > VAR_5) return(-116);
     VAR_5 -= VAR_7;
     VAR_10 = VAR_4;
     VAR_4 += VAR_7;
     if (!(VAR_8 = FUNC_0(VAR_11,VAR_10,VAR_7 & 0xFF))) continue;
     VAR_11 += FUNC_3(VAR_11);
     VAR_10 += VAR_8;
     VAR_7 -= VAR_8;
     if (VAR_7 < 6) continue;
     if ((*VAR_10++ != 0x0A) || (*VAR_10++ != 1)) continue;
     FUNC_2(VAR_11," 0x%02x ",(*VAR_10++) & 0xFF);
     VAR_11 += FUNC_3(VAR_11);
     if ((*VAR_10++ != 0x0A) || (*VAR_10++ != 1)) continue;
     FUNC_2(VAR_11,"%d ",(*VAR_10++) & 0xFF);
     VAR_11 += FUNC_3(VAR_11);
     VAR_7 -= 6;
     if (VAR_7 > 2)
      { if (*VAR_10++ != 0x30) continue;
        if (*VAR_10 > (VAR_7-2)) continue;
        VAR_7 = *VAR_10++;
        if (!(VAR_8 = FUNC_0(VAR_11,VAR_10,VAR_7 & 0xFF))) continue;
        VAR_11 += FUNC_3(VAR_11);
      }
     FUNC_2(VAR_11,"\n");
     FUNC_1(VAR_9);
   }
  if (VAR_5) return(-117);
  return(0);
}
