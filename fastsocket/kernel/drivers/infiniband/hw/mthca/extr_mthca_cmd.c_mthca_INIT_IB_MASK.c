
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mthca_mailbox {int* buf; int dma; } ;
struct mthca_init_ib_param {int vl_cap; int port_width; int mtu_cap; int gid_cap; int pkey_cap; int guid0; int node_guid; int si_guid; scalar_t__ set_si_guid; scalar_t__ set_node_guid; scalar_t__ set_guid0; } ;
struct mthca_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_0 (struct mthca_mailbox*) ;
 int FUNC_1 (int*,int,int ) ;
 int FUNC_2 (struct mthca_mailbox*) ;
 int FUNC_3 (int*,int ,int ) ;
 struct mthca_mailbox* FUNC_4 (struct mthca_dev*,int ) ;
 int FUNC_5 (struct mthca_dev*,int ,int,int ,int ,int ) ;
 int FUNC_6 (struct mthca_dev*,struct mthca_mailbox*) ;

int FUNC_7(struct mthca_dev *VAR_16,
    struct mthca_init_ib_param *VAR_17,
    int VAR_18)
{
 struct mthca_mailbox *VAR_19;
 u32 *VAR_20;
 int VAR_21;
 u32 VAR_22;
 VAR_19 = FUNC_4(VAR_16, VAR_2);
 if (FUNC_0(VAR_19))
  return FUNC_2(VAR_19);
 VAR_20 = VAR_19->buf;

 FUNC_3(VAR_20, 0, 56);

 VAR_22 = 0;
 VAR_22 |= VAR_17->set_guid0 ? (1 << 16) : 0;
 VAR_22 |= VAR_17->set_node_guid ? (1 << 17) : 0;
 VAR_22 |= VAR_17->set_si_guid ? (1 << 18) : 0;
 VAR_22 |= VAR_17->vl_cap << 4;
 VAR_22 |= VAR_17->port_width << 8;
 VAR_22 |= VAR_17->mtu_cap << 12;
 FUNC_1(VAR_20, VAR_22, 0x00);

 FUNC_1(VAR_20, VAR_17->gid_cap, 0x06);
 FUNC_1(VAR_20, VAR_17->pkey_cap, 0x0a);
 FUNC_1(VAR_20, VAR_17->guid0, 0x10);
 FUNC_1(VAR_20, VAR_17->node_guid, 0x18);
 FUNC_1(VAR_20, VAR_17->si_guid, 0x20);

 VAR_21 = FUNC_5(VAR_16, VAR_19->dma, VAR_18, 0, VAR_0,
   VAR_1);

 FUNC_6(VAR_16, VAR_19);
 return VAR_21;
}
