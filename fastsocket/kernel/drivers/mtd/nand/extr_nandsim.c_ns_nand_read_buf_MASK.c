
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_8__ {scalar_t__ count; scalar_t__ num; scalar_t__ row; } ;
struct TYPE_7__ {scalar_t__ pgnum; } ;
struct TYPE_6__ {scalar_t__ byte; } ;
struct TYPE_5__ {scalar_t__ cle; scalar_t__ ale; int ce; } ;
struct nandsim {int state; int options; int nxstate; TYPE_4__ regs; TYPE_3__ geom; TYPE_2__ buf; TYPE_1__ lines; } ;
struct nand_chip {int (* read_byte ) (struct mtd_info*) ;scalar_t__ priv; } ;
struct mtd_info {scalar_t__ priv; } ;


 int VAR_0 ;
 int FUNC_0 (char*,scalar_t__) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct nandsim*) ;
 int FUNC_4 (char*,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_5 (struct nandsim*,int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int *,scalar_t__,int) ;
 int FUNC_8 (struct mtd_info*) ;
 int FUNC_9 (struct nandsim*) ;
 int FUNC_10 (struct nandsim*,int ) ;

__attribute__((used)) static void FUNC_11(struct mtd_info *VAR_5, u_char *VAR_6, int VAR_7)
{
        struct nandsim *VAR_8 = (struct nandsim *)((struct nand_chip *)VAR_5->priv)->priv;


 if (!VAR_8->lines.ce) {
  FUNC_1("read_buf: chip is disabled\n");
  return;
 }
 if (VAR_8->lines.ale || VAR_8->lines.cle) {
  FUNC_1("read_buf: ALE or CLE pin is high\n");
  return;
 }
 if (!(VAR_8->state & VAR_3)) {
  FUNC_4("read_buf: unexpected data output cycle, current state is %s\n",
   FUNC_6(VAR_8->state));
  return;
 }

 if (FUNC_2(VAR_8->state) != VAR_2) {
  int VAR_9;

  for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++)
   VAR_6[VAR_9] = ((struct nand_chip *)VAR_5->priv)->read_byte(VAR_5);

  return;
 }


 if (VAR_8->regs.count + VAR_7 > VAR_8->regs.num) {
  FUNC_1("read_buf: too many bytes to read\n");
  FUNC_10(VAR_8, FUNC_3(VAR_8));
  return;
 }

 FUNC_7(VAR_6, VAR_8->buf.byte + VAR_8->regs.count, VAR_7);
 VAR_8->regs.count += VAR_7;

 if (VAR_8->regs.count == VAR_8->regs.num) {
  if ((VAR_8->options & VAR_1) && FUNC_2(VAR_8->state) == VAR_2) {
   VAR_8->regs.count = 0;
   if (VAR_8->regs.row + 1 < VAR_8->geom.pgnum)
    VAR_8->regs.row += 1;
   FUNC_0("read_buf: switch to the next page (%#x)\n", VAR_8->regs.row);
   FUNC_5(VAR_8, VAR_0);
  }
  else if (FUNC_2(VAR_8->nxstate) == VAR_4)
   FUNC_9(VAR_8);
 }

 return;
}
