
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ib_sa_mcmember_data {scalar_t__ qkey; scalar_t__ mlid; scalar_t__ tclass; scalar_t__ pkey; int scope_join_state; int sl_flowlabel_hoplimit; int lifetmsel_lifetm; int ratesel_rate; int mtusel_mtu; } ;
typedef int ib_sa_comp_mask ;


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
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int,int ,int ,int ,int ) ;

__attribute__((used)) static u16 FUNC_2(struct ib_sa_mcmember_data *VAR_15,
     struct ib_sa_mcmember_data *VAR_16, ib_sa_comp_mask VAR_17)
{





 if (VAR_17 & VAR_8 && VAR_15->qkey != VAR_16->qkey)
  return 0x0200;
 if (VAR_17 & VAR_2 && VAR_15->mlid != VAR_16->mlid)
  return 0x0200;
 if (FUNC_1(VAR_17, VAR_4,
     VAR_3,
     VAR_15->mtusel_mtu, VAR_16->mtusel_mtu))
  return 0x0200;
 if (VAR_17 & VAR_13 &&
     VAR_15->tclass != VAR_16->tclass)
  return 0x0200;
 if (VAR_17 & VAR_7 && VAR_15->pkey != VAR_16->pkey)
  return 0x0200;
 if (FUNC_1(VAR_17, VAR_10,
     VAR_9,
     VAR_15->ratesel_rate, VAR_16->ratesel_rate))
  return 0x0200;
 if (FUNC_1(VAR_17,
     VAR_6,
     VAR_5,
     VAR_15->lifetmsel_lifetm, VAR_16->lifetmsel_lifetm))
  return 0x0200;
 if (VAR_17 & VAR_12 &&
   (FUNC_0(VAR_15->sl_flowlabel_hoplimit) & 0xf0000000) !=
   (FUNC_0(VAR_16->sl_flowlabel_hoplimit) & 0xf0000000))
  return 0x0200;
 if (VAR_17 & VAR_0 &&
   (FUNC_0(VAR_15->sl_flowlabel_hoplimit) & 0x0fffff00) !=
   (FUNC_0(VAR_16->sl_flowlabel_hoplimit) & 0x0fffff00))
  return 0x0200;
 if (VAR_17 & VAR_1 &&
   (FUNC_0(VAR_15->sl_flowlabel_hoplimit) & 0x000000ff) !=
   (FUNC_0(VAR_16->sl_flowlabel_hoplimit) & 0x000000ff))
  return 0x0200;
 if (VAR_17 & VAR_11 &&
   (VAR_15->scope_join_state & 0xf0) !=
   (VAR_16->scope_join_state & 0xf0))
  return 0x0200;



 return 0;
}
