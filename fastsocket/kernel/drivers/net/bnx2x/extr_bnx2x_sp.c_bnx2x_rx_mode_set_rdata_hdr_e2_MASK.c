
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct eth_classify_header {int rule_cnt; int echo; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline void FUNC_1(u32 VAR_0,
    struct eth_classify_header *VAR_1,
    u8 VAR_2)
{
 VAR_1->echo = FUNC_0(VAR_0);
 VAR_1->rule_cnt = VAR_2;
}
