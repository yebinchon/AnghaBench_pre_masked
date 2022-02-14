
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct config_param {int rx_ring_num; scalar_t__ intr_type; scalar_t__ napi; } ;
struct mac_info {struct ring_info* rings; } ;
struct s2io_nic {int lro_max_aggr_per_sess; struct config_param config; int state; int alarm_timer; scalar_t__ lro; scalar_t__ all_multi_pos; scalar_t__ m_cast_flg; scalar_t__ promisc_flg; int napi; struct mac_info mac_control; scalar_t__ dev; } ;
struct ring_info {int mtu; int napi; int rx_bufs_left; scalar_t__ lro; } ;
struct net_device {int mtu; int name; } ;


 int FUNC_0 (int ,char*,int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int ,int ,struct s2io_nic*,int) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (struct s2io_nic*,int,int ) ;
 int FUNC_3 (struct s2io_nic*,int ,int ) ;
 int FUNC_4 (struct s2io_nic*,struct ring_info*,int) ;
 int FUNC_5 (struct s2io_nic*) ;
 int FUNC_6 (struct s2io_nic*) ;
 int VAR_14 ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (struct s2io_nic*) ;
 int VAR_15 ;
 int FUNC_9 (struct s2io_nic*) ;
 int FUNC_10 (struct s2io_nic*) ;
 int FUNC_11 (struct net_device*) ;
 int FUNC_12 (int ,int *) ;
 scalar_t__ FUNC_13 (struct s2io_nic*) ;

__attribute__((used)) static int FUNC_14(struct s2io_nic *VAR_16)
{
 int VAR_17, VAR_18 = 0;
 struct config_param *VAR_19;
 struct mac_info *VAR_20;
 struct net_device *VAR_21 = (struct net_device *)VAR_16->dev;
 u16 VAR_22;


 VAR_18 = FUNC_6(VAR_16);
 if (VAR_18 != 0) {
  FUNC_0(VAR_5, "%s: H/W initialization failed\n",
     VAR_21->name);
  if (VAR_18 != -VAR_0)
   FUNC_10(VAR_16);
  return VAR_18;
 }





 VAR_19 = &VAR_16->config;
 VAR_20 = &VAR_16->mac_control;

 for (VAR_17 = 0; VAR_17 < VAR_19->rx_ring_num; VAR_17++) {
  struct ring_info *VAR_23 = &VAR_20->rings[VAR_17];

  VAR_23->mtu = VAR_21->mtu;
  VAR_23->lro = VAR_16->lro;
  VAR_18 = FUNC_4(VAR_16, VAR_23, 1);
  if (VAR_18) {
   FUNC_0(VAR_5, "%s: Out of memory in Open\n",
      VAR_21->name);
   FUNC_10(VAR_16);
   FUNC_5(VAR_16);
   return -VAR_4;
  }
  FUNC_0(VAR_7, "Buf in ring:%d is %d:\n", VAR_17,
     VAR_23->rx_bufs_left);
 }


 if (VAR_19->napi) {
  if (VAR_19->intr_type == VAR_9) {
   for (VAR_17 = 0; VAR_17 < VAR_16->config.rx_ring_num; VAR_17++)
    FUNC_7(&VAR_16->mac_control.rings[VAR_17].napi);
  } else {
   FUNC_7(&VAR_16->napi);
  }
 }


 if (VAR_16->promisc_flg)
  VAR_16->promisc_flg = 0;
 if (VAR_16->m_cast_flg) {
  VAR_16->m_cast_flg = 0;
  VAR_16->all_multi_pos = 0;
 }


 FUNC_11(VAR_21);

 if (VAR_16->lro) {

  VAR_16->lro_max_aggr_per_sess = ((1<<16) - 1) / VAR_21->mtu;

  if (VAR_14 < VAR_16->lro_max_aggr_per_sess)
   VAR_16->lro_max_aggr_per_sess = VAR_14;
 }


 if (FUNC_13(VAR_16)) {
  FUNC_0(VAR_5, "%s: Starting NIC failed\n", VAR_21->name);
  FUNC_10(VAR_16);
  FUNC_5(VAR_16);
  return -VAR_3;
 }


 if (FUNC_8(VAR_16) != 0) {
  if (VAR_16->config.intr_type == VAR_9)
   FUNC_9(VAR_16);
  FUNC_10(VAR_16);
  FUNC_5(VAR_16);
  return -VAR_3;
 }

 FUNC_1(VAR_16->alarm_timer, VAR_15, VAR_16, (VAR_6/2));

 FUNC_12(VAR_13, &VAR_16->state);


 FUNC_3(VAR_16, VAR_2, VAR_1);
 if (VAR_16->config.intr_type != VAR_8) {
  VAR_22 = VAR_12 | VAR_11;
  FUNC_2(VAR_16, VAR_22, VAR_1);
 } else {
  VAR_22 = VAR_12 | VAR_10;
  VAR_22 |= VAR_11;
  FUNC_2(VAR_16, VAR_22, VAR_1);
 }

 return 0;
}
