
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct qib_pportdata {int dummy; } ;
struct qib_ibport {scalar_t__ qkey_violations; int port_cap_flags; } ;
struct ib_port_modify {int clr_port_cap_mask; int set_port_cap_mask; } ;
struct ib_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct qib_pportdata* FUNC_0 (struct qib_ibport*) ;
 int FUNC_1 (struct qib_ibport*) ;
 int FUNC_2 (struct qib_pportdata*,int ) ;
 struct qib_ibport* FUNC_3 (struct ib_device*,int ) ;

__attribute__((used)) static int FUNC_4(struct ib_device *VAR_3, u8 VAR_4,
      int VAR_5, struct ib_port_modify *VAR_6)
{
 struct qib_ibport *VAR_7 = FUNC_3(VAR_3, VAR_4);
 struct qib_pportdata *VAR_8 = FUNC_0(VAR_7);

 VAR_7->port_cap_flags |= VAR_6->set_port_cap_mask;
 VAR_7->port_cap_flags &= ~VAR_6->clr_port_cap_mask;
 if (VAR_6->set_port_cap_mask || VAR_6->clr_port_cap_mask)
  FUNC_1(VAR_7);
 if (VAR_5 & VAR_1)
  FUNC_2(VAR_8, VAR_2);
 if (VAR_5 & VAR_0)
  VAR_7->qkey_violations = 0;
 return 0;
}
