
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2400m {unsigned int tx_out; unsigned int tx_in; int tx_lock; scalar_t__ tx_msg_size; } ;
struct device {int dummy; } ;


 int FUNC_0 (int) ;
 unsigned int VAR_0 ;
 int FUNC_1 (int,struct device*,char*,struct i2400m*) ;
 int FUNC_2 (int,struct device*,char*,struct i2400m*) ;
 int FUNC_3 (int,struct device*,char*,size_t) ;
 struct device* FUNC_4 (struct i2400m*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

void FUNC_7(struct i2400m *VAR_1)
{
 unsigned VAR_2;
 unsigned long VAR_3;
 struct device *VAR_4 = FUNC_4(VAR_1);

 FUNC_2(3, VAR_4, "(i2400m %p)\n", VAR_1);
 FUNC_5(&VAR_1->tx_lock, VAR_3);
 VAR_1->tx_out += VAR_1->tx_msg_size;
 FUNC_3(2, VAR_4, "TX: sent %zu b\n", (size_t) VAR_1->tx_msg_size);
 VAR_1->tx_msg_size = 0;
 FUNC_0(VAR_1->tx_out > VAR_1->tx_in);

 VAR_2 = VAR_1->tx_out / VAR_0;
 VAR_1->tx_out %= VAR_0;
 VAR_1->tx_in -= VAR_2 * VAR_0;
 FUNC_6(&VAR_1->tx_lock, VAR_3);
 FUNC_1(3, VAR_4, "(i2400m %p) = void\n", VAR_1);
}
