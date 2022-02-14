
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ipath_devdata {int ipath_piobcnt2k; int ipath_piobcnt4k; scalar_t__ ipath_lastcancel; TYPE_1__* ipath_kregs; } ;
struct TYPE_2__ {scalar_t__ kr_sendbuffererror; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*,unsigned long,unsigned long) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct ipath_devdata*,int,int) ;
 unsigned long FUNC_2 (struct ipath_devdata*,scalar_t__) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (char*,...) ;
 scalar_t__ FUNC_4 (int,unsigned long*) ;

void FUNC_5(struct ipath_devdata *VAR_4)
{
 u32 VAR_5;
 unsigned long VAR_6[4];




 VAR_5 = VAR_4->ipath_piobcnt2k + VAR_4->ipath_piobcnt4k;

 VAR_6[0] = FUNC_2(
  VAR_4, VAR_4->ipath_kregs->kr_sendbuffererror);
 VAR_6[1] = FUNC_2(
  VAR_4, VAR_4->ipath_kregs->kr_sendbuffererror + 1);
 if (VAR_5 > 128)
  VAR_6[2] = FUNC_2(
   VAR_4, VAR_4->ipath_kregs->kr_sendbuffererror + 2);
 if (VAR_5 > 192)
  VAR_6[3] = FUNC_2(
   VAR_4, VAR_4->ipath_kregs->kr_sendbuffererror + 3);
 else
  VAR_6[3] = 0;

 if (VAR_6[0] || VAR_6[1] || (VAR_5 > 128 && (VAR_6[2] || VAR_6[3]))) {
  int VAR_7;
  if (VAR_2 & (VAR_1|VAR_0) &&
   VAR_4->ipath_lastcancel > VAR_3) {
   FUNC_0(VAR_1|VAR_0,
       "SendbufErrs %lx %lx", VAR_6[0],
       VAR_6[1]);
   if (VAR_2 & VAR_1 && VAR_5 > 128)
    FUNC_3(" %lx %lx ", VAR_6[2], VAR_6[3]);
   FUNC_3("\n");
  }

  for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++)
   if (FUNC_4(VAR_7, VAR_6))
    FUNC_1(VAR_4, VAR_7, 1);

  VAR_4->ipath_lastcancel = VAR_3+3;
 }
}
