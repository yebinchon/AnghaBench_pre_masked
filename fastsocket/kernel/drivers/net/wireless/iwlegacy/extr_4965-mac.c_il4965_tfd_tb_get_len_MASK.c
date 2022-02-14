
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u16 ;
struct il_tfd_tb {int hi_n_len; } ;
struct il_tfd {struct il_tfd_tb* tbs; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline u16
FUNC_1(struct il_tfd *VAR_0, u8 VAR_1)
{
 struct il_tfd_tb *VAR_2 = &VAR_0->tbs[VAR_1];

 return FUNC_0(VAR_2->hi_n_len) >> 4;
}
