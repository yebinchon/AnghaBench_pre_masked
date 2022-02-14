
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct ipath_devdata {int ipath_flags; int ipath_boardrev; int ipath_hwerrmask; TYPE_1__* ipath_kregs; } ;
typedef int ipath_err_t ;
struct TYPE_2__ {int kr_extstatus; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct ipath_devdata*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct ipath_devdata*,char*) ;
 int FUNC_3 (struct ipath_devdata*,int ) ;

__attribute__((used)) static void FUNC_4(struct ipath_devdata *VAR_9)
{
 ipath_err_t VAR_10;
 u64 VAR_11;

 VAR_11 = FUNC_3(VAR_9, VAR_9->ipath_kregs->kr_extstatus);

 if (!(VAR_11 & VAR_1))
  FUNC_2(VAR_9, "MemBIST did not complete!\n");
 if (VAR_11 & VAR_0)
  FUNC_1("MemBIST corrected\n");

 FUNC_0(VAR_9);


 VAR_10 = -1LL;

 if (VAR_9->ipath_flags & VAR_5)
  VAR_10 &= ~VAR_7;

 if (VAR_9->ipath_flags & VAR_6)
  VAR_10 &= ~VAR_8;
 VAR_10 &= ~(VAR_4 |
   VAR_3);







 VAR_10 &= ~VAR_2;




 if (VAR_9->ipath_boardrev == 4 || VAR_9->ipath_boardrev == 9)
  VAR_10 &= ~VAR_4;
 VAR_9->ipath_hwerrmask = VAR_10;
}
