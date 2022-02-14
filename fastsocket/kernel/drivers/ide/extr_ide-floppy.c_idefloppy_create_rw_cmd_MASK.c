
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct request {int cmd_flags; int cmd; } ;
struct ide_disk_obj {unsigned long bs_factor; } ;
struct ide_atapi_pc {int flags; struct request* rq; int * c; } ;
struct TYPE_3__ {struct ide_disk_obj* driver_data; } ;
typedef TYPE_1__ ide_drive_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct request*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char*,int,int) ;
 int FUNC_4 (struct ide_atapi_pc*) ;
 int FUNC_5 (int ,int *,int) ;
 int FUNC_6 (int ,...) ;
 int FUNC_7 (struct request*) ;

__attribute__((used)) static void FUNC_8(ide_drive_t *VAR_7,
        struct ide_atapi_pc *VAR_8, struct request *VAR_9,
        unsigned long VAR_10)
{
 struct ide_disk_obj *VAR_11 = VAR_7->driver_data;
 int VAR_12 = VAR_10 / VAR_11->bs_factor;
 int VAR_13 = FUNC_0(VAR_9) / VAR_11->bs_factor;
 int VAR_14 = FUNC_7(VAR_9);

 FUNC_3(VAR_2, "block: %d, blocks: %d", VAR_12, VAR_13);

 FUNC_4(VAR_8);
 VAR_8->c[0] = VAR_14 == VAR_5 ? VAR_0 : VAR_1;
 FUNC_6(FUNC_1(VAR_13), (unsigned short *)&VAR_8->c[7]);
 FUNC_6(FUNC_2(VAR_12), (unsigned int *) &VAR_8->c[2]);

 FUNC_5(VAR_9->cmd, VAR_8->c, 12);

 VAR_8->rq = VAR_9;
 if (VAR_9->cmd_flags & VAR_6)
  VAR_8->flags |= VAR_4;

 VAR_8->flags |= VAR_3;
}
