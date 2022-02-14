
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int phase; int buffers_residual; int this_residual; } ;
struct TYPE_9__ {TYPE_2__ SCp; int * cmnd; TYPE_1__* device; } ;
struct TYPE_7__ {int lun; int id; } ;
typedef TYPE_3__ Scsi_Cmnd ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (TYPE_3__*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_4(char *VAR_8, Scsi_Cmnd * VAR_9)
{
 char *VAR_10 = VAR_8;
 int VAR_11;

 FUNC_2("0x%08x: target=%d; lun=%d; cmnd=( ",
  (unsigned int) VAR_9, VAR_9->device->id, VAR_9->device->lun);

 for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_9->cmnd[0]); VAR_11++)
  FUNC_2("0x%02x ", VAR_9->cmnd[VAR_11]);

 FUNC_2("); resid=%d; residual=%d; buffers=%d; phase |",
  FUNC_3(VAR_9), VAR_9->SCp.this_residual,
  VAR_9->SCp.buffers_residual);

 if (VAR_9->SCp.phase & VAR_4)
  FUNC_2("not issued|");
 if (VAR_9->SCp.phase & VAR_5)
  FUNC_2("selecting|");
 if (VAR_9->SCp.phase & VAR_2)
  FUNC_2("disconnected|");
 if (VAR_9->SCp.phase & VAR_0)
  FUNC_2("aborted|");
 if (VAR_9->SCp.phase & VAR_3)
  FUNC_2("identified|");
 if (VAR_9->SCp.phase & VAR_1)
  FUNC_2("completed|");
 if (VAR_9->SCp.phase & VAR_6)
  FUNC_2("spiordy|");
 if (VAR_9->SCp.phase & VAR_7)
  FUNC_2("syncneg|");
 FUNC_2("; next=0x%p\n", FUNC_1(VAR_9));

 return (VAR_8 - VAR_10);
}
