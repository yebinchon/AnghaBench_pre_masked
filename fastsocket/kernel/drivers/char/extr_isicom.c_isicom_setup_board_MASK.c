
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isi_port {int dummy; } ;
struct isi_board {int status; int port_count; int card_lock; struct isi_port* ports; } ;


 int VAR_0 ;
 int FUNC_0 (struct isi_port*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static inline void FUNC_3(struct isi_board *VAR_1)
{
 int VAR_2;
 struct isi_port *VAR_3;
 unsigned long VAR_4;

 FUNC_1(&VAR_1->card_lock, VAR_4);
 if (VAR_1->status & VAR_0) {
  FUNC_2(&VAR_1->card_lock, VAR_4);
  return;
 }
 VAR_3 = VAR_1->ports;
 VAR_1->status |= VAR_0;
 for (VAR_2 = 0; VAR_2 < VAR_1->port_count; VAR_2++, VAR_3++)
  FUNC_0(VAR_3);
 FUNC_2(&VAR_1->card_lock, VAR_4);
}
