
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct isi_port {int channel; int status; struct isi_board* card; } ;
struct isi_board {unsigned long base; int shift_count; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned long) ;
 scalar_t__ FUNC_1 (unsigned long) ;
 int FUNC_2 (int,unsigned long) ;

__attribute__((used)) static inline void FUNC_3(struct isi_port *VAR_1)
{
 struct isi_board *VAR_2 = VAR_1->card;
 unsigned long VAR_3 = VAR_2->base;
 u16 VAR_4 = VAR_1->channel;

 if (FUNC_1(VAR_3))
  return;

 FUNC_2(0x8000 | (VAR_4 << VAR_2->shift_count) | 0x02, VAR_3);
 FUNC_2(0x0404, VAR_3);
 FUNC_0(VAR_3);
 VAR_1->status &= ~VAR_0;
}
