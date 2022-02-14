
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct dib8000_state {int timf; int timf_default; } ;


 int FUNC_0 (struct dib8000_state*,int) ;
 int FUNC_1 (struct dib8000_state*,int,int ) ;
 int FUNC_2 (char*,int,int ) ;

__attribute__((used)) static void FUNC_3(struct dib8000_state *VAR_0)
{
 u32 VAR_1 = VAR_0->timf = FUNC_0(VAR_0, 435);

 FUNC_1(VAR_0, 29, (u16) (VAR_1 >> 16));
 FUNC_1(VAR_0, 30, (u16) (VAR_1 & 0xffff));
 FUNC_2("Updated timing frequency: %d (default: %d)", VAR_0->timf, VAR_0->timf_default);
}
