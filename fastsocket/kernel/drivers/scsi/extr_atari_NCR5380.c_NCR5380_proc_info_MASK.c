
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Scsi_Host {scalar_t__ hostdata; } ;
struct NCR5380_hostdata {scalar_t__ disconnected_queue; scalar_t__ issue_queue; scalar_t__ connected; } ;
typedef long off_t ;
typedef int Scsi_Cmnd ;


 int VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 int * FUNC_0 (int *) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 () ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (unsigned long) ;
 char* FUNC_5 (int *,char*,char*,int) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int FUNC_6(struct Scsi_Host *VAR_4, char *VAR_5,
        char **VAR_6, off_t VAR_7, int VAR_8, int VAR_9)
{
 char *VAR_10 = VAR_5;
 struct NCR5380_hostdata *VAR_11;
 Scsi_Cmnd *VAR_12;
 unsigned long VAR_13;
 off_t VAR_14 = 0;
 VAR_11 = (struct NCR5380_hostdata *)VAR_4->hostdata;

 if (VAR_9)
  return -VAR_0;
 FUNC_1("NCR5380 core release=%d.\n", VAR_2);
 do { if (VAR_10 - VAR_5 < VAR_7 - VAR_14) { VAR_14 += VAR_10 - VAR_5; VAR_10 = VAR_5; } } while (0);
 FUNC_4(VAR_13);
 FUNC_1("NCR5380: coroutine is%s running.\n",
  VAR_3 ? "" : "n't");
 do { if (VAR_10 - VAR_5 < VAR_7 - VAR_14) { VAR_14 += VAR_10 - VAR_5; VAR_10 = VAR_5; } } while (0);
 if (!VAR_11->connected)
  FUNC_1("scsi%d: no currently connected command\n", VAR_1);
 else
  VAR_10 = FUNC_5((Scsi_Cmnd *) VAR_11->connected,
           VAR_10, VAR_5, VAR_8);
 FUNC_1("scsi%d: issue_queue\n", VAR_1);
 do { if (VAR_10 - VAR_5 < VAR_7 - VAR_14) { VAR_14 += VAR_10 - VAR_5; VAR_10 = VAR_5; } } while (0);
 for (VAR_12 = (Scsi_Cmnd *)VAR_11->issue_queue; VAR_12; VAR_12 = FUNC_0(VAR_12)) {
  VAR_10 = FUNC_5(VAR_12, VAR_10, VAR_5, VAR_8);
  do { if (VAR_10 - VAR_5 < VAR_7 - VAR_14) { VAR_14 += VAR_10 - VAR_5; VAR_10 = VAR_5; } } while (0);
 }

 FUNC_1("scsi%d: disconnected_queue\n", VAR_1);
 do { if (VAR_10 - VAR_5 < VAR_7 - VAR_14) { VAR_14 += VAR_10 - VAR_5; VAR_10 = VAR_5; } } while (0);
 for (VAR_12 = (Scsi_Cmnd *) VAR_11->disconnected_queue; VAR_12;
      VAR_12 = FUNC_0(VAR_12)) {
  VAR_10 = FUNC_5(VAR_12, VAR_10, VAR_5, VAR_8);
  do { if (VAR_10 - VAR_5 < VAR_7 - VAR_14) { VAR_14 += VAR_10 - VAR_5; VAR_10 = VAR_5; } } while (0);
 }

 FUNC_3(VAR_13);
 *VAR_6 = VAR_5 + (VAR_7 - VAR_14);
 if (VAR_10 - VAR_5 < VAR_7 - VAR_14)
  return 0;
 else if (VAR_10 - VAR_5 - (VAR_7 - VAR_14) < VAR_8)
  return VAR_10 - VAR_5 - (VAR_7 - VAR_14);
 return VAR_8;
}
