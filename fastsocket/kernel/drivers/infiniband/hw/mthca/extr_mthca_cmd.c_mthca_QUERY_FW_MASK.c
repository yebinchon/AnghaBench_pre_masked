
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct mthca_mailbox {int* buf; int dma; } ;
struct TYPE_9__ {int fw_start; int fw_end; } ;
struct TYPE_8__ {int fw_pages; int clr_int_base; int eq_arm_base; int eq_set_ci_base; } ;
struct TYPE_10__ {TYPE_4__ tavor; TYPE_3__ arbel; } ;
struct TYPE_7__ {int max_cmds; int* dbell_offsets; } ;
struct TYPE_6__ {int addr; int size; } ;
struct mthca_dev {int fw_ver; TYPE_5__ fw; TYPE_2__ cmd; TYPE_1__ catas_err; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct mthca_mailbox*) ;
 int VAR_3 ;
 int FUNC_2 (int,int*,scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (struct mthca_mailbox*) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 struct mthca_mailbox* FUNC_4 (struct mthca_dev*,int ) ;
 int FUNC_5 (struct mthca_dev*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_6 (struct mthca_dev*,char*,...) ;
 int FUNC_7 (struct mthca_dev*,struct mthca_mailbox*) ;
 scalar_t__ FUNC_8 (struct mthca_dev*) ;
 int FUNC_9 (struct mthca_dev*,int) ;

int FUNC_10(struct mthca_dev *VAR_21)
{
 struct mthca_mailbox *VAR_22;
 u32 *VAR_23;
 u64 VAR_24;
 u32 VAR_25;
 int VAR_26 = 0;
 u8 VAR_27;
 int VAR_28;
 VAR_22 = FUNC_4(VAR_21, VAR_2);
 if (FUNC_1(VAR_22))
  return FUNC_3(VAR_22);
 VAR_23 = VAR_22->buf;

 VAR_26 = FUNC_5(VAR_21, 0, VAR_22->dma, 0, 0, VAR_0,
       VAR_1);

 if (VAR_26)
  goto out;

 FUNC_2(VAR_21->fw_ver, VAR_23, 0x00);




 VAR_21->fw_ver = (VAR_21->fw_ver & 0xffff00000000ull) |
  ((VAR_21->fw_ver & 0xffff0000ull) >> 16) |
  ((VAR_21->fw_ver & 0x0000ffffull) << 16);

 FUNC_2(VAR_27, VAR_23, 0x0f);
 VAR_21->cmd.max_cmds = 1 << VAR_27;

 FUNC_6(VAR_21, "FW version %012llx, max commands %d\n",
    (unsigned long long) VAR_21->fw_ver, VAR_21->cmd.max_cmds);

 FUNC_2(VAR_21->catas_err.addr, VAR_23, 0x30);
 FUNC_2(VAR_21->catas_err.size, VAR_23, 0x38);

 FUNC_6(VAR_21, "Catastrophic error buffer at 0x%llx, size 0x%x\n",
    (unsigned long long) VAR_21->catas_err.addr, VAR_21->catas_err.size);

 FUNC_2(VAR_25, VAR_23, 0x10);
 if (VAR_25 & 0x1) {
  FUNC_6(VAR_21, "FW supports commands through doorbells\n");

  FUNC_2(VAR_24, VAR_23, 0x60);
  for (VAR_28 = 0; VAR_28 < VAR_3; ++VAR_28)
   FUNC_2(VAR_21->cmd.dbell_offsets[VAR_28], VAR_23,
      0x50 + (VAR_28 << 1));

  FUNC_9(VAR_21, VAR_24);
 }

 if (FUNC_8(VAR_21)) {
  FUNC_2(VAR_21->fw.arbel.fw_pages, VAR_23, 0x00);
  FUNC_2(VAR_21->fw.arbel.clr_int_base, VAR_23, 0x20);
  FUNC_2(VAR_21->fw.arbel.eq_arm_base, VAR_23, 0x40);
  FUNC_2(VAR_21->fw.arbel.eq_set_ci_base, VAR_23, 0x48);
  FUNC_6(VAR_21, "FW size %d KB\n", VAR_21->fw.arbel.fw_pages << 2);





  VAR_21->fw.arbel.fw_pages =
   FUNC_0(VAR_21->fw.arbel.fw_pages, VAR_7 / VAR_5) >>
    (VAR_6 - VAR_4);

  FUNC_6(VAR_21, "Clear int @ %llx, EQ arm @ %llx, EQ set CI @ %llx\n",
     (unsigned long long) VAR_21->fw.arbel.clr_int_base,
     (unsigned long long) VAR_21->fw.arbel.eq_arm_base,
     (unsigned long long) VAR_21->fw.arbel.eq_set_ci_base);
 } else {
  FUNC_2(VAR_21->fw.tavor.fw_start, VAR_23, 0x20);
  FUNC_2(VAR_21->fw.tavor.fw_end, VAR_23, 0x28);

  FUNC_6(VAR_21, "FW size %d KB (start %llx, end %llx)\n",
     (int) ((VAR_21->fw.tavor.fw_end - VAR_21->fw.tavor.fw_start) >> 10),
     (unsigned long long) VAR_21->fw.tavor.fw_start,
     (unsigned long long) VAR_21->fw.tavor.fw_end);
 }

out:
 FUNC_7(VAR_21, VAR_22);
 return VAR_26;
}
