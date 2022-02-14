
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct dib0090_state {int const* bb_ramp; } ;


 int FUNC_0 (struct dib0090_state*,int) ;
 int FUNC_1 (struct dib0090_state*,int) ;
 int FUNC_2 (struct dib0090_state*,int,int) ;
 int FUNC_3 (struct dib0090_state*,int,int const*,int) ;
 int FUNC_4 (char*,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct dib0090_state *VAR_0, const u16 * VAR_1)
{
 VAR_0->bb_ramp = VAR_1;

 FUNC_1(VAR_0, VAR_1[0] > 500);

 FUNC_2(VAR_0, 0x33, 0xffff);
 FUNC_4("total BB gain: %ddB, step: %d", (u32) VAR_1[0], FUNC_0(VAR_0, 0x33));
 FUNC_3(VAR_0, 0x35, VAR_1 + 3, 4);
}
