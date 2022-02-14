
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dib0070_state {int* wbd_offset_3_3; } ;


 int FUNC_0 (struct dib0070_state*,int) ;
 int FUNC_1 (char*,int,int) ;

__attribute__((used)) static void FUNC_2(struct dib0070_state *VAR_0)
{
    u8 VAR_1;
    for (VAR_1 = 6; VAR_1 < 8; VAR_1++) {
 VAR_0->wbd_offset_3_3[VAR_1 - 6] = ((FUNC_0(VAR_0, VAR_1) * 8 * 18 / 33 + 1) / 2);
 FUNC_1("Gain: %d, WBDOffset (3.3V) = %hd", VAR_1, VAR_0->wbd_offset_3_3[VAR_1-6]);
    }
}
