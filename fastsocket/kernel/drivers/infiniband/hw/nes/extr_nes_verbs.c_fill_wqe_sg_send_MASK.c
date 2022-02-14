
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct nes_hw_qp_wqe {int wqe_words; } ;
struct ib_send_wr {int num_sge; TYPE_1__* sg_list; } ;
struct TYPE_2__ {int length; int lkey; int addr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,scalar_t__,int) ;
 int FUNC_2 (int ,scalar_t__,int ) ;

__attribute__((used)) static inline void
FUNC_3(struct nes_hw_qp_wqe *VAR_5, struct ib_send_wr *VAR_6, u32 VAR_7)
{
 int VAR_8;
 int VAR_9 = 0;
 for (VAR_8 = 0; VAR_8 < VAR_6->num_sge; VAR_8++) {
  FUNC_2(VAR_5->wqe_words, VAR_1+(VAR_8*4),
   VAR_6->sg_list[VAR_8].addr);
  FUNC_1(VAR_5->wqe_words, VAR_2 + (VAR_8*4),
   VAR_6->sg_list[VAR_8].length);
  if (VAR_7)
   FUNC_1(VAR_5->wqe_words, VAR_3 + (VAR_8*4),
      (VAR_6->sg_list[VAR_8].lkey));
  else
   FUNC_1(VAR_5->wqe_words, VAR_3 + (VAR_8*4), 0);

  VAR_9 += VAR_6->sg_list[VAR_8].length;
 }
 FUNC_0(VAR_0, "UC UC UC, sending total_payload_length=%u \n",
   VAR_9);
 FUNC_1(VAR_5->wqe_words, VAR_4,
    VAR_9);
}
