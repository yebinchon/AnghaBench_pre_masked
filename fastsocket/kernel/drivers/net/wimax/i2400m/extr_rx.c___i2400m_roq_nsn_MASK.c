
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2400m_roq {scalar_t__ ws; } ;



__attribute__((used)) static
unsigned FUNC_0(struct i2400m_roq *VAR_0, unsigned VAR_1)
{
 int VAR_2;
 VAR_2 = ((int) VAR_1 - (int) VAR_0->ws) % 2048;
 if (VAR_2 < 0)
  VAR_2 += 2048;
 return VAR_2;
}
