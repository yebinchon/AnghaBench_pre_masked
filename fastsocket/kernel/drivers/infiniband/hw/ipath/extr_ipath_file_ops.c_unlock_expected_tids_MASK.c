
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct ipath_portdata {int port_port; struct ipath_devdata* port_dd; } ;
struct ipath_devdata {int ipath_rcvtidcnt; int * ipath_physshadow; int pcidev; struct page** ipath_pageshadow; } ;
struct TYPE_2__ {scalar_t__ sps_pageunlocks; scalar_t__ sps_pagelocks; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,unsigned long long,...) ;
 int FUNC_1 (struct page**,int) ;
 TYPE_1__ VAR_3 ;
 int FUNC_2 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct ipath_portdata *VAR_4)
{
 struct ipath_devdata *VAR_5 = VAR_4->port_dd;
 int VAR_6 = VAR_4->port_port * VAR_5->ipath_rcvtidcnt;
 int VAR_7, VAR_8 = 0, VAR_9 = VAR_6 + VAR_5->ipath_rcvtidcnt;

 FUNC_0(VAR_2, "Port %u unlocking any locked expTID pages\n",
     VAR_4->port_port);
 for (VAR_7 = VAR_6; VAR_7 < VAR_9; VAR_7++) {
  struct page *VAR_10 = VAR_5->ipath_pageshadow[VAR_7];

  if (!VAR_10)
   continue;

  VAR_5->ipath_pageshadow[VAR_7] = ((void*)0);
  FUNC_2(VAR_5->pcidev, VAR_5->ipath_physshadow[VAR_7],
   VAR_0, VAR_1);
  FUNC_1(&VAR_10, 1);
  VAR_8++;
  VAR_3.sps_pageunlocks++;
 }
 if (VAR_8)
  FUNC_0(VAR_2, "Port %u locked %u expTID entries\n",
      VAR_4->port_port, VAR_8);

 if (VAR_3.sps_pagelocks || VAR_3.sps_pageunlocks)
  FUNC_0(VAR_2, "%llu pages locked, %llu unlocked\n",
      (unsigned long long) VAR_3.sps_pagelocks,
      (unsigned long long)
      VAR_3.sps_pageunlocks);
}
