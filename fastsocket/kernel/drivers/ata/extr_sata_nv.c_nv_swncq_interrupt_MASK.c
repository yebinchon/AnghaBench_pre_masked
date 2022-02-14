
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {scalar_t__ sactive; } ;
struct ata_port {TYPE_1__ link; } ;
struct ata_host {unsigned int n_ports; int lock; struct ata_port** ports; scalar_t__* iomap; } ;
typedef int irqreturn_t ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ FUNC_1 (struct ata_port*,int ) ;
 int FUNC_2 (struct ata_port*,int ) ;
 int FUNC_3 (struct ata_port*,int) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_3, void *VAR_4)
{
 struct ata_host *VAR_5 = VAR_4;
 unsigned int VAR_6;
 unsigned int VAR_7 = 0;
 unsigned long VAR_8;
 u32 VAR_9;

 FUNC_5(&VAR_5->lock, VAR_8);

 VAR_9 = FUNC_4(VAR_5->iomap[VAR_2] + VAR_1);

 for (VAR_6 = 0; VAR_6 < VAR_5->n_ports; VAR_6++) {
  struct ata_port *VAR_10 = VAR_5->ports[VAR_6];

  if (VAR_10->link.sactive) {
   FUNC_2(VAR_10, (u16)VAR_9);
   VAR_7 = 1;
  } else {
   if (VAR_9)
    FUNC_3(VAR_10, 0xfff0);

   VAR_7 += FUNC_1(VAR_10, (u8)VAR_9);
  }
  VAR_9 >>= VAR_0;
 }

 FUNC_6(&VAR_5->lock, VAR_8);

 return FUNC_0(VAR_7);
}
