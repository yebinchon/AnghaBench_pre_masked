
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct jsm_channel {unsigned char ch_mostat; unsigned char ch_mistat; TYPE_1__* ch_bd; } ;
struct TYPE_2__ {int pci_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned char VAR_8 ;
 unsigned char VAR_9 ;
 unsigned char VAR_10 ;
 unsigned char VAR_11 ;
 unsigned char VAR_12 ;
 unsigned char VAR_13 ;
 int FUNC_0 (int ,int ,int *,char*) ;

__attribute__((used)) static inline int FUNC_1(struct jsm_channel *VAR_14)
{
 unsigned char VAR_15;
 unsigned VAR_16;

 FUNC_0(VAR_1, VAR_0, &VAR_14->ch_bd->pci_dev, "start\n");

 VAR_15 = (VAR_14->ch_mostat | VAR_14->ch_mistat);

 VAR_16 = 0;

 if (VAR_15 & VAR_8)
  VAR_16 |= VAR_5;
 if (VAR_15 & VAR_9)
  VAR_16 |= VAR_7;
 if (VAR_15 & VAR_10)
  VAR_16 |= VAR_3;
 if (VAR_15 & VAR_12)
  VAR_16 |= VAR_4;
 if (VAR_15 & VAR_13)
  VAR_16 |= VAR_6;
 if (VAR_15 & VAR_11)
  VAR_16 |= VAR_2;

 FUNC_0(VAR_1, VAR_0, &VAR_14->ch_bd->pci_dev, "finish\n");
 return VAR_16;
}
