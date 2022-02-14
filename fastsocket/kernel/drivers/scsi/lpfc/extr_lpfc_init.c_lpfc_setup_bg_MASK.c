
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct lpfc_hba {int dummy; } ;
struct Scsi_Host {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_0 (int ,int) ;
 char* VAR_11 ;
 int VAR_12 ;
 char* VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (struct lpfc_hba*,int ,int ,char*,...) ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_2 (char*,int ,int) ;
 int FUNC_3 (struct Scsi_Host*,int) ;
 int FUNC_4 (struct Scsi_Host*,int) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(struct lpfc_hba *VAR_18, struct Scsi_Host *VAR_19)
{
 uint32_t VAR_20;
 uint32_t VAR_21;

 int VAR_22 = 10;
 if (VAR_17 && VAR_16) {
  FUNC_1(VAR_18, VAR_2, VAR_4,
    "1478 Registering BlockGuard with the "
    "SCSI layer\n");

  VAR_20 = VAR_17;
  VAR_21 = VAR_16;


  VAR_17 &= (VAR_6 |
   VAR_9 |
   VAR_10);
  VAR_16 &= (VAR_8 | VAR_7);


  if (VAR_17 == VAR_10)
   VAR_17 |= VAR_6;

  if (VAR_17 && VAR_16) {
   if ((VAR_20 != VAR_17) ||
    (VAR_21 != VAR_16))
    FUNC_1(VAR_18, VAR_1, VAR_4,
     "1475 Registering BlockGuard with the "
     "SCSI layer: mask %d  guard %d\n",
     VAR_17, VAR_16);

   FUNC_4(VAR_19, VAR_17);
   FUNC_3(VAR_19, VAR_16);
  } else
   FUNC_1(VAR_18, VAR_1, VAR_4,
    "1479 Not Registering BlockGuard with the SCSI "
    "layer, Bad protection parameters: %d %d\n",
    VAR_20, VAR_21);
 }

 if (!VAR_11) {
  while (VAR_22) {
   FUNC_5(&VAR_15);
   VAR_11 =
    (char *) FUNC_0(VAR_0, VAR_22);
   if (VAR_11) {
    FUNC_1(VAR_18, VAR_1, VAR_3,
     "9043 BLKGRD: allocated %d pages for "
           "_dump_buf_data at 0x%p\n",
           (1 << VAR_22), VAR_11);
    VAR_12 = VAR_22;
    FUNC_2(VAR_11, 0,
           ((1 << VAR_5) << VAR_22));
    break;
   } else
    --VAR_22;
  }
  if (!VAR_12)
   FUNC_1(VAR_18, VAR_1, VAR_3,
    "9044 BLKGRD: ERROR unable to allocate "
          "memory for hexdump\n");
 } else
  FUNC_1(VAR_18, VAR_1, VAR_3,
   "9045 BLKGRD: already allocated _dump_buf_data=0x%p"
         "\n", VAR_11);
 if (!VAR_13) {
  while (VAR_22) {
   VAR_13 =
    (char *) FUNC_0(VAR_0, VAR_22);
   if (VAR_13) {
    FUNC_1(VAR_18, VAR_1, VAR_3,
     "9046 BLKGRD: allocated %d pages for "
           "_dump_buf_dif at 0x%p\n",
           (1 << VAR_22), VAR_13);
    VAR_14 = VAR_22;
    FUNC_2(VAR_13, 0,
           ((1 << VAR_5) << VAR_22));
    break;
   } else
    --VAR_22;
  }
  if (!VAR_14)
   FUNC_1(VAR_18, VAR_1, VAR_3,
   "9047 BLKGRD: ERROR unable to allocate "
          "memory for hexdump\n");
 } else
  FUNC_1(VAR_18, VAR_1, VAR_3,
   "9048 BLKGRD: already allocated _dump_buf_dif=0x%p\n",
         VAR_13);
}
