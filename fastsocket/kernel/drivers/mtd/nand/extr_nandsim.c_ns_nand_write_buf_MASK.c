
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_4__ {scalar_t__ count; scalar_t__ num; } ;
struct TYPE_3__ {scalar_t__ byte; } ;
struct nandsim {int state; TYPE_2__ regs; TYPE_1__ buf; } ;
struct nand_chip {scalar_t__ priv; } ;
struct mtd_info {scalar_t__ priv; } ;


 int FUNC_0 (char*,scalar_t__) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (struct nandsim*) ;
 int VAR_0 ;
 int FUNC_3 (int) ;
 int FUNC_4 (scalar_t__,int const*,int) ;
 int FUNC_5 (struct nandsim*,int ) ;

__attribute__((used)) static void FUNC_6(struct mtd_info *VAR_1, const u_char *VAR_2, int VAR_3)
{
        struct nandsim *VAR_4 = (struct nandsim *)((struct nand_chip *)VAR_1->priv)->priv;


 if (!(VAR_4->state & VAR_0)) {
  FUNC_1("write_buf: data input isn't expected, state is %s, "
   "switch to STATE_READY\n", FUNC_3(VAR_4->state));
  FUNC_5(VAR_4, FUNC_2(VAR_4));
  return;
 }


 if (VAR_4->regs.count + VAR_3 > VAR_4->regs.num) {
  FUNC_1("write_buf: too many input bytes\n");
  FUNC_5(VAR_4, FUNC_2(VAR_4));
  return;
 }

 FUNC_4(VAR_4->buf.byte + VAR_4->regs.count, VAR_2, VAR_3);
 VAR_4->regs.count += VAR_3;

 if (VAR_4->regs.count == VAR_4->regs.num) {
  FUNC_0("write_buf: %d bytes were written\n", VAR_4->regs.count);
 }
}
