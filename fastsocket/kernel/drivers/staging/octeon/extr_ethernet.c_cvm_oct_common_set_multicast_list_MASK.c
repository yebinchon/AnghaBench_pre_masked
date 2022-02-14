
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bcst; int mcst; int cam_mode; } ;
union cvmx_gmxx_rxx_adr_ctl {int u64; TYPE_1__ s; } ;
union cvmx_gmxx_prtx_cfg {unsigned long long u64; } ;
struct octeon_ethernet {int port; } ;
struct net_device {int flags; scalar_t__ mc_list; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int) ;
 unsigned long long FUNC_6 (int ) ;
 int FUNC_7 (int ,int) ;
 struct octeon_ethernet* FUNC_8 (struct net_device*) ;

__attribute__((used)) static void FUNC_9(struct net_device *VAR_3)
{
 union cvmx_gmxx_prtx_cfg VAR_4;
 struct octeon_ethernet *VAR_5 = FUNC_8(VAR_3);
 int VAR_6 = FUNC_4(VAR_5->port);
 int VAR_7 = FUNC_3(VAR_5->port);

 if ((VAR_6 < 2)
     && (FUNC_5(VAR_6) !=
  VAR_0)) {
  union cvmx_gmxx_rxx_adr_ctl VAR_8;
  VAR_8.u64 = 0;
  VAR_8.s.bcst = 1;

  if (VAR_3->mc_list || (VAR_3->flags & VAR_1) ||
      (VAR_3->flags & VAR_2))

   VAR_8.s.mcst = 2;
  else

   VAR_8.s.mcst = 1;

  if (VAR_3->flags & VAR_2)




   VAR_8.s.cam_mode = 0;
  else

   VAR_8.s.cam_mode = 1;

  VAR_4.u64 =
      FUNC_6(FUNC_0(VAR_7, VAR_6));
  FUNC_7(FUNC_0(VAR_7, VAR_6),
          VAR_4.u64 & ~1ull);

  FUNC_7(FUNC_2(VAR_7, VAR_6),
          VAR_8.u64);
  if (VAR_3->flags & VAR_2)
   FUNC_7(FUNC_1
           (VAR_7, VAR_6), 0);
  else
   FUNC_7(FUNC_1
           (VAR_7, VAR_6), 1);

  FUNC_7(FUNC_0(VAR_7, VAR_6),
          VAR_4.u64);
 }
}
