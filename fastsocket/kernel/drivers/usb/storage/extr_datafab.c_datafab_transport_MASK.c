
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct us_data {unsigned char* iobuf; scalar_t__ extra; int extra_destructor; } ;
struct scsi_cmnd {scalar_t__* cmnd; int result; } ;
struct datafab_info {int lun; int ssize; unsigned long sectors; unsigned char sense_key; unsigned char sense_asc; unsigned char sense_ascq; } ;
typedef int inquiry_reply ;
typedef int __be32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 unsigned char VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 unsigned char VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_0 (char*,...) ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (struct us_data*,struct scsi_cmnd*,int) ;
 int FUNC_3 (struct us_data*,struct datafab_info*) ;
 int VAR_21 ;
 int FUNC_4 (struct us_data*,struct datafab_info*,unsigned long,unsigned long) ;
 int FUNC_5 (struct us_data*,struct datafab_info*,unsigned long,unsigned long) ;
 int FUNC_6 (struct us_data*,unsigned char*,int) ;
 scalar_t__ FUNC_7 (int,int ) ;
 int FUNC_8 (unsigned char*,unsigned char*,int) ;
 int FUNC_9 (unsigned char*,int ,int) ;
 int FUNC_10 (unsigned char*,int,struct scsi_cmnd*) ;

