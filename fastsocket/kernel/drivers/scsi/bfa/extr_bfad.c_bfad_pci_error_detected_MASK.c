
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dev; } ;
struct TYPE_2__ {int ioc; } ;
struct bfad_s {int bfad_flags; int bfad_lock; int hal_tmo; int comp; int bfa_fcs; TYPE_1__ bfa; } ;
typedef int pci_ers_result_t ;
typedef int pci_channel_state_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct bfad_s*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int *,char*,int,int) ;
 int FUNC_6 (int *) ;



 int FUNC_7 (struct pci_dev*) ;
 struct bfad_s* FUNC_8 (struct pci_dev*) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static pci_ers_result_t
FUNC_12(struct pci_dev *VAR_7, pci_channel_state_t VAR_8)
{
 struct bfad_s *VAR_9 = FUNC_8(VAR_7);
 unsigned long VAR_10;
 pci_ers_result_t VAR_11 = VAR_6;

 FUNC_5(VAR_2, &VAR_7->dev,
     "error detected state: %d - flags: 0x%x\n",
     VAR_8, VAR_9->bfad_flags);

 switch (VAR_8) {
 case 129:
  FUNC_9(&VAR_9->bfad_lock, VAR_10);
  VAR_9->bfad_flags &= ~VAR_0;

  FUNC_2(&VAR_9->bfa.ioc);
  FUNC_10(&VAR_9->bfad_lock, VAR_10);
  FUNC_4(&VAR_9->hal_tmo);
  VAR_11 = VAR_3;
  break;
 case 130:
  FUNC_6(&VAR_9->comp);
  FUNC_9(&VAR_9->bfad_lock, VAR_10);
  VAR_9->bfad_flags |= VAR_0;

  FUNC_2(&VAR_9->bfa.ioc);
  FUNC_1(&VAR_9->bfa_fcs);
  FUNC_10(&VAR_9->bfad_lock, VAR_10);
  FUNC_11(&VAR_9->comp);

  FUNC_3(VAR_9);
  FUNC_4(&VAR_9->hal_tmo);
  FUNC_7(VAR_7);
  VAR_11 = VAR_5;
  break;
 case 128:
  FUNC_9(&VAR_9->bfad_lock, VAR_10);
  VAR_9->bfad_flags |= VAR_0 |
        VAR_1;
  FUNC_10(&VAR_9->bfad_lock, VAR_10);







  VAR_11 = VAR_4;
  break;
 default:
  FUNC_0(1);
 }

 return VAR_11;
}
