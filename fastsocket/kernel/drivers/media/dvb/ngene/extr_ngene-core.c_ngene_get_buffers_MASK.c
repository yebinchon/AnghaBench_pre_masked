
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ngene {int iomem; int pci_dev; void* vin_buf; int vin_rbuf; TYPE_1__* card_info; void* ain_buf; int ain_rbuf; void* tsout_buf; int tsout_rbuf; } ;
struct TYPE_2__ {int* io_type; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ngene*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *,void*,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 void* FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct ngene *VAR_7)
{
 if (FUNC_0(VAR_7))
  return -VAR_1;
 if (VAR_7->card_info->io_type[4] & VAR_4) {
  VAR_7->tsout_buf = FUNC_5(VAR_5);
  if (!VAR_7->tsout_buf)
   return -VAR_1;
  FUNC_1(&VAR_7->tsout_rbuf,
        VAR_7->tsout_buf, VAR_5);
 }
 if (VAR_7->card_info->io_type[2] & VAR_2) {
  VAR_7->ain_buf = FUNC_5(VAR_0);
  if (!VAR_7->ain_buf)
   return -VAR_1;
  FUNC_1(&VAR_7->ain_rbuf, VAR_7->ain_buf, VAR_0);
 }
 if (VAR_7->card_info->io_type[0] & VAR_3) {
  VAR_7->vin_buf = FUNC_5(VAR_6);
  if (!VAR_7->vin_buf)
   return -VAR_1;
  FUNC_1(&VAR_7->vin_rbuf, VAR_7->vin_buf, VAR_6);
 }
 VAR_7->iomem = FUNC_2(FUNC_4(VAR_7->pci_dev, 0),
        FUNC_3(VAR_7->pci_dev, 0));
 if (!VAR_7->iomem)
  return -VAR_1;

 return 0;
}
