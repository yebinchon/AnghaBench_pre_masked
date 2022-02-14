
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct bzfifo {size_t f1; size_t f2; TYPE_2__* za; } ;
struct TYPE_4__ {struct bzfifo rxbz_b1; struct bzfifo rxbz_b2; } ;
union fifo_area {TYPE_1__ b_chans; } ;
typedef int u_char ;
struct TYPE_6__ {int fifo_en; scalar_t__* last_bfifo_cnt; scalar_t__ fifos; } ;
struct hfc_pci {TYPE_3__ hw; } ;
struct TYPE_5__ {void* z1; void* z2; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (struct hfc_pci*,int ,int) ;
 void* FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (void*) ;

__attribute__((used)) static void
FUNC_3(struct hfc_pci *VAR_6, int VAR_7)
{
 u_char VAR_8;
 struct bzfifo *VAR_9;

 if (VAR_7) {
  VAR_9 = &((union fifo_area *)(VAR_6->hw.fifos))->b_chans.rxbz_b2;
  VAR_8 = VAR_6->hw.fifo_en & VAR_3;
 } else {
  VAR_9 = &((union fifo_area *)(VAR_6->hw.fifos))->b_chans.rxbz_b1;
  VAR_8 = VAR_6->hw.fifo_en & VAR_2;
 }
 if (VAR_8)
  VAR_6->hw.fifo_en ^= VAR_8;
 FUNC_0(VAR_6, VAR_4, VAR_6->hw.fifo_en);
 VAR_6->hw.last_bfifo_cnt[VAR_7] = 0;
 VAR_9->f1 = VAR_5;
 VAR_9->f2 = VAR_9->f1;
 VAR_9->za[VAR_5].z1 = FUNC_1(VAR_0 + VAR_1 - 1);
 VAR_9->za[VAR_5].z2 = FUNC_1(
     FUNC_2(VAR_9->za[VAR_5].z1));
 if (VAR_8)
  VAR_6->hw.fifo_en |= VAR_8;
 FUNC_0(VAR_6, VAR_4, VAR_6->hw.fifo_en);
}
