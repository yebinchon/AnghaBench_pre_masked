
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct ide_disk_obj {int dummy; } ;
struct ide_cmd {int dummy; } ;
struct ide_atapi_pc {scalar_t__* c; scalar_t__ retries; int flags; int error; } ;
typedef int ide_startstop_t ;
struct TYPE_8__ {int (* pc_callback ) (TYPE_2__*,int ) ;struct ide_atapi_pc* failed_pc; TYPE_1__* hwif; struct ide_atapi_pc* pc; struct ide_disk_obj* driver_data; } ;
typedef TYPE_2__ ide_drive_t ;
struct TYPE_7__ {int rq; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,int ,unsigned int) ;
 int FUNC_2 (int ,char*,scalar_t__) ;
 int FUNC_3 (struct ide_disk_obj*,struct ide_atapi_pc*) ;
 int FUNC_4 (TYPE_2__*,struct ide_cmd*) ;
 int VAR_6 ;
 int FUNC_5 (TYPE_2__*,int ) ;

__attribute__((used)) static ide_startstop_t FUNC_6(ide_drive_t *VAR_7,
        struct ide_cmd *VAR_8,
        struct ide_atapi_pc *VAR_9)
{
 struct ide_disk_obj *VAR_10 = VAR_7->driver_data;

 if (VAR_7->failed_pc == ((void*)0) &&
     VAR_9->c[0] != VAR_1)
  VAR_7->failed_pc = VAR_9;


 VAR_7->pc = VAR_9;

 if (VAR_9->retries > VAR_2) {
  unsigned int VAR_11 = FUNC_0(VAR_7->hwif->rq);

  if (!(VAR_9->flags & VAR_5))
   FUNC_3(VAR_10, VAR_9);


  VAR_9->error = VAR_4;

  VAR_7->failed_pc = ((void*)0);
  VAR_7->pc_callback(VAR_7, 0);
  FUNC_1(VAR_7, -VAR_0, VAR_11);
  return VAR_6;
 }

 FUNC_2(VAR_3, "retry #%d", VAR_9->retries);

 VAR_9->retries++;

 return FUNC_4(VAR_7, VAR_8);
}
