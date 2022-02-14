
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct us_data {unsigned char* iobuf; scalar_t__ extra; int extra_destructor; } ;
struct sddr55_card_info {unsigned char* sense_data; unsigned int* lba_to_pba; unsigned long capacity; int max_log_blks; int pageshift; int blockshift; unsigned int smallpageshift; unsigned int blockmask; scalar_t__ force_read_only; scalar_t__ read_only; scalar_t__ fatal_error; scalar_t__ last_access; } ;
struct scsi_cmnd {int* cmnd; } ;
typedef int mode_page_01 ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned long VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (char*,...) ;
 int VAR_14 ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (struct us_data*,unsigned char*,int) ;
 int VAR_15 ;
 scalar_t__ FUNC_3 (int,int ) ;
 int FUNC_4 (unsigned char*,unsigned char*,int) ;
 int FUNC_5 (unsigned char*,int ,int) ;
 int VAR_16 ;
 unsigned long FUNC_6 (struct us_data*) ;
 int FUNC_7 (struct us_data*,unsigned int,unsigned int,unsigned short) ;
 int FUNC_8 (struct us_data*) ;
 int FUNC_9 (struct us_data*) ;
 int FUNC_10 (struct us_data*,unsigned int,unsigned int,unsigned short) ;
 int FUNC_11 (int,int,int ) ;
 unsigned int FUNC_12 (int,int) ;
 scalar_t__ FUNC_13 (int ,scalar_t__) ;
 int FUNC_14 (unsigned char*,int,struct scsi_cmnd*) ;

