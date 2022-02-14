
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct nand_chip {int IO_ADDR_W; } ;
struct mtd_info {struct nand_chip* priv; } ;
struct TYPE_4__ {unsigned int data; } ;
typedef TYPE_1__ reg_gio_rw_pa_dout ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 TYPE_1__ FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,TYPE_1__) ;
 int VAR_10 ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_4 (int,int ) ;

__attribute__((used)) static void FUNC_5(struct mtd_info *VAR_13, int VAR_14,
         unsigned int VAR_15)
{
 unsigned long VAR_16;
 reg_gio_rw_pa_dout VAR_17;
 struct nand_chip *VAR_18 = VAR_13->priv;

 FUNC_3(VAR_16);


 if (VAR_15 & VAR_7) {
  VAR_17 = FUNC_0(VAR_10, VAR_11, VAR_12);
  VAR_17.data &= ~VAR_9;
  if (!(VAR_15 & VAR_8))
   VAR_17.data |= (1 << VAR_1);
  if (VAR_15 & VAR_5)
   VAR_17.data |= (1 << VAR_2);
  if (VAR_15 & VAR_4)
   VAR_17.data |= (1 << VAR_0);

  FUNC_1(VAR_10, VAR_11, VAR_12, VAR_17);
 }


 if (VAR_14 != VAR_6)
  FUNC_4(VAR_14, VAR_18->IO_ADDR_W);

 FUNC_2(VAR_16);
}
