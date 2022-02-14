
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mesh_state {int dma_cmd_bus; int dma_cmd_space; int dma_cmd_size; int dma; int mesh; int meshintr; struct Scsi_Host* host; } ;
struct macio_dev {int dummy; } ;
struct Scsi_Host {int dummy; } ;


 int FUNC_0 (int ,struct mesh_state*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct macio_dev*) ;
 int FUNC_3 (struct macio_dev*) ;
 int FUNC_4 (struct macio_dev*) ;
 int FUNC_5 (struct macio_dev*) ;
 int FUNC_6 (int ,int ,int ,int ) ;
 int FUNC_7 (struct Scsi_Host*) ;
 int FUNC_8 (struct Scsi_Host*) ;
 int FUNC_9 (struct mesh_state*,int ) ;

__attribute__((used)) static int FUNC_10(struct macio_dev *VAR_0)
{
 struct mesh_state *VAR_1 = (struct mesh_state *)FUNC_2(VAR_0);
 struct Scsi_Host *VAR_2 = VAR_1->host;

 FUNC_8(VAR_2);

 FUNC_0(VAR_1->meshintr, VAR_1);


 FUNC_5(VAR_0);


 FUNC_9(VAR_1, 0);


 FUNC_1(VAR_1->mesh);
        FUNC_1(VAR_1->dma);


 FUNC_6(FUNC_3(VAR_0), VAR_1->dma_cmd_size,
       VAR_1->dma_cmd_space, VAR_1->dma_cmd_bus);


 FUNC_4(VAR_0);

 FUNC_7(VAR_2);

 return 0;
}
