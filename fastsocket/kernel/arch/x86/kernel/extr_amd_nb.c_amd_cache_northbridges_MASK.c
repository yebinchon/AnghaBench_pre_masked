
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct pci_dev {int dummy; } ;
struct amd_northbridge {int dummy; } ;
struct TYPE_6__ {int num; int flags; struct amd_northbridge* nb; } ;
struct TYPE_5__ {int x86; int x86_model; int x86_mask; } ;
struct TYPE_4__ {struct pci_dev* link; struct pci_dev* misc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 () ;
 TYPE_3__ VAR_7 ;
 TYPE_2__ VAR_8 ;
 struct amd_northbridge* FUNC_1 (int,int ) ;
 struct pci_dev* FUNC_2 (struct pci_dev*,int ) ;
 TYPE_1__* FUNC_3 (int) ;

int FUNC_4(void)
{
 u16 VAR_9 = 0;
 struct amd_northbridge *VAR_10;
 struct pci_dev *VAR_11, *VAR_12;

 if (FUNC_0())
  return 0;

 VAR_11 = ((void*)0);
 while ((VAR_11 = FUNC_2(VAR_11, VAR_6)) != ((void*)0))
  VAR_9++;

 if (VAR_9 == 0)
  return 0;

 VAR_10 = FUNC_1(VAR_9 * sizeof(struct amd_northbridge), VAR_4);
 if (!VAR_10)
  return -VAR_3;

 VAR_7.nb = VAR_10;
 VAR_7.num = VAR_9;

 VAR_12 = VAR_11 = ((void*)0);
 for (VAR_9 = 0; VAR_9 != FUNC_0(); VAR_9++) {
  FUNC_3(VAR_9)->misc = VAR_11 =
   FUNC_2(VAR_11, VAR_6);
  FUNC_3(VAR_9)->link = VAR_12 =
   FUNC_2(VAR_12, VAR_5);
 }

 if (VAR_8.x86 == 0xf || VAR_8.x86 == 0x10 ||
     VAR_8.x86 == 0x15)
  VAR_7.flags |= VAR_0;





 if (VAR_8.x86 == 0x10 &&
     VAR_8.x86_model >= 0x8 &&
     (VAR_8.x86_model > 0x9 ||
      VAR_8.x86_mask >= 0x1))
  VAR_7.flags |= VAR_1;

 if (VAR_8.x86 == 0x15)
  VAR_7.flags |= VAR_1;


 if (VAR_8.x86 == 0x15)
  VAR_7.flags |= VAR_2;

 return 0;
}
