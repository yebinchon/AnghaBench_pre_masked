
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Scsi_Host {int host_no; } ;
typedef int off_t ;


 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 char* VAR_8 ;
 scalar_t__ FUNC_0 (char*,char*,...) ;

__attribute__((used)) static int FUNC_1(struct Scsi_Host *VAR_9, char *VAR_10, char **VAR_11, off_t VAR_12, int VAR_13, int VAR_14)
{
 int VAR_15 = 0;

 if (VAR_14)
  return (-VAR_3);

 *VAR_11 = VAR_10 + VAR_12;

 VAR_15 += FUNC_0(VAR_10 + VAR_15, "Future Domain MCS-600/700 Driver %s\n", VAR_2);
 VAR_15 += FUNC_0(VAR_10 + VAR_15, "HOST #%d: %s\n", VAR_9->host_no, VAR_8);
 VAR_15 += FUNC_0(VAR_10 + VAR_15, "FIFO Size=0x%x, FIFO Count=%d\n", VAR_5, VAR_4);
 VAR_15 += FUNC_0(VAR_10 + VAR_15, "DriverCalls=%d, Interrupts=%d, BytesRead=%d, BytesWrite=%d\n\n", VAR_7, VAR_6, VAR_0, VAR_1);

 if ((VAR_15 -= VAR_12) <= 0)
  return 0;
 if (VAR_15 > VAR_13)
  VAR_15 = VAR_13;
 return VAR_15;
}
