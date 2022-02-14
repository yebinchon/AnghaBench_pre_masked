
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {unsigned long iobase; unsigned long mapbase; int regshift; int * membase; int iotype; } ;
struct serial_private {int * remapped_bar; struct pci_dev* dev; } ;
struct pci_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (unsigned long,unsigned long) ;
 int FUNC_1 (struct pci_dev*,int) ;
 unsigned long FUNC_2 (struct pci_dev*,int) ;
 unsigned long FUNC_3 (struct pci_dev*,int) ;

__attribute__((used)) static int
FUNC_4(struct serial_private *VAR_6, struct uart_port *VAR_7,
    int VAR_8, int VAR_9, int VAR_10)
{
 struct pci_dev *VAR_11 = VAR_6->dev;
 unsigned long VAR_12, VAR_13;

 if (VAR_8 >= VAR_3)
  return -VAR_0;

 VAR_12 = FUNC_3(VAR_11, VAR_8);

 if (FUNC_1(VAR_11, VAR_8) & VAR_2) {
  VAR_13 = FUNC_2(VAR_11, VAR_8);

  if (!VAR_6->remapped_bar[VAR_8])
   VAR_6->remapped_bar[VAR_8] = FUNC_0(VAR_12, VAR_13);
  if (!VAR_6->remapped_bar[VAR_8])
   return -VAR_1;

  VAR_7->iotype = VAR_4;
  VAR_7->iobase = 0;
  VAR_7->mapbase = VAR_12 + VAR_9;
  VAR_7->membase = VAR_6->remapped_bar[VAR_8] + VAR_9;
  VAR_7->regshift = VAR_10;
 } else {
  VAR_7->iotype = VAR_5;
  VAR_7->iobase = VAR_12 + VAR_9;
  VAR_7->mapbase = 0;
  VAR_7->membase = ((void*)0);
  VAR_7->regshift = 0;
 }
 return 0;
}