__attribute__((used)) static int FUNC_11(struct scsi_cmnd *VAR_22, struct us_data *VAR_23)
{
 struct datafab_info *VAR_24;
 int VAR_25;
 unsigned long VAR_26, VAR_27;
 unsigned char *VAR_28 = VAR_23->iobuf;
 static unsigned char VAR_29[8] = {
  0x00, 0x80, 0x00, 0x01, 0x1F, 0x00, 0x00, 0x00
 };

 if (!VAR_23->extra) {
  VAR_23->extra = FUNC_7(sizeof(struct datafab_info), VAR_1);
  if (!VAR_23->extra) {
   FUNC_0("datafab_transport:  Gah! "
      "Can't allocate storage for Datafab info struct!\n");
   return VAR_16;
  }
  VAR_23->extra_destructor = VAR_21;
    ((struct datafab_info *)VAR_23->extra)->lun = -1;
 }

 VAR_24 = (struct datafab_info *) (VAR_23->extra);

 if (VAR_22->cmnd[0] == VAR_2) {
  FUNC_0("datafab_transport:  INQUIRY.  Returning bogus response");
  FUNC_8(VAR_28, VAR_29, sizeof(VAR_29));
  FUNC_6(VAR_23, VAR_28, 36);
  return VAR_18;
 }

 if (VAR_22->cmnd[0] == VAR_9) {
  VAR_24->ssize = 0x200;
  VAR_25 = FUNC_3(VAR_23, VAR_24);
  if (VAR_25 != VAR_18)
   return VAR_25;

  FUNC_0("datafab_transport:  READ_CAPACITY:  %ld sectors, %ld bytes per sector\n",
     VAR_24->sectors, VAR_24->ssize);



  ((__be32 *) VAR_28)[0] = FUNC_1(VAR_24->sectors - 1);
  ((__be32 *) VAR_28)[1] = FUNC_1(VAR_24->ssize);
  FUNC_10(VAR_28, 8, VAR_22);

  return VAR_18;
 }

 if (VAR_22->cmnd[0] == VAR_3) {
  FUNC_0("datafab_transport:  Gah! MODE_SELECT_10.\n");
  return VAR_16;
 }



 if (VAR_22->cmnd[0] == VAR_7) {
  VAR_26 = ((u32)(VAR_22->cmnd[2]) << 24) | ((u32)(VAR_22->cmnd[3]) << 16) |
   ((u32)(VAR_22->cmnd[4]) << 8) | ((u32)(VAR_22->cmnd[5]));

  VAR_27 = ((u32)(VAR_22->cmnd[7]) << 8) | ((u32)(VAR_22->cmnd[8]));

  FUNC_0("datafab_transport:  READ_10: read block 0x%04lx  count %ld\n", VAR_26, VAR_27);
  return FUNC_4(VAR_23, VAR_24, VAR_26, VAR_27);
 }

 if (VAR_22->cmnd[0] == VAR_8) {


  VAR_26 = ((u32)(VAR_22->cmnd[2]) << 24) | ((u32)(VAR_22->cmnd[3]) << 16) |
   ((u32)(VAR_22->cmnd[4]) << 8) | ((u32)(VAR_22->cmnd[5]));

  VAR_27 = ((u32)(VAR_22->cmnd[6]) << 24) | ((u32)(VAR_22->cmnd[7]) << 16) |
    ((u32)(VAR_22->cmnd[8]) << 8) | ((u32)(VAR_22->cmnd[9]));

  FUNC_0("datafab_transport:  READ_12: read block 0x%04lx  count %ld\n", VAR_26, VAR_27);
  return FUNC_4(VAR_23, VAR_24, VAR_26, VAR_27);
 }

 if (VAR_22->cmnd[0] == VAR_19) {
  VAR_26 = ((u32)(VAR_22->cmnd[2]) << 24) | ((u32)(VAR_22->cmnd[3]) << 16) |
   ((u32)(VAR_22->cmnd[4]) << 8) | ((u32)(VAR_22->cmnd[5]));

  VAR_27 = ((u32)(VAR_22->cmnd[7]) << 8) | ((u32)(VAR_22->cmnd[8]));

  FUNC_0("datafab_transport:  WRITE_10: write block 0x%04lx  count %ld\n", VAR_26, VAR_27);
  return FUNC_5(VAR_23, VAR_24, VAR_26, VAR_27);
 }

 if (VAR_22->cmnd[0] == VAR_20) {


  VAR_26 = ((u32)(VAR_22->cmnd[2]) << 24) | ((u32)(VAR_22->cmnd[3]) << 16) |
   ((u32)(VAR_22->cmnd[4]) << 8) | ((u32)(VAR_22->cmnd[5]));

  VAR_27 = ((u32)(VAR_22->cmnd[6]) << 24) | ((u32)(VAR_22->cmnd[7]) << 16) |
    ((u32)(VAR_22->cmnd[8]) << 8) | ((u32)(VAR_22->cmnd[9]));

  FUNC_0("datafab_transport:  WRITE_12: write block 0x%04lx  count %ld\n", VAR_26, VAR_27);
  return FUNC_5(VAR_23, VAR_24, VAR_26, VAR_27);
 }

 if (VAR_22->cmnd[0] == VAR_14) {
  FUNC_0("datafab_transport:  TEST_UNIT_READY.\n");
  return FUNC_3(VAR_23, VAR_24);
 }

 if (VAR_22->cmnd[0] == VAR_10) {
  FUNC_0("datafab_transport:  REQUEST_SENSE.  Returning faked response\n");





  FUNC_9(VAR_28, 0, 18);
  VAR_28[0] = 0xF0;
  VAR_28[2] = VAR_24->sense_key;
  VAR_28[7] = 11;
  VAR_28[12] = VAR_24->sense_asc;
  VAR_28[13] = VAR_24->sense_ascq;
  FUNC_10(VAR_28, 18, VAR_22);

  return VAR_18;
 }

 if (VAR_22->cmnd[0] == VAR_4) {
  FUNC_0("datafab_transport:  MODE_SENSE_6 detected\n");
  return FUNC_2(VAR_23, VAR_22, 1);
 }

 if (VAR_22->cmnd[0] == VAR_5) {
  FUNC_0("datafab_transport:  MODE_SENSE_10 detected\n");
  return FUNC_2(VAR_23, VAR_22, 0);
 }

 if (VAR_22->cmnd[0] == VAR_0) {



  return VAR_18;
 }

 if (VAR_22->cmnd[0] == VAR_12) {


  FUNC_0("datafab_transport:  START_STOP.\n");


  VAR_25 = FUNC_3(VAR_23, VAR_24);
  if (VAR_25 == VAR_18) {
   VAR_24->sense_key = VAR_6;
   VAR_22->result = VAR_13;
  } else {
   VAR_24->sense_key = VAR_15;
   VAR_22->result = VAR_11;
  }
  return VAR_25;
 }

 FUNC_0("datafab_transport:  Gah! Unknown command: %d (0x%x)\n",
    VAR_22->cmnd[0], VAR_22->cmnd[0]);
 VAR_24->sense_key = 0x05;
 VAR_24->sense_asc = 0x20;
 VAR_24->sense_ascq = 0x00;
 return VAR_17;
}
