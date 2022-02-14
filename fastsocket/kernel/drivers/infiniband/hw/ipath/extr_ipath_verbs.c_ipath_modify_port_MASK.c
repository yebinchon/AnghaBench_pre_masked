
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ipath_ibdev {scalar_t__ qkey_violations; int dd; int port_cap_flags; } ;
struct ib_port_modify {int clr_port_cap_mask; int set_port_cap_mask; } ;
struct ib_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 struct ipath_ibdev* FUNC_1 (struct ib_device*) ;

__attribute__((used)) static int FUNC_2(struct ib_device *VAR_3,
        u8 VAR_4, int VAR_5,
        struct ib_port_modify *VAR_6)
{
 struct ipath_ibdev *VAR_7 = FUNC_1(VAR_3);

 VAR_7->port_cap_flags |= VAR_6->set_port_cap_mask;
 VAR_7->port_cap_flags &= ~VAR_6->clr_port_cap_mask;
 if (VAR_5 & VAR_1)
  FUNC_0(VAR_7->dd, VAR_2);
 if (VAR_5 & VAR_0)
  VAR_7->qkey_violations = 0;
 return 0;
}
