
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2400m_msg_hdr {int size; } ;
struct i2400m {int tx_buf; struct i2400m_msg_hdr* tx_msg; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 struct i2400m_msg_hdr* VAR_1 ;
 int FUNC_1 (int,struct device*,char*,...) ;
 struct device* FUNC_2 (struct i2400m*) ;
 struct i2400m_msg_hdr* FUNC_3 (struct i2400m*,int ,int ) ;
 int FUNC_4 (struct i2400m*) ;
 int FUNC_5 (struct i2400m_msg_hdr*,int ,int ) ;

__attribute__((used)) static
void FUNC_6(struct i2400m *VAR_2)
{
 struct device *VAR_3 = FUNC_2(VAR_2);
 struct i2400m_msg_hdr *VAR_4;
 FUNC_0(VAR_2->tx_msg != ((void*)0));
try_head:
 VAR_4 = FUNC_3(VAR_2, VAR_0, 0);
 if (VAR_4 == ((void*)0))
  goto out;
 else if (VAR_4 == VAR_1) {
  FUNC_4(VAR_2);
  FUNC_1(2, VAR_3, "new TX message: tail full, trying head\n");
  goto try_head;
 }
 FUNC_5(VAR_4, 0, VAR_0);
 VAR_4->size = VAR_0;
out:
 VAR_2->tx_msg = VAR_4;
 FUNC_1(2, VAR_3, "new TX message: %p @%zu\n",
   VAR_4, (void *) VAR_4 - VAR_2->tx_buf);
}
