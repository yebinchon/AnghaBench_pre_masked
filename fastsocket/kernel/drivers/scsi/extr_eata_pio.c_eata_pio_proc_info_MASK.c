
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct Scsi_Host {int host_no; scalar_t__ base; } ;
typedef scalar_t__ off_t ;
struct TYPE_2__ {char* name; char* revision; char bustype; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_1 (struct Scsi_Host*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (char*,scalar_t__,scalar_t__,int) ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (char*,char*,...) ;

__attribute__((used)) static int FUNC_4(struct Scsi_Host *VAR_7, char *VAR_8, char **VAR_9, off_t VAR_10,
         int VAR_11, int VAR_12)
{
 int VAR_13 = 0;
 off_t VAR_14 = 0, VAR_15 = 0;

 if (VAR_12)
  return -VAR_1;

 VAR_13 += FUNC_3(VAR_8+VAR_13, "EATA (Extended Attachment) PIO driver version: "
     "%d.%d%s\n",VAR_2, VAR_3, VAR_4);
 VAR_13 += FUNC_3(VAR_8 + VAR_13, "queued commands:     %10ld\n"
     "processed interrupts:%10ld\n", VAR_6, VAR_5);
 VAR_13 += FUNC_3(VAR_8 + VAR_13, "\nscsi%-2d: HBA %.10s\n",
     VAR_7->host_no, FUNC_1(VAR_7)->name);
 VAR_13 += FUNC_3(VAR_8 + VAR_13, "Firmware revision: v%s\n",
     FUNC_1(VAR_7)->revision);
 VAR_13 += FUNC_3(VAR_8 + VAR_13, "IO: PIO\n");
 VAR_13 += FUNC_3(VAR_8 + VAR_13, "Base IO : %#.4x\n", (u32) VAR_7->base);
 VAR_13 += FUNC_3(VAR_8 + VAR_13, "Host Bus: %s\n",
     (FUNC_1(VAR_7)->bustype == 'P')?"PCI ":
     (FUNC_1(VAR_7)->bustype == 'E')?"EISA":"ISA ");

 VAR_15 = VAR_14 + VAR_13;

 if (VAR_15 < VAR_10) {
  VAR_13 = 0;
  VAR_14 = VAR_15;
 }
 if (VAR_15 > VAR_10 + VAR_11)
  goto stop_output;

stop_output:
 FUNC_0(VAR_0, FUNC_2("2pos: %ld offset: %ld len: %d\n", VAR_15, VAR_10, VAR_13));
 *VAR_9 = VAR_8 + (VAR_10 - VAR_14);
 VAR_13 -= (VAR_10 - VAR_14);
 if (VAR_13 > VAR_11)
  VAR_13 = VAR_11;
 FUNC_0(VAR_0, FUNC_2("3pos: %ld offset: %ld len: %d\n", VAR_15, VAR_10, VAR_13));

 return VAR_13;
}
