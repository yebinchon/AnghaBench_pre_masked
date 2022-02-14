
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_target {unsigned int id; scalar_t__ channel; int dev; } ;
struct ahd_softc {TYPE_1__* platform_data; } ;
struct TYPE_4__ {scalar_t__ hostdata; } ;
struct TYPE_3__ {struct scsi_target** starget; } ;


 TYPE_2__* FUNC_0 (int *) ;

__attribute__((used)) static struct scsi_target **
FUNC_1(struct scsi_target *VAR_0)
{
 struct ahd_softc *VAR_1 =
  *((struct ahd_softc **)FUNC_0(&VAR_0->dev)->hostdata);
 unsigned int VAR_2;

 VAR_2 = VAR_0->id;
 if (VAR_0->channel != 0)
  VAR_2 += 8;

 return &VAR_1->platform_data->starget[VAR_2];
}
