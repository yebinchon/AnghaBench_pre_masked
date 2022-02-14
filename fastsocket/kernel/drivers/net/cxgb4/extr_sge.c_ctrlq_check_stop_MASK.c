
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int stops; } ;
struct sge_ctrl_txq {int full; TYPE_1__ q; } ;
struct fw_wr_hdr {int lo; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct sge_ctrl_txq *VAR_3, struct fw_wr_hdr *VAR_4)
{
 FUNC_1(&VAR_3->q);
 if (FUNC_3(FUNC_2(&VAR_3->q) < VAR_2)) {
  VAR_4->lo |= FUNC_0(VAR_0 | VAR_1);
  VAR_3->q.stops++;
  VAR_3->full = 1;
 }
}
