
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Scsi_Host {scalar_t__ irq; int n_io_port; int io_port; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,struct Scsi_Host**) ;
 struct Scsi_Host** VAR_1 ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct Scsi_Host *VAR_2)
{
 int VAR_3, VAR_4, VAR_5;

 FUNC_1(VAR_2->io_port, VAR_2->n_io_port);

 VAR_4 = -1;
 VAR_5 = 0;
 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (VAR_2 == VAR_1[VAR_3])
   VAR_4 = VAR_3;
  if (VAR_2->irq == VAR_1[VAR_3]->irq)
   VAR_5++;
 }


 if (1 == VAR_5)
  FUNC_0(VAR_2->irq, VAR_1);

 VAR_0--;

 for (VAR_3 = VAR_4; VAR_3 < VAR_0; VAR_3++)
  VAR_1[VAR_3] = VAR_1[VAR_3 + 1];

 VAR_1[VAR_0] = ((void*)0);

 return 0;
}
