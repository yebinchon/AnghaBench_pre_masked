
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skge_ring {struct skge_element* start; struct skge_element* to_clean; } ;
struct skge_port {scalar_t__ rx_buf_size; struct skge_ring rx_ring; } ;
struct skge_element {struct skge_element* next; } ;
struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct sk_buff* FUNC_0 (struct net_device*,scalar_t__,int ) ;
 struct skge_port* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct sk_buff*,scalar_t__) ;
 int FUNC_3 (struct skge_port*,struct skge_element*,struct sk_buff*,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_3)
{
 struct skge_port *VAR_4 = FUNC_1(VAR_3);
 struct skge_ring *VAR_5 = &VAR_4->rx_ring;
 struct skge_element *VAR_6;

 VAR_6 = VAR_5->start;
 do {
  struct sk_buff *VAR_7;

  VAR_7 = FUNC_0(VAR_3, VAR_4->rx_buf_size + VAR_2,
      VAR_1);
  if (!VAR_7)
   return -VAR_0;

  FUNC_2(VAR_7, VAR_2);
  FUNC_3(VAR_4, VAR_6, VAR_7, VAR_4->rx_buf_size);
 } while ( (VAR_6 = VAR_6->next) != VAR_5->start);

 VAR_5->to_clean = VAR_5->start;
 return 0;
}
