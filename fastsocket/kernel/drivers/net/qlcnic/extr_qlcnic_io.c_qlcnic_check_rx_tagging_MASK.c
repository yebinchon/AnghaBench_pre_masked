
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sk_buff {scalar_t__ data; } ;
struct qlcnic_adapter {int rx_pvid; int flags; } ;
struct ethhdr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct sk_buff*,int*) ;
 int FUNC_1 (scalar_t__,struct ethhdr*,int) ;
 int FUNC_2 (struct sk_buff*,scalar_t__) ;

__attribute__((used)) static inline int FUNC_3(struct qlcnic_adapter *VAR_4,
       struct sk_buff *VAR_5, u16 *VAR_6)
{
 struct ethhdr *VAR_7;

 if (!FUNC_0(VAR_5, VAR_6)) {
  VAR_7 = (struct ethhdr *)VAR_5->data;
  FUNC_1(VAR_5->data + VAR_3, VAR_7, VAR_1 * 2);
  FUNC_2(VAR_5, VAR_3);
 }
 if (!VAR_4->rx_pvid)
  return 0;

 if (*VAR_6 == VAR_4->rx_pvid) {

  *VAR_6 = 0xffff;
  return 0;
 }
 if (VAR_4->flags & VAR_2)
  return 0;

 return -VAR_0;
}
