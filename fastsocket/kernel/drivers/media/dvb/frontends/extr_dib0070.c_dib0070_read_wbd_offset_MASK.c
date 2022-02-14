
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct dib0070_state {int dummy; } ;


 int FUNC_0 (struct dib0070_state*,int) ;
 int FUNC_1 (struct dib0070_state*,int,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static u16 FUNC_3(struct dib0070_state *VAR_0, u8 VAR_1)
{
    u16 VAR_2 = FUNC_0(VAR_0, 0x20);
    u16 VAR_3;

    FUNC_1(VAR_0, 0x18, 0x07ff);
    FUNC_1(VAR_0, 0x20, 0x0800 | 0x4000 | 0x0040 | 0x0020 | 0x0010 | 0x0008 | 0x0002 | 0x0001);
    FUNC_1(VAR_0, 0x0f, (1 << 14) | (2 << 12) | (VAR_1 << 9) | (1 << 8) | (1 << 7) | (0 << 0));
    FUNC_2(9);
    VAR_3 = FUNC_0(VAR_0, 0x19);
    FUNC_1(VAR_0, 0x20, VAR_2);
    return VAR_3;
}
