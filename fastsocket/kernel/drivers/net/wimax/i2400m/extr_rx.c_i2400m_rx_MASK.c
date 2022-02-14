
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {size_t len; scalar_t__ data; } ;
struct i2400m_msg_hdr {int * pld; int num_pls; } ;
struct i2400m {int rx_pl_num; int rx_pl_max; int rx_pl_min; size_t rx_size_acc; size_t rx_size_min; size_t rx_size_max; int rx_lock; int rx_num; } ;
struct device {int dummy; } ;


 size_t FUNC_0 (size_t,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (int,struct device*,char*,struct i2400m*,struct sk_buff*,size_t,int) ;
 int FUNC_3 (int,struct device*,char*,struct i2400m*,struct sk_buff*,size_t) ;
 int FUNC_4 (struct device*,char*,size_t,unsigned int,int,size_t) ;
 struct device* FUNC_5 (struct i2400m*) ;
 size_t FUNC_6 (int *) ;
 int FUNC_7 (struct i2400m*,struct i2400m_msg_hdr const*,size_t) ;
 int FUNC_8 (struct i2400m*,struct sk_buff*,unsigned int,int *,scalar_t__) ;
 int FUNC_9 (struct i2400m*,int *,size_t,size_t) ;
 int FUNC_10 (struct sk_buff*) ;
 unsigned int FUNC_11 (int ) ;
 int FUNC_12 (int *,unsigned long) ;
 int FUNC_13 (int *,unsigned long) ;

int FUNC_14(struct i2400m *VAR_2, struct sk_buff *VAR_3)
{
 int VAR_4, VAR_5;
 struct device *VAR_6 = FUNC_5(VAR_2);
 const struct i2400m_msg_hdr *VAR_7;
 size_t VAR_8, VAR_9, VAR_10;
 unsigned long VAR_11;
 unsigned VAR_12, VAR_13;

 VAR_10 = VAR_3->len;
 FUNC_3(4, VAR_6, "(i2400m %p skb %p [size %zu])\n",
    VAR_2, VAR_3, VAR_10);
 VAR_5 = -VAR_0;
 VAR_7 = (void *) VAR_3->data;
 VAR_5 = FUNC_7(VAR_2, VAR_7, VAR_3->len);
 if (VAR_5 < 0)
  goto error_msg_hdr_check;
 VAR_5 = -VAR_0;
 VAR_12 = FUNC_11(VAR_7->num_pls);
 VAR_8 = sizeof(*VAR_7) +
  VAR_12 * sizeof(VAR_7->pld[0]);
 VAR_8 = FUNC_0(VAR_8, VAR_1);
 if (VAR_8 > VAR_3->len) {
  FUNC_4(VAR_6, "RX: HW BUG? message too short (%u bytes) for "
   "%u payload descriptors (%zu each, total %zu)\n",
   VAR_3->len, VAR_12, sizeof(VAR_7->pld[0]), VAR_8);
  goto error_pl_descr_short;
 }

 for (VAR_4 = 0; VAR_4 < VAR_12; VAR_4++) {

  VAR_9 = FUNC_6(&VAR_7->pld[VAR_4]);
  VAR_5 = FUNC_9(VAR_2, &VAR_7->pld[VAR_4],
        VAR_8, VAR_3->len);
  if (VAR_5 < 0)
   goto error_pl_descr_check;
  VAR_13 = VAR_12 == 1 || VAR_4 == VAR_12 - 1;
  FUNC_8(VAR_2, VAR_3, VAR_13, &VAR_7->pld[VAR_4],
      VAR_3->data + VAR_8);
  VAR_8 += FUNC_0(VAR_9, VAR_1);
  FUNC_1();
 }
 FUNC_10(VAR_3);

 FUNC_12(&VAR_2->rx_lock, VAR_11);
 VAR_2->rx_pl_num += VAR_4;
 if (VAR_4 > VAR_2->rx_pl_max)
  VAR_2->rx_pl_max = VAR_4;
 if (VAR_4 < VAR_2->rx_pl_min)
  VAR_2->rx_pl_min = VAR_4;
 VAR_2->rx_num++;
 VAR_2->rx_size_acc += VAR_3->len;
 if (VAR_3->len < VAR_2->rx_size_min)
  VAR_2->rx_size_min = VAR_3->len;
 if (VAR_3->len > VAR_2->rx_size_max)
  VAR_2->rx_size_max = VAR_3->len;
 FUNC_13(&VAR_2->rx_lock, VAR_11);
error_pl_descr_check:
error_pl_descr_short:
error_msg_hdr_check:
 FUNC_2(4, VAR_6, "(i2400m %p skb %p [size %zu]) = %d\n",
  VAR_2, VAR_3, VAR_10, VAR_5);
 return VAR_5;
}
