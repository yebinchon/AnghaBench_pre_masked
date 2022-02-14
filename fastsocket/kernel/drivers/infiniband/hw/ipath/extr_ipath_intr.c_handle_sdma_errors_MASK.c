
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ipath_devdata {int ipath_sdma_lock; int ipath_sdma_status; TYPE_1__* ipath_kregs; } ;
typedef int ipath_err_t ;
struct TYPE_2__ {int kr_senddmalengen; int kr_senddmastatus; int kr_senddmahead; int kr_senddmatail; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct ipath_devdata*,int) ;
 int FUNC_2 (int ,char*,unsigned long,unsigned long,unsigned long,unsigned long) ;
 int FUNC_3 (char*,unsigned long,char*) ;
 int VAR_6 ;
 int FUNC_4 (struct ipath_devdata*,char*,int,int) ;
 unsigned long FUNC_5 (struct ipath_devdata*,int ) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int ,int *) ;

__attribute__((used)) static void FUNC_9(struct ipath_devdata *VAR_7, ipath_err_t VAR_8)
{
 unsigned long VAR_9;
 int VAR_10;

 if (VAR_6 & VAR_4) {
  char VAR_11[128];
  FUNC_4(VAR_7, VAR_11, sizeof VAR_11, VAR_8 &
   VAR_0);
  FUNC_3("errors %lx (%s)\n", (unsigned long)VAR_8, VAR_11);
 }
 if (VAR_6 & VAR_5) {
  unsigned long VAR_12, VAR_13, VAR_14, VAR_15;
  VAR_12 = FUNC_5(VAR_7, VAR_7->ipath_kregs->kr_senddmatail);
  VAR_13 = FUNC_5(VAR_7, VAR_7->ipath_kregs->kr_senddmahead);
  VAR_14 = FUNC_5(VAR_7
   , VAR_7->ipath_kregs->kr_senddmastatus);
  VAR_15 = FUNC_5(VAR_7,
   VAR_7->ipath_kregs->kr_senddmalengen);
  FUNC_2(VAR_3, "sdma tl 0x%lx hd 0x%lx status 0x%lx "
   "lengen 0x%lx\n", VAR_12, VAR_13, VAR_14, VAR_15);
 }

 FUNC_6(&VAR_7->ipath_sdma_lock, VAR_9);
 FUNC_0(VAR_2, &VAR_7->ipath_sdma_status);
 VAR_10 = FUNC_8(VAR_1, &VAR_7->ipath_sdma_status);
 FUNC_7(&VAR_7->ipath_sdma_lock, VAR_9);
 if (!VAR_10)
  FUNC_1(VAR_7, 1);
}
