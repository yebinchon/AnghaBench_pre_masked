
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sl811 {int data_reg; int addr_reg; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static inline u8 FUNC_2(struct sl811 *VAR_0, int VAR_1)
{
 FUNC_1(VAR_1, VAR_0->addr_reg);
 return FUNC_0(VAR_0->data_reg);
}
