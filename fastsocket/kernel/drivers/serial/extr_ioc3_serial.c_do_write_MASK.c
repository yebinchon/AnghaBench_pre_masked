
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ring_entry {int * ring_sc; int * ring_data; scalar_t__ ring_allsc; } ;
struct ring {int dummy; } ;
struct port_hooks {int intr_tx_mt; } ;
struct ioc3_port {int ip_tx_prod; int ip_flags; int ip_tx_lowat; int ip_sscr; TYPE_1__* ip_serial_regs; int ip_port; struct ring* ip_outring; struct port_hooks* ip_hooks; } ;
typedef scalar_t__ caddr_t ;
struct TYPE_2__ {int stpir; int sscr; int stcir; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct ioc3_port*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int *) ;

__attribute__((used)) static inline int FUNC_5(struct ioc3_port *VAR_5, char *VAR_6, int VAR_7)
{
 int VAR_8, VAR_9, VAR_10 = 0;
 struct ring *VAR_11;
 struct ring_entry *VAR_12;
 struct port_hooks *VAR_13 = VAR_5->ip_hooks;

 FUNC_0(!(VAR_7 >= 0));

 VAR_8 = VAR_5->ip_tx_prod;
 VAR_9 = FUNC_2(&VAR_5->ip_serial_regs->stcir) & VAR_1;
 VAR_11 = VAR_5->ip_outring;





 VAR_9 = (VAR_9 - (int)sizeof(struct ring_entry)) & VAR_1;


 while ((VAR_8 != VAR_9) && (VAR_7 > 0)) {
  int VAR_14;


  VAR_12 = (struct ring_entry *)((caddr_t) VAR_11 + VAR_8);


  VAR_12->ring_allsc = 0;


  for (VAR_14 = 0; (VAR_14 < 4) && (VAR_7 > 0); VAR_14++) {
   VAR_12->ring_data[VAR_14] = *VAR_6++;
   VAR_12->ring_sc[VAR_14] = VAR_4;
   VAR_7--;
   VAR_10++;
  }







  if (!(VAR_5->ip_flags & VAR_0) &&
      ((VAR_9 - VAR_8) & VAR_1)
      <= VAR_5->ip_tx_lowat * (int)sizeof(struct ring_entry)) {
   VAR_5->ip_flags |= VAR_0;
   VAR_12->ring_sc[0] |= VAR_3;
  }


  VAR_8 += sizeof(struct ring_entry);
  VAR_8 &= VAR_1;
 }


 if (VAR_10 > 0 && !(VAR_5->ip_sscr & VAR_2)) {
  VAR_5->ip_sscr |= VAR_2;
  FUNC_4(VAR_5->ip_sscr, &VAR_5->ip_serial_regs->sscr);
 }




 if (!FUNC_3(VAR_5->ip_port)) {
  FUNC_4(VAR_8, &VAR_5->ip_serial_regs->stpir);




  if (VAR_10 > 0)
   FUNC_1(VAR_5, VAR_13->intr_tx_mt);
 }
 VAR_5->ip_tx_prod = VAR_8;

 return VAR_10;
}
