
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pci_dev {int class; int dev; } ;
struct hpp_type0 {int revision; scalar_t__ enable_perr; scalar_t__ enable_serr; int latency_timer; int cache_line_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*,int) ;
 struct hpp_type0 VAR_10 ;
 scalar_t__ FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*,int ,int *) ;
 int FUNC_4 (struct pci_dev*,int ,int ) ;
 int FUNC_5 (struct pci_dev*,int ,int ) ;

__attribute__((used)) static void FUNC_6(struct pci_dev *VAR_11, struct hpp_type0 *VAR_12)
{
 u16 VAR_13, VAR_14;

 if (!VAR_12) {




  if (FUNC_2(VAR_11))
   return;
  FUNC_0(&VAR_11->dev, "using default PCI settings\n");
  VAR_12 = &VAR_10;
 }

 if (VAR_12->revision > 1) {
  FUNC_1(&VAR_11->dev,
    "PCI settings rev %d not supported; using defaults\n",
    VAR_12->revision);
  VAR_12 = &VAR_10;
 }

 FUNC_4(VAR_11, VAR_3, VAR_12->cache_line_size);
 FUNC_4(VAR_11, VAR_8, VAR_12->latency_timer);
 FUNC_3(VAR_11, VAR_5, &VAR_13);
 if (VAR_12->enable_serr)
  VAR_13 |= VAR_7;
 else
  VAR_13 &= ~VAR_7;
 if (VAR_12->enable_perr)
  VAR_13 |= VAR_6;
 else
  VAR_13 &= ~VAR_6;
 FUNC_5(VAR_11, VAR_5, VAR_13);


 if ((VAR_11->class >> 8) == VAR_4) {
  FUNC_4(VAR_11, VAR_9,
          VAR_12->latency_timer);
  FUNC_3(VAR_11, VAR_0, &VAR_14);
  if (VAR_12->enable_serr)
   VAR_14 |= VAR_2;
  else
   VAR_14 &= ~VAR_2;
  if (VAR_12->enable_perr)
   VAR_14 |= VAR_1;
  else
   VAR_14 &= ~VAR_1;
  FUNC_5(VAR_11, VAR_0, VAR_14);
 }
}
