
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ldc_packet {scalar_t__ seqid; } ;
struct ldc_channel {int rx_tail; scalar_t__ rcv_nxt; } ;


 int FUNC_0 (struct ldc_channel*,int ) ;
 int FUNC_1 (struct ldc_channel*) ;
 int FUNC_2 (struct ldc_channel*,struct ldc_packet*) ;

__attribute__((used)) static int FUNC_3(struct ldc_channel *VAR_0, struct ldc_packet *VAR_1,
        struct ldc_packet *VAR_2)
{
 int VAR_3;

 if (VAR_2)
  VAR_0->rcv_nxt = VAR_2->seqid - 1;

 VAR_3 = FUNC_2(VAR_0, VAR_1);
 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_0(VAR_0, VAR_0->rx_tail);
 if (VAR_3 < 0)
  return FUNC_1(VAR_0);

 return 0;
}
