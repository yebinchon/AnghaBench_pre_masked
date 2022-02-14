
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ data; } ;
struct TYPE_2__ {int stops; } ;
struct sge_ofld_txq {int full; TYPE_1__ q; } ;
struct fw_wr_hdr {int lo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(struct sge_ofld_txq *VAR_2, struct sk_buff *VAR_3)
{
 struct fw_wr_hdr *VAR_4 = (struct fw_wr_hdr *)VAR_3->data;

 VAR_4->lo |= FUNC_0(VAR_0 | VAR_1);
 VAR_2->q.stops++;
 VAR_2->full = 1;
}
