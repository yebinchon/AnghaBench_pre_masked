
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* client_data; void* cb_func; void* snd_method; void* codec_type; void* def_method; void* rx_sample_rate; void* tx_sample_rate; void* set_to_one; } ;
struct audmgr_enable_msg {int hdr; TYPE_1__ args; } ;
struct audmgr_config {int tx_rate; int rx_rate; int def_method; int codec; int snd_method; } ;
struct audmgr {scalar_t__ state; int wait; int ept; } ;
typedef int msg ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ,int ,int ) ;
 int FUNC_4 (int ,struct audmgr_enable_msg*,int) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (int ,int,int) ;

int FUNC_7(struct audmgr *VAR_7, struct audmgr_config *VAR_8)
{
 struct audmgr_enable_msg VAR_9;
 int VAR_10;

 if (VAR_7->state == VAR_5)
  return 0;

 if (VAR_7->state == VAR_4)
  FUNC_5("audmgr: state is DISABLING in enable?\n");
 VAR_7->state = VAR_6;

 VAR_9.args.set_to_one = FUNC_1(1);
 VAR_9.args.tx_sample_rate = FUNC_1(VAR_8->tx_rate);
 VAR_9.args.rx_sample_rate = FUNC_1(VAR_8->rx_rate);
 VAR_9.args.def_method = FUNC_1(VAR_8->def_method);
 VAR_9.args.codec_type = FUNC_1(VAR_8->codec);
 VAR_9.args.snd_method = FUNC_1(VAR_8->snd_method);
 VAR_9.args.cb_func = FUNC_1(0x11111111);
 VAR_9.args.client_data = FUNC_1(0x11223344);

 FUNC_3(&VAR_9.hdr, VAR_1, FUNC_2(VAR_7->ept),
     VAR_0);

 VAR_10 = FUNC_4(VAR_7->ept, &VAR_9, sizeof(VAR_9));
 if (VAR_10 < 0)
  return VAR_10;

 VAR_10 = FUNC_6(VAR_7->wait, VAR_7->state != VAR_6, 15 * VAR_3);
 if (VAR_10 == 0) {
  FUNC_5("audmgr_enable: ARM9 did not reply to RPC am->state = %d\n", VAR_7->state);
  FUNC_0();
 }
 if (VAR_7->state == VAR_5)
  return 0;

 FUNC_5("audmgr: unexpected state %d while enabling?!\n", VAR_7->state);
 return -VAR_2;
}
