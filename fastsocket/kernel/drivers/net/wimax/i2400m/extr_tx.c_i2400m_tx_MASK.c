
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2400m_msg_hdr {scalar_t__ num_pls; size_t size; TYPE_1__* pld; } ;
struct i2400m {void* tx_buf; int (* bus_tx_kick ) (struct i2400m*) ;int tx_lock; struct i2400m_msg_hdr* tx_msg; int bus_tx_block_size; } ;
struct device {int dummy; } ;
typedef enum i2400m_pt { ____Placeholder_i2400m_pt } i2400m_pt ;
struct TYPE_2__ {int val; } ;


 size_t FUNC_0 (size_t,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 int FUNC_1 (int,struct device*,char*,struct i2400m*,void const*,size_t,int,int) ;
 int FUNC_2 (int,struct device*,char*,struct i2400m*,void const*,size_t,int) ;
 int FUNC_3 (int,struct device*,char*,...) ;
 struct device* FUNC_4 (struct i2400m*) ;
 int FUNC_5 (TYPE_1__*,size_t,int) ;
 int FUNC_6 (struct i2400m*) ;
 void* FUNC_7 (struct i2400m*,size_t,int ) ;
 int FUNC_8 (struct i2400m*) ;
 int FUNC_9 (struct i2400m*) ;
 int FUNC_10 (struct i2400m*) ;
 void* FUNC_11 (unsigned int) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (void*,void const*,size_t) ;
 int FUNC_14 (void*,int,size_t) ;
 int FUNC_15 (int *,unsigned long) ;
 int FUNC_16 (int *,unsigned long) ;
 int FUNC_17 (struct i2400m*) ;
 scalar_t__ FUNC_18 (int) ;

int FUNC_19(struct i2400m *VAR_6, const void *VAR_7, size_t VAR_8,
       enum i2400m_pt VAR_9)
{
 int VAR_10 = -VAR_0;
 struct device *VAR_11 = FUNC_4(VAR_6);
 unsigned long VAR_12;
 size_t VAR_13;
 void *VAR_14;
 unsigned VAR_15 = VAR_9 == VAR_3
  || VAR_9 == VAR_2;

 FUNC_2(3, VAR_11, "(i2400m %p skb %p [%zu bytes] pt %u)\n",
    VAR_6, VAR_7, VAR_8, VAR_9);
 VAR_13 = FUNC_0(VAR_8, VAR_1);
 FUNC_3(5, VAR_11, "padded_len %zd buf_len %zd\n", VAR_13, VAR_8);



 FUNC_15(&VAR_6->tx_lock, VAR_12);
try_new:
 if (FUNC_18(VAR_6->tx_msg == ((void*)0)))
  FUNC_9(VAR_6);
 else if (FUNC_18(!FUNC_8(VAR_6)
     || (VAR_15 && VAR_6->tx_msg->num_pls != 0))) {
  FUNC_3(2, VAR_11, "closing TX message (fits %u singleton "
    "%u num_pls %u)\n", FUNC_8(VAR_6),
    VAR_15, VAR_6->tx_msg->num_pls);
  FUNC_6(VAR_6);
  FUNC_9(VAR_6);
 }
 if (VAR_6->tx_msg == ((void*)0))
  goto error_tx_new;
 if (VAR_6->tx_msg->size + VAR_13 > VAR_4 / 2) {
  FUNC_3(2, VAR_11, "TX: message too big, going new\n");
  FUNC_6(VAR_6);
  FUNC_9(VAR_6);
 }
 if (VAR_6->tx_msg == ((void*)0))
  goto error_tx_new;


 VAR_14 = FUNC_7(VAR_6, VAR_13,
      VAR_6->bus_tx_block_size);
 if (VAR_14 == VAR_5) {
  FUNC_3(2, VAR_11, "pl append: tail full\n");
  FUNC_6(VAR_6);
  FUNC_10(VAR_6);
  goto try_new;
 } else if (VAR_14 == ((void*)0)) {
  VAR_10 = -VAR_0;
  FUNC_3(2, VAR_11, "pl append: all full\n");
 } else {
  struct i2400m_msg_hdr *VAR_16 = VAR_6->tx_msg;
  unsigned VAR_17 = FUNC_11(VAR_16->num_pls);
  FUNC_13(VAR_14, VAR_7, VAR_8);
  FUNC_14(VAR_14 + VAR_8, 0xad, VAR_13 - VAR_8);
  FUNC_5(&VAR_16->pld[VAR_17], VAR_8, VAR_9);
  FUNC_3(3, VAR_11, "pld 0x%08x (type 0x%1x len 0x%04zx\n",
    FUNC_12(VAR_16->pld[VAR_17].val),
    VAR_9, VAR_8);
  VAR_16->num_pls = FUNC_11(VAR_17+1);
  VAR_16->size += VAR_13;
  FUNC_3(2, VAR_11, "TX: appended %zu b (up to %u b) pl #%u \n",
   VAR_13, VAR_16->size, VAR_17+1);
  FUNC_3(2, VAR_11,
    "TX: appended hdr @%zu %zu b pl #%u @%zu %zu/%zu b\n",
    (void *)VAR_16 - VAR_6->tx_buf, (size_t)VAR_16->size,
    VAR_17+1, VAR_14 - VAR_6->tx_buf, VAR_8, VAR_13);
  VAR_10 = 0;
  if (VAR_15)
   FUNC_6(VAR_6);
 }
error_tx_new:
 FUNC_16(&VAR_6->tx_lock, VAR_12);
 VAR_6->bus_tx_kick(VAR_6);
 FUNC_1(3, VAR_11, "(i2400m %p skb %p [%zu bytes] pt %u) = %d\n",
  VAR_6, VAR_7, VAR_8, VAR_9, VAR_10);
 return VAR_10;
}
