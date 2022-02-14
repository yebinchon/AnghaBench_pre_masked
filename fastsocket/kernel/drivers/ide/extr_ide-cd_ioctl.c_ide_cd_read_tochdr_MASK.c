
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct cdrom_tochdr {int cdth_trk1; int cdth_trk0; } ;
struct cdrom_info {struct atapi_toc* toc; } ;
struct TYPE_5__ {int last_track; int first_track; } ;
struct atapi_toc {TYPE_1__ hdr; } ;
struct TYPE_6__ {struct cdrom_info* driver_data; } ;
typedef TYPE_2__ ide_drive_t ;


 int FUNC_0 (TYPE_2__*,int *) ;

__attribute__((used)) static int FUNC_1(ide_drive_t *VAR_0, void *VAR_1)
{
 struct cdrom_info *VAR_2 = VAR_0->driver_data;
 struct cdrom_tochdr *VAR_3 = VAR_1;
 struct atapi_toc *VAR_4;
 int VAR_5;


 VAR_5 = FUNC_0(VAR_0, ((void*)0));
 if (VAR_5)
  return VAR_5;

 VAR_4 = VAR_2->toc;
 VAR_3->cdth_trk0 = VAR_4->hdr.first_track;
 VAR_3->cdth_trk1 = VAR_4->hdr.last_track;

 return 0;
}
