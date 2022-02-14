
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mscp {int dummy; } ;
struct Scsi_Host {unsigned int can_queue; scalar_t__ dma_channel; int n_io_port; int io_port; int irq; } ;
struct TYPE_4__ {TYPE_1__* cp; int pdev; } ;
struct TYPE_3__ {int cp_dma_addr; int sglist; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (unsigned int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (int ,int ,int,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (struct Scsi_Host*) ;
 struct Scsi_Host** VAR_4 ;
 int * VAR_5 ;

__attribute__((used)) static int FUNC_8(struct Scsi_Host *VAR_6) {
   unsigned int VAR_7, VAR_8;

   for (VAR_8 = 0; VAR_4[VAR_8] != ((void*)0) && VAR_4[VAR_8] != VAR_6; VAR_8++);

   if (VAR_4[VAR_8] == ((void*)0))
      FUNC_4("%s: release, invalid Scsi_Host pointer.\n", VAR_3);

   for (VAR_7 = 0; VAR_7 < VAR_4[VAR_8]->can_queue; VAR_7++)
      FUNC_3((&FUNC_0(VAR_8)->cp[VAR_7])->sglist);

   for (VAR_7 = 0; VAR_7 < VAR_4[VAR_8]->can_queue; VAR_7++)
      FUNC_5(FUNC_0(VAR_8)->pdev, FUNC_0(VAR_8)->cp[VAR_7].cp_dma_addr,
                     sizeof(struct mscp), VAR_2);

   FUNC_2(VAR_4[VAR_8]->irq, &VAR_5[VAR_8]);

   if (VAR_4[VAR_8]->dma_channel != VAR_1)
      FUNC_1(VAR_4[VAR_8]->dma_channel);

   FUNC_6(VAR_4[VAR_8]->io_port, VAR_4[VAR_8]->n_io_port);
   FUNC_7(VAR_4[VAR_8]);
   return VAR_0;
}
