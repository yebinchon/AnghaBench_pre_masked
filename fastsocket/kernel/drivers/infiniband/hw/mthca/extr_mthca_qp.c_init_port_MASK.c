
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mthca_init_ib_param {int pkey_cap; int gid_cap; int mtu_cap; int vl_cap; int port_width; } ;
struct TYPE_2__ {int pkey_table_len; int gid_table_len; int mtu_cap; int vl_cap; int port_width_cap; } ;
struct mthca_dev {TYPE_1__ limits; } ;


 int FUNC_0 (struct mthca_init_ib_param*,int ,int) ;
 int FUNC_1 (struct mthca_dev*,struct mthca_init_ib_param*,int) ;
 int FUNC_2 (struct mthca_dev*,char*,int) ;

__attribute__((used)) static void FUNC_3(struct mthca_dev *VAR_0, int VAR_1)
{
 int VAR_2;
 struct mthca_init_ib_param VAR_3;

 FUNC_0(&VAR_3, 0, sizeof VAR_3);

 VAR_3.port_width = VAR_0->limits.port_width_cap;
 VAR_3.vl_cap = VAR_0->limits.vl_cap;
 VAR_3.mtu_cap = VAR_0->limits.mtu_cap;
 VAR_3.gid_cap = VAR_0->limits.gid_table_len;
 VAR_3.pkey_cap = VAR_0->limits.pkey_table_len;

 VAR_2 = FUNC_1(VAR_0, &VAR_3, VAR_1);
 if (VAR_2)
  FUNC_2(VAR_0, "INIT_IB failed, return code %d.\n", VAR_2);
}
