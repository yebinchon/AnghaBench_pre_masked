
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2400m_roq {int dummy; } ;
struct i2400m {scalar_t__ rx_roq; } ;



__attribute__((used)) static
unsigned FUNC_0(struct i2400m *VAR_0, struct i2400m_roq *VAR_1)
{
 return ((unsigned long) VAR_1 - (unsigned long) VAR_0->rx_roq)
  / sizeof(*VAR_1);
}