__attribute__((used)) static int FUNC_15(struct scsi_cmnd *VAR_17, struct us_data *VAR_18)
{
 int VAR_19;
 static unsigned char VAR_20[8] = {
  0x00, 0x80, 0x00, 0x02, 0x1F, 0x00, 0x00, 0x00
 };

 static unsigned char VAR_21[20] = {
  0x0, 0x12, 0x00, 0x80, 0x0, 0x0, 0x0, 0x0,
  0x01, 0x0A,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
 };
 unsigned char *VAR_22 = VAR_18->iobuf;
 unsigned long VAR_23;
 unsigned int VAR_24;
 unsigned int VAR_25;
 unsigned int VAR_26;
 unsigned short VAR_27;
 struct sddr55_card_info *VAR_28;

 if (!VAR_18->extra) {
  VAR_18->extra = FUNC_3(
   sizeof(struct sddr55_card_info), VAR_1);
  if (!VAR_18->extra)
   return VAR_11;
  VAR_18->extra_destructor = VAR_16;
 }

 VAR_28 = (struct sddr55_card_info *)(VAR_18->extra);

 if (VAR_17->cmnd[0] == VAR_8) {
  FUNC_0("SDDR55: request sense %02x/%02x/%02x\n", VAR_28->sense_data[2], VAR_28->sense_data[12], VAR_28->sense_data[13]);

  FUNC_4 (VAR_22, VAR_28->sense_data, sizeof VAR_28->sense_data);
  VAR_22[0] = 0x70;
  VAR_22[7] = 11;
  FUNC_14 (VAR_22, sizeof VAR_28->sense_data, VAR_17);
  FUNC_5 (VAR_28->sense_data, 0, sizeof VAR_28->sense_data);

  return VAR_13;
 }

 FUNC_5 (VAR_28->sense_data, 0, sizeof VAR_28->sense_data);




 if (VAR_17->cmnd[0] == VAR_3) {
  FUNC_4(VAR_22, VAR_20, 8);
  FUNC_2(VAR_18, VAR_22, 36);
  return VAR_13;
 }




 if (VAR_28->lba_to_pba == ((void*)0) || FUNC_13(VAR_15, VAR_28->last_access + VAR_2/2)) {


  VAR_19 = FUNC_9 (VAR_18);
  if (VAR_19) {
   VAR_19 = FUNC_9 (VAR_18);
   if (!VAR_19) {
   FUNC_11 (6, 0x28, 0);
   }
   return VAR_12;
  }
 }



 if (VAR_28->fatal_error) {

  FUNC_11 (3, 0x31, 0);
  return VAR_12;
 }

 if (VAR_17->cmnd[0] == VAR_7) {

  VAR_23 = FUNC_6(VAR_18);

  if (!VAR_23) {
   FUNC_11 (3, 0x30, 0);
   return VAR_12;
  }

  VAR_28->capacity = VAR_23;



  VAR_28->max_log_blks = ((VAR_28->capacity >> (VAR_28->pageshift + VAR_28->blockshift)) / 256) * 250;



  VAR_23 = (VAR_23 / 256) * 250;

  VAR_23 /= VAR_5;
  VAR_23--;

  ((__be32 *) VAR_22)[0] = FUNC_1(VAR_23);
  ((__be32 *) VAR_22)[1] = FUNC_1(VAR_5);
  FUNC_14(VAR_22, 8, VAR_17);

  FUNC_8(VAR_18);

  return VAR_13;
 }

 if (VAR_17->cmnd[0] == VAR_4) {

  FUNC_4(VAR_22, VAR_21, sizeof VAR_21);
  VAR_22[3] = (VAR_28->read_only || VAR_28->force_read_only) ? 0x80 : 0;
  FUNC_14(VAR_22, sizeof(VAR_21), VAR_17);

  if ( (VAR_17->cmnd[2] & 0x3F) == 0x01 ) {
   FUNC_0(
     "SDDR55: Dummy up request for mode page 1\n");
   return VAR_13;

  } else if ( (VAR_17->cmnd[2] & 0x3F) == 0x3F ) {
   FUNC_0(
     "SDDR55: Dummy up request for all mode pages\n");
   return VAR_13;
  }

  FUNC_11 (5, 0x24, 0);
  return VAR_12;
 }

 if (VAR_17->cmnd[0] == VAR_0) {

  FUNC_0(
    "SDDR55: %s medium removal. Not that I can do"
    " anything about it...\n",
    (VAR_17->cmnd[4]&0x03) ? "Prevent" : "Allow");

  return VAR_13;

 }

 if (VAR_17->cmnd[0] == VAR_6 || VAR_17->cmnd[0] == VAR_14) {

  VAR_26 = FUNC_12(VAR_17->cmnd[3], VAR_17->cmnd[2]);
  VAR_26 <<= 16;
  VAR_26 |= FUNC_12(VAR_17->cmnd[5], VAR_17->cmnd[4]);
  VAR_27 = FUNC_12(VAR_17->cmnd[8], VAR_17->cmnd[7]);

  VAR_26 <<= VAR_28->smallpageshift;



  VAR_24 = VAR_26 >> VAR_28->blockshift;
  VAR_26 = VAR_26 & VAR_28->blockmask;



  if (VAR_24 >= VAR_28->max_log_blks) {

   FUNC_0("Error: Requested LBA %04X exceeds maximum "
     "block %04X\n", VAR_24, VAR_28->max_log_blks-1);

   FUNC_11 (5, 0x24, 0);

   return VAR_12;
  }

  VAR_25 = VAR_28->lba_to_pba[VAR_24];

  if (VAR_17->cmnd[0] == VAR_14) {
   FUNC_0("WRITE_10: write block %04X (LBA %04X) page %01X"
    " pages %d\n",
    VAR_25, VAR_24, VAR_26, VAR_27);

   return FUNC_10(VAR_18, VAR_24, VAR_26, VAR_27);
  } else {
   FUNC_0("READ_10: read block %04X (LBA %04X) page %01X"
    " pages %d\n",
    VAR_25, VAR_24, VAR_26, VAR_27);

   return FUNC_7(VAR_18, VAR_24, VAR_26, VAR_27);
  }
 }


 if (VAR_17->cmnd[0] == VAR_10) {
  return VAR_13;
 }

 if (VAR_17->cmnd[0] == VAR_9) {
  return VAR_13;
 }

 FUNC_11 (5, 0x20, 0);

 return VAR_12;
}
