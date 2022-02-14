
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ti_lynx {int id; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,char*,int) ;
 int FUNC_1 (struct ti_lynx*,int) ;
 int FUNC_2 (struct ti_lynx*,int) ;

__attribute__((used)) static u32 FUNC_3(struct ti_lynx *VAR_1)
{
        u32 VAR_2 = 0;
        FUNC_2(VAR_1, 1);
        VAR_2 |= (FUNC_1(VAR_1, 13) << 16);
        VAR_2 |= (FUNC_1(VAR_1, 14) << 8);
        VAR_2 |= FUNC_1(VAR_1, 15);
        FUNC_0(VAR_0, VAR_1->id, "PHY product id 0x%06x", VAR_2);
        return VAR_2;
}
