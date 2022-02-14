
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_cmnd {int dummy; } ;
struct TYPE_3__ {int phase; } ;
struct TYPE_4__ {int result; TYPE_1__ SCp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* VAR_4 ;
 int FUNC_0 () ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct scsi_cmnd*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int FUNC_4(struct scsi_cmnd *VAR_6)
{




   if (!VAR_5) {



      return VAR_1;
   } else FUNC_3( "\n" );





   FUNC_0();
   VAR_4->SCp.phase |= VAR_3;
   VAR_4->result = VAR_0 << 16;


   FUNC_1(VAR_0 << 16);
   return VAR_2;
}
