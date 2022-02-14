
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct virtio_scsi {TYPE_1__* event_list; } ;
struct TYPE_2__ {struct virtio_scsi* vscsi; } ;


 int VAR_0 ;
 int FUNC_0 (struct virtio_scsi*,TYPE_1__*) ;

__attribute__((used)) static int FUNC_1(struct virtio_scsi *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  VAR_1->event_list[VAR_2].vscsi = VAR_1;
  FUNC_0(VAR_1, &VAR_1->event_list[VAR_2]);
 }

 return 0;
}
