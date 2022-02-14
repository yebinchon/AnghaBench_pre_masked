
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct atyfb_par {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct atyfb_par const*) ;

__attribute__((used)) static inline void FUNC_1(u16 VAR_1, const struct atyfb_par *VAR_2)
{
 while ((FUNC_0(VAR_0, VAR_2) & 0xffff) >
        ((u32) (0x8000 >> VAR_1)));
}
