
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct cx23885_tsport {int gen_ctrl_val; int ts_clk_en_val; int vld_misc_val; int hw_sop_ctrl_val; void* src_sel_val; } ;
struct cx23885_dev {int board; TYPE_2__* sd_cx25840; TYPE_1__* i2c_bus; int v4l2_dev; struct cx23885_tsport ts2; struct cx23885_tsport ts1; } ;
typedef int eeprom ;
struct TYPE_7__ {int addr; } ;
struct TYPE_6__ {int grp_id; } ;
struct TYPE_5__ {scalar_t__ i2c_rc; int i2c_adap; TYPE_4__ i2c_client; } ;
 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct cx23885_dev*,int*) ;
 int VAR_4 ;
 int FUNC_1 (struct cx23885_dev*) ;
 int FUNC_2 (TYPE_4__*,int*,int) ;
 TYPE_2__* FUNC_3 (int *,int *,char*,int,int *) ;
 int FUNC_4 (TYPE_2__*,int ,int ) ;

void FUNC_5(struct cx23885_dev *VAR_5)
{
 struct cx23885_tsport *VAR_6 = &VAR_5->ts1;
 struct cx23885_tsport *VAR_7 = &VAR_5->ts2;

 static u8 VAR_8[256];

 if (VAR_5->i2c_bus[0].i2c_rc == 0) {
  VAR_5->i2c_bus[0].i2c_client.addr = 0xa0 >> 1;
  FUNC_2(&VAR_5->i2c_bus[0].i2c_client,
         VAR_8, sizeof(VAR_8));
 }

 switch (VAR_5->board) {
 case 147:
  if (VAR_5->i2c_bus[0].i2c_rc == 0) {
   if (VAR_8[0x80] != 0x84)
    FUNC_0(VAR_5, VAR_8+0xc0);
   else
    FUNC_0(VAR_5, VAR_8+0x80);
  }
  break;
 case 141:
 case 140:
 case 142:
  if (VAR_5->i2c_bus[0].i2c_rc == 0)
   FUNC_0(VAR_5, VAR_8+0x80);
  break;
 case 138:
 case 137:
 case 149:
 case 139:
 case 145:
 case 144:
 case 146:
 case 148:
 case 136:
 case 143:
  if (VAR_5->i2c_bus[0].i2c_rc == 0)
   FUNC_0(VAR_5, VAR_8+0xc0);
  break;
 }

 switch (VAR_5->board) {
 case 152:
 case 151:
  VAR_7->gen_ctrl_val = 0xc;
  VAR_7->ts_clk_en_val = 0x1;
  VAR_7->src_sel_val = VAR_1;

 case 153:
  VAR_6->gen_ctrl_val = 0xc;
  VAR_6->ts_clk_en_val = 0x1;
  VAR_6->src_sel_val = VAR_1;
  break;
 case 138:


  VAR_6->gen_ctrl_val = 0x10e;
  VAR_6->ts_clk_en_val = 0x1;
  VAR_6->src_sel_val = VAR_1;


  VAR_6->vld_misc_val = 0x2000;
  VAR_6->hw_sop_ctrl_val = (0x47 << 16 | 188 << 4 | 0xc);


  VAR_7->gen_ctrl_val = 0xc;
  VAR_7->ts_clk_en_val = 0x1;
  VAR_7->src_sel_val = VAR_1;
  break;
 case 129:
  VAR_6->gen_ctrl_val = 0x4;
  VAR_6->ts_clk_en_val = 0x1;
  VAR_6->src_sel_val = VAR_1;
  break;
 case 128:
 case 154:
  VAR_6->gen_ctrl_val = 0x5;
  VAR_6->ts_clk_en_val = 0x1;
  VAR_6->src_sel_val = VAR_1;
  break;
 case 130:
  VAR_6->gen_ctrl_val = 0xc;
  VAR_6->ts_clk_en_val = 0x1;
  VAR_6->src_sel_val = VAR_1;
  VAR_7->gen_ctrl_val = 0xc;
  VAR_7->ts_clk_en_val = 0x1;
  VAR_7->src_sel_val = VAR_1;
  break;
 case 132:
 case 133:
  VAR_6->gen_ctrl_val = 0x5;
  VAR_6->ts_clk_en_val = 0x1;
  VAR_6->src_sel_val = VAR_1;
  break;
 case 131:
  VAR_6->gen_ctrl_val = 0x5;
  VAR_6->ts_clk_en_val = 0x1;
  VAR_6->src_sel_val = VAR_1;
  VAR_7->gen_ctrl_val = 0xc;
  VAR_7->ts_clk_en_val = 0x1;
  VAR_7->src_sel_val = VAR_1;
  break;
 case 147:
 case 141:
 case 140:
 case 137:
 case 149:
 case 139:
 case 142:
 case 135:
 case 156:
 case 145:
 case 144:
 case 146:
 case 148:
 case 136:
 case 155:
 case 143:
 case 150:
 default:
  VAR_7->gen_ctrl_val = 0xc;
  VAR_7->ts_clk_en_val = 0x1;
  VAR_7->src_sel_val = VAR_1;
 }




 switch (VAR_5->board) {
 case 128:
 case 147:

  if (!VAR_3)
   break;
 case 138:
 case 137:
 case 139:
 case 135:
 case 156:
 case 130:
 case 155:
 case 136:
 case 132:
 case 133:
 case 143:
 case 134:
 case 150:
  VAR_5->sd_cx25840 = FUNC_3(&VAR_5->v4l2_dev,
    &VAR_5->i2c_bus[2].i2c_adap,
    "cx25840", 0x88 >> 1, ((void*)0));
  if (VAR_5->sd_cx25840) {
   VAR_5->sd_cx25840->grp_id = VAR_0;
   FUNC_4(VAR_5->sd_cx25840, VAR_2, VAR_4);
  }
  break;
 }


 switch (VAR_5->board) {
 case 130:
  FUNC_1(VAR_5);
  break;
 }
}
