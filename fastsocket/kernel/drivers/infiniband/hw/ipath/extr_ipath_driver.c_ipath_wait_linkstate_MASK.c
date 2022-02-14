
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u64 ;
typedef int u32 ;
struct ipath_devdata {int ipath_state_wanted; int ipath_flags; size_t ibcs_lts_mask; TYPE_1__* ipath_kregs; } ;
struct TYPE_2__ {int kr_ibcctrl; int kr_ibcstatus; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,...) ;
 int * VAR_5 ;
 size_t FUNC_1 (struct ipath_devdata*,int ) ;
 int VAR_6 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int,int ) ;

int FUNC_4(struct ipath_devdata *VAR_7, u32 VAR_8, int VAR_9)
{
 VAR_7->ipath_state_wanted = VAR_8;
 FUNC_3(VAR_6,
      (VAR_7->ipath_flags & VAR_8),
      FUNC_2(VAR_9));
 VAR_7->ipath_state_wanted = 0;

 if (!(VAR_7->ipath_flags & VAR_8)) {
  u64 VAR_10;
  FUNC_0(VAR_4, "Didn't reach linkstate %s within %u"
      " ms\n",

      (VAR_8 & VAR_3) ? "INIT" :
      ((VAR_8 & VAR_2) ? "DOWN" :
       ((VAR_8 & VAR_1) ? "ARM" : "ACTIVE")),
      VAR_9);
  VAR_10 = FUNC_1(VAR_7, VAR_7->ipath_kregs->kr_ibcstatus);
  FUNC_0(VAR_4, "ibcc=%llx ibcstatus=%llx (%s)\n",
      (unsigned long long) FUNC_1(
       VAR_7, VAR_7->ipath_kregs->kr_ibcctrl),
      (unsigned long long) VAR_10,
      VAR_5[VAR_10 & VAR_7->ibcs_lts_mask]);
 }
 return (VAR_7->ipath_flags & VAR_8) ? 0 : -VAR_0;
}
