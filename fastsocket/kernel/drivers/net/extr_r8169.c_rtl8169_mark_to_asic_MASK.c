
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct RxDesc {int opts1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline void FUNC_2(struct RxDesc *VAR_2, u32 VAR_3)
{
 u32 VAR_4 = FUNC_1(VAR_2->opts1) & VAR_1;

 VAR_2->opts1 = FUNC_0(VAR_0 | VAR_4 | VAR_3);
}
