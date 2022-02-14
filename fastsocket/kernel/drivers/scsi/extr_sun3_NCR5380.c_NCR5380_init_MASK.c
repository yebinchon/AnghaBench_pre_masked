
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct Scsi_Host {int this_id; int cmd_per_lun; int can_queue; scalar_t__ hostt; } ;
struct TYPE_2__ {int id_mask; int id_higher_mask; int flags; int * disconnected_queue; int * issue_queue; int * connected; scalar_t__ targets_present; scalar_t__ dma_len; scalar_t__* busy; scalar_t__ aborted; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ) ;
 int VAR_6 ;
 int FUNC_2 (struct Scsi_Host*) ;
 int VAR_7 ;
 struct Scsi_Host* VAR_8 ;
 TYPE_1__* VAR_9 ;
 int FUNC_3 () ;
 int FUNC_4 (char*,int ) ;
 scalar_t__ VAR_10 ;

__attribute__((used)) static int FUNC_5 (struct Scsi_Host *VAR_11, int VAR_12)
{
    int VAR_13;
    FUNC_2(VAR_11);

    FUNC_0();

    VAR_9->aborted = 0;
    VAR_9->id_mask = 1 << VAR_11->this_id;
    VAR_9->id_higher_mask = 0;
    for (VAR_13 = VAR_9->id_mask; VAR_13 <= 0x80; VAR_13 <<= 1)
 if (VAR_13 > VAR_9->id_mask)
     VAR_9->id_higher_mask |= VAR_13;
    for (VAR_13 = 0; VAR_13 < 8; ++VAR_13)
 VAR_9->busy[VAR_13] = 0;






    VAR_9->targets_present = 0;
    VAR_9->connected = ((void*)0);
    VAR_9->issue_queue = ((void*)0);
    VAR_9->disconnected_queue = ((void*)0);
    VAR_9->flags = VAR_0;

    if (!VAR_10) {
 VAR_10 = VAR_11->hostt;
 VAR_8 = VAR_11;
    }



    if ((VAR_11->cmd_per_lun > 1) || (VAR_11->can_queue > 1))
  FUNC_4("scsi%d: WARNING : support for multiple outstanding commands enabled\n"
         "        without AUTOSENSE option, contingent allegiance conditions may\n"
         "        be incorrectly cleared.\n", VAR_1);


    FUNC_1(VAR_3, VAR_2);
    FUNC_1(VAR_4, VAR_5);
    FUNC_1(VAR_7, 0);
    FUNC_1(VAR_6, 0);

    return 0;
}
