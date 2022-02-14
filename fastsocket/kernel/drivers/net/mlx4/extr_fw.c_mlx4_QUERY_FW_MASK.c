
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct mlx4_fw {int catas_offset; int catas_size; int catas_bar; int fw_pages; int clr_int_base; int clr_int_bar; int comm_base; int comm_bar; int clock_offset; int clock_bar; } ;
struct TYPE_3__ {int fw_ver; int function; } ;
struct mlx4_dev {TYPE_1__ caps; int flags; } ;
struct mlx4_cmd_mailbox {int dma; int * buf; } ;
struct mlx4_cmd {int max_cmds; } ;
struct TYPE_4__ {struct mlx4_cmd cmd; struct mlx4_fw fw; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct mlx4_cmd_mailbox*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int,int *,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (struct mlx4_cmd_mailbox*) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 struct mlx4_cmd_mailbox* FUNC_4 (struct mlx4_dev*) ;
 int FUNC_5 (struct mlx4_dev*,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_6 (struct mlx4_dev*,char*,unsigned long long,...) ;
 int FUNC_7 (struct mlx4_dev*,char*,scalar_t__,...) ;
 int FUNC_8 (struct mlx4_dev*,struct mlx4_cmd_mailbox*) ;
 scalar_t__ FUNC_9 (struct mlx4_dev*) ;
 TYPE_2__* FUNC_10 (struct mlx4_dev*) ;

int FUNC_11(struct mlx4_dev *VAR_26)
{
 struct mlx4_fw *VAR_27 = &FUNC_10(VAR_26)->fw;
 struct mlx4_cmd *VAR_28 = &FUNC_10(VAR_26)->cmd;
 struct mlx4_cmd_mailbox *VAR_29;
 u32 *VAR_30;
 int VAR_31 = 0;
 u64 VAR_32;
 u16 VAR_33;
 u8 VAR_34;
 VAR_29 = FUNC_4(VAR_26);
 if (FUNC_1(VAR_29))
  return FUNC_3(VAR_29);
 VAR_30 = VAR_29->buf;

 VAR_31 = FUNC_5(VAR_26, 0, VAR_29->dma, 0, 0, VAR_2,
       VAR_3, VAR_1);
 if (VAR_31)
  goto out;

 FUNC_2(VAR_32, VAR_30, 0x00);




 VAR_26->caps.fw_ver = (VAR_32 & 0xffff00000000ull) |
  ((VAR_32 & 0xffff0000ull) >> 16) |
  ((VAR_32 & 0x0000ffffull) << 16);

 FUNC_2(VAR_34, VAR_30, 0x09);
 VAR_26->caps.function = VAR_34;

 if (FUNC_9(VAR_26))
  goto out;


 FUNC_2(VAR_33, VAR_30, 0x0a);
 if (VAR_33 < VAR_5 ||
     VAR_33 > VAR_4) {
  FUNC_7(VAR_26, "Installed FW has unsupported "
    "command interface revision %d.\n",
    VAR_33);
  FUNC_7(VAR_26, "(Installed FW version is %d.%d.%03d)\n",
    (int) (VAR_26->caps.fw_ver >> 32),
    (int) (VAR_26->caps.fw_ver >> 16) & 0xffff,
    (int) VAR_26->caps.fw_ver & 0xffff);
  FUNC_7(VAR_26, "This driver version supports only revisions %d to %d.\n",
    VAR_5, VAR_4);
  VAR_31 = -VAR_0;
  goto out;
 }

 if (VAR_33 < VAR_6)
  VAR_26->flags |= VAR_7;

 FUNC_2(VAR_34, VAR_30, 0x0f);
 VAR_28->max_cmds = 1 << VAR_34;

 FUNC_6(VAR_26, "FW version %d.%d.%03d (cmd intf rev %d), max commands %d\n",
   (int) (VAR_26->caps.fw_ver >> 32),
   (int) (VAR_26->caps.fw_ver >> 16) & 0xffff,
   (int) VAR_26->caps.fw_ver & 0xffff,
   VAR_33, VAR_28->max_cmds);

 FUNC_2(VAR_27->catas_offset, VAR_30, 0x30);
 FUNC_2(VAR_27->catas_size, VAR_30, 0x38);
 FUNC_2(VAR_27->catas_bar, VAR_30, 0x3c);
 VAR_27->catas_bar = (VAR_27->catas_bar >> 6) * 2;

 FUNC_6(VAR_26, "Catastrophic error buffer at 0x%llx, size 0x%x, BAR %d\n",
   (unsigned long long) VAR_27->catas_offset, VAR_27->catas_size, VAR_27->catas_bar);

 FUNC_2(VAR_27->fw_pages, VAR_30, 0x00);
 FUNC_2(VAR_27->clr_int_base, VAR_30, 0x20);
 FUNC_2(VAR_27->clr_int_bar, VAR_30, 0x28);
 VAR_27->clr_int_bar = (VAR_27->clr_int_bar >> 6) * 2;

 FUNC_2(VAR_27->comm_base, VAR_30, 0x40);
 FUNC_2(VAR_27->comm_bar, VAR_30, 0x48);
 VAR_27->comm_bar = (VAR_27->comm_bar >> 6) * 2;
 FUNC_6(VAR_26, "Communication vector bar:%d offset:0x%llx\n",
   VAR_27->comm_bar, VAR_27->comm_base);
 FUNC_6(VAR_26, "FW size %d KB\n", VAR_27->fw_pages >> 2);

 FUNC_2(VAR_27->clock_offset, VAR_30, 0x50);
 FUNC_2(VAR_27->clock_bar, VAR_30, 0x58);
 VAR_27->clock_bar = (VAR_27->clock_bar >> 6) * 2;
 FUNC_6(VAR_26, "Internal clock bar:%d offset:0x%llx\n",
   VAR_27->clock_bar, VAR_27->clock_offset);





 VAR_27->fw_pages =
  FUNC_0(VAR_27->fw_pages, VAR_11 / VAR_9) >>
  (VAR_10 - VAR_8);

 FUNC_6(VAR_26, "Clear int @ %llx, BAR %d\n",
   (unsigned long long) VAR_27->clr_int_base, VAR_27->clr_int_bar);

out:
 FUNC_8(VAR_26, VAR_29);
 return VAR_31;
}
