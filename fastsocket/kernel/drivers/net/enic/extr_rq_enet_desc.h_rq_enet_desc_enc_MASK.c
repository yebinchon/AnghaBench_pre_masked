
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u16 ;
struct rq_enet_desc {int length_type; int address; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline void FUNC_2(struct rq_enet_desc *VAR_3,
 u64 VAR_4, u8 VAR_5, u16 VAR_6)
{
 VAR_3->address = FUNC_1(VAR_4);
 VAR_3->length_type = FUNC_0((VAR_6 & VAR_1) |
  ((VAR_5 & VAR_2) << VAR_0));
}
