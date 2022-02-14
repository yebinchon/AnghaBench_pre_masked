
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int reg_1394a; } ;
struct ti_lynx {int phy_reg0; int selfid_size; TYPE_1__ phyic; int id; int * rcv_page; } ;
struct selfid {int phy_id; int extended; } ;
struct hpsb_host {scalar_t__ in_bus_reset; } ;
typedef int quadlet_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int ,char*,int,...) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ti_lynx*,struct hpsb_host*) ;
 int FUNC_3 (struct hpsb_host*,int,int) ;
 int FUNC_4 (struct hpsb_host*,int ) ;
 int FUNC_5 (struct ti_lynx*,int ,int) ;
 int FUNC_6 (struct ti_lynx*,int ,int) ;

__attribute__((used)) static void FUNC_7(struct ti_lynx *VAR_9, struct hpsb_host *VAR_10)
{
        quadlet_t *VAR_11 = VAR_9->rcv_page;
        int VAR_12, VAR_13, VAR_14;
        quadlet_t VAR_15 = 0;
        int VAR_16;

        if (VAR_9->phy_reg0 == -1 || VAR_9->selfid_size == -1) return;

        VAR_14 = VAR_9->selfid_size;
        VAR_12 = VAR_9->phy_reg0;

        VAR_16 = (VAR_14 > 16 ? 16 : VAR_14) / 4 - 1;
        while (VAR_16 >= 0) {
                FUNC_1(&VAR_11[VAR_16]);
                VAR_16--;
        }

        if (!VAR_9->phyic.reg_1394a) {
                VAR_15 = FUNC_2(VAR_9, VAR_10);
        }

        VAR_13 = (VAR_12 & 2) != 0;
        VAR_12 >>= 2;
        FUNC_0(VAR_1, VAR_9->id, "SelfID process finished (phyid %d, %s)",
              VAR_12, (VAR_13 ? "root" : "not root"));
        FUNC_6(VAR_9, VAR_8, (0xffc0 | VAR_12) << 16);

        if (!VAR_9->phyic.reg_1394a && !VAR_14) {
                FUNC_4(VAR_10, VAR_15);
        }

        while (VAR_14 > 0) {
                struct selfid *VAR_17 = (struct selfid *)VAR_11;

                if (!VAR_9->phyic.reg_1394a && !VAR_17->extended
                    && (VAR_17->phy_id == (VAR_12 + 1))) {
                        FUNC_4(VAR_10, VAR_15);
                }

                if (VAR_11[0] == ~VAR_11[1]) {
                        FUNC_0(VAR_0, VAR_9->id, "SelfID packet 0x%x rcvd",
                              VAR_11[0]);
                        FUNC_4(VAR_10, VAR_11[0]);
                } else {
                        FUNC_0(VAR_1, VAR_9->id,
                              "inconsistent selfid 0x%x/0x%x", VAR_11[0], VAR_11[1]);
                }
                VAR_11 += 2;
                VAR_14 -= 8;
        }

        if (!VAR_9->phyic.reg_1394a && VAR_13 && VAR_12 != 0) {
                FUNC_4(VAR_10, VAR_15);
        }

        FUNC_3(VAR_10, VAR_12, VAR_13);

        if (VAR_10->in_bus_reset) return;

        if (VAR_13) FUNC_5(VAR_9, VAR_2, VAR_3);
        FUNC_5(VAR_9, VAR_2,
                     VAR_5 | VAR_7
                     | VAR_6 | VAR_4);
}
