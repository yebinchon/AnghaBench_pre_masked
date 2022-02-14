
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct ipath_portdata {scalar_t__ port_head; size_t port_lastrcvhdrqtail; int port_wait; int port_hdrqfull; int port_cnt; } ;
struct ipath_devdata {size_t ipath_cfgports; int ipath_flags; size_t ipath_hdrqlast; struct ipath_portdata** ipath_pd; } ;
struct TYPE_2__ {int sps_hdrqfull; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ipath_portdata*) ;
 size_t FUNC_1 (struct ipath_portdata*) ;
 size_t FUNC_2 (struct ipath_devdata*,int ,size_t) ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;

__attribute__((used)) static int FUNC_5(struct ipath_devdata *VAR_4)
{
 int VAR_5 = 0;
 u32 VAR_6, VAR_7;
 u32 VAR_8;

 VAR_1.sps_hdrqfull++;
 for (VAR_8 = 0; VAR_8 < VAR_4->ipath_cfgports; VAR_8++) {
  struct ipath_portdata *VAR_9 = VAR_4->ipath_pd[VAR_8];

  if (VAR_8 == 0) {





   if (VAR_9->port_head != FUNC_0(VAR_9))
    VAR_5 |= 1 << VAR_8;
   continue;
  }


  if (!VAR_9 || !VAR_9->port_cnt)
   continue;


  if (VAR_4->ipath_flags & VAR_0)
   VAR_7 = FUNC_2(VAR_4, VAR_3, VAR_8);
  else
   VAR_7 = FUNC_1(VAR_9);
  if (VAR_7 == VAR_9->port_lastrcvhdrqtail)
   continue;

  VAR_6 = FUNC_2(VAR_4, VAR_2, VAR_8);
  if (VAR_6 == (VAR_7 + 1) || (!VAR_6 && VAR_7 == VAR_4->ipath_hdrqlast)) {
   VAR_9->port_lastrcvhdrqtail = VAR_7;
   VAR_9->port_hdrqfull++;

   FUNC_4();
   FUNC_3(&VAR_9->port_wait);
  }
 }

 return VAR_5;
}
