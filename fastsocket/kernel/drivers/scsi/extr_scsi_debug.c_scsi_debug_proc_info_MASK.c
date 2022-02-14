
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Scsi_Host {int dummy; } ;
typedef int off_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (char*,char*,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 char* VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_2 (char*,char*,char*,char*,int,int,int,scalar_t__,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int) ;
 int FUNC_3 (char*,char*,int*) ;

__attribute__((used)) static int FUNC_4(struct Scsi_Host *VAR_25, char *VAR_26, char **VAR_27, off_t VAR_28,
    int VAR_29, int VAR_30)
{
 int VAR_31, VAR_32, VAR_33;
 int VAR_34;

 VAR_34 = VAR_29;

 if (VAR_30 == 1) {
  char VAR_35[16];
  int VAR_36 = VAR_29 > 15 ? 15 : VAR_29;

  if (!FUNC_0(VAR_0) || !FUNC_0(VAR_1))
   return -VAR_2;
  FUNC_1(VAR_35, VAR_26, VAR_36);
  VAR_35[VAR_36] = '\0';
  if (1 != FUNC_3(VAR_35, "%d", &VAR_32))
   return -VAR_3;
  VAR_18 = VAR_32;
  if (VAR_15 != 0)
                        VAR_12 = 0;
  return VAR_29;
 }
 VAR_33 = 0;
 VAR_32 = VAR_31 = FUNC_2(VAR_26, "scsi_debug adapter driver, version "
     "%s [%s]\n"
     "num_tgts=%d, shared (ram) size=%d MB, opts=0x%x, "
     "every_nth=%d(curr:%d)\n"
     "delay=%d, max_luns=%d, scsi_level=%d\n"
     "sector_size=%d bytes, cylinders=%d, heads=%d, sectors=%d\n"
     "number of aborts=%d, device_reset=%d, bus_resets=%d, "
     "host_resets=%d\ndix_reads=%d dix_writes=%d dif_errors=%d\n",
     VAR_4, VAR_21, VAR_17,
     VAR_14, VAR_18, VAR_15,
     VAR_12, VAR_13,
     VAR_16, VAR_19,
     VAR_20, VAR_22, VAR_23,
     VAR_24, VAR_8, VAR_10, VAR_9,
     VAR_11, VAR_6, VAR_7, VAR_5);
 if (VAR_32 < VAR_28) {
  VAR_31 = 0;
  VAR_33 = VAR_32;
 }
 *VAR_27 = VAR_26 + (VAR_28 - VAR_33);
 VAR_31 -= (VAR_28 - VAR_33);
 if (VAR_31 > VAR_29)
  VAR_31 = VAR_29;
 return VAR_31;
}
