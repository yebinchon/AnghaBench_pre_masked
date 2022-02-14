
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2400m_msg_hdr {int num_pls; } ;
struct i2400m {struct i2400m_msg_hdr* tx_msg; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static
unsigned FUNC_1(struct i2400m *VAR_1)
{
 struct i2400m_msg_hdr *VAR_2 = VAR_1->tx_msg;
 return FUNC_0(VAR_2->num_pls) < VAR_0;

}
