
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_lynx {char phy_reg0; int id; } ;
struct hpsb_host {int dummy; } ;
typedef char quadlet_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,char*,char) ;
 int FUNC_1 (char*) ;
 char FUNC_2 (struct ti_lynx*,int) ;
 int VAR_1 ;

__attribute__((used)) static quadlet_t FUNC_3(struct ti_lynx *VAR_2,
                                     struct hpsb_host *VAR_3)
{
        quadlet_t VAR_4;
        char VAR_5[7];
        int VAR_6;

        VAR_5[0] = VAR_2->phy_reg0;
        for (VAR_6 = 1; VAR_6 < 7; VAR_6++) {
                VAR_5[VAR_6] = FUNC_2(VAR_2, VAR_6);
        }




        VAR_4 = 0x80400000 | ((VAR_5[0] & 0xfc) << 22);
        VAR_4 |= (VAR_5[1] & 0x3f) << 16;
        VAR_4 |= (VAR_5[2] & 0xc0) << 8;
 if (!VAR_1)
  VAR_4 |= (VAR_5[6] & 0x01) << 11;

        VAR_4 |= (VAR_5[6] & 0x10) >> 3;

        for (VAR_6 = 0; VAR_6 < (VAR_5[2] & 0xf); VAR_6++) {
                if (VAR_5[3 + VAR_6] & 0x4) {
                        VAR_4 |= (((VAR_5[3 + VAR_6] & 0x8) | 0x10) >> 3)
                                << (6 - VAR_6*2);
                } else {
                        VAR_4 |= 1 << (6 - VAR_6*2);
                }
        }

        FUNC_1(&VAR_4);
        FUNC_0(VAR_0, VAR_2->id, "generated own selfid 0x%x", VAR_4);
        return VAR_4;
}
