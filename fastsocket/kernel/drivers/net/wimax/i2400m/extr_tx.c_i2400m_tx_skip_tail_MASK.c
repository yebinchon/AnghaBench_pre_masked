
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2400m_msg_hdr {size_t size; } ;
struct i2400m {size_t tx_in; struct i2400m_msg_hdr* tx_buf; } ;
struct device {int dummy; } ;


 int FUNC_0 (int) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t FUNC_1 (struct i2400m*) ;
 int FUNC_2 (int,struct device*,char*,size_t,size_t) ;
 struct device* FUNC_3 (struct i2400m*) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static
void FUNC_5(struct i2400m *VAR_2)
{
 struct device *VAR_3 = FUNC_3(VAR_2);
 size_t VAR_4 = VAR_2->tx_in % VAR_0;
 size_t VAR_5 = FUNC_1(VAR_2);
 struct i2400m_msg_hdr *VAR_6 = VAR_2->tx_buf + VAR_4;
 if (FUNC_4(VAR_5 == 0))
  return;
 FUNC_0(VAR_5 < sizeof(*VAR_6));
 VAR_6->size = VAR_5 | VAR_1;
 FUNC_2(2, VAR_3, "skip tail: skipping %zu bytes @%zu\n",
   VAR_5, VAR_4);
 VAR_2->tx_in += VAR_5;
}
