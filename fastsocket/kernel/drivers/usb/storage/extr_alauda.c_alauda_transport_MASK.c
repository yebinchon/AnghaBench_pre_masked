
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct us_data {unsigned char* iobuf; scalar_t__ extra; } ;
struct scsi_cmnd {unsigned int* cmnd; } ;
struct alauda_info {unsigned char sense_key; unsigned char sense_asc; unsigned char sense_ascq; } ;
typedef int inquiry_response ;
typedef int __be32 ;
struct TYPE_2__ {unsigned int capacity; unsigned int zoneshift; unsigned int blockshift; unsigned int pageshift; unsigned int uzonesize; unsigned int blocksize; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 TYPE_1__ FUNC_0 (struct us_data*) ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (char*,...) ;
 unsigned int VAR_8 ;
 int FUNC_2 (struct us_data*) ;
 int FUNC_3 (struct us_data*,unsigned int,unsigned int) ;
 int FUNC_4 (struct us_data*,unsigned int,unsigned int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct us_data*,unsigned char*,int) ;
 int FUNC_7 (unsigned char*,unsigned char*,int) ;
 int FUNC_8 (unsigned char*,int ,int) ;
 unsigned int FUNC_9 (unsigned int,unsigned int) ;
 int FUNC_10 (unsigned char*,int,struct scsi_cmnd*) ;

__attribute__((used)) static int FUNC_11(struct scsi_cmnd *VAR_9, struct us_data *VAR_10)
{
 int VAR_11;
 struct alauda_info *VAR_12 = (struct alauda_info *) VAR_10->extra;
 unsigned char *VAR_13 = VAR_10->iobuf;
 static unsigned char VAR_14[36] = {
  0x00, 0x80, 0x00, 0x01, 0x1F, 0x00, 0x00, 0x00
 };

 if (VAR_9->cmnd[0] == VAR_1) {
  FUNC_1("alauda_transport: INQUIRY. "
   "Returning bogus response.\n");
  FUNC_7(VAR_13, VAR_14, sizeof(VAR_14));
  FUNC_6(VAR_10, VAR_13, 36);
  return VAR_7;
 }

 if (VAR_9->cmnd[0] == VAR_5) {
  FUNC_1("alauda_transport: TEST_UNIT_READY.\n");
  return FUNC_2(VAR_10);
 }

 if (VAR_9->cmnd[0] == VAR_3) {
  unsigned int VAR_15;
  unsigned long VAR_16;

  VAR_11 = FUNC_2(VAR_10);
  if (VAR_11 != VAR_7)
   return VAR_11;

  VAR_15 = FUNC_0(VAR_10).capacity >> (FUNC_0(VAR_10).zoneshift
   + FUNC_0(VAR_10).blockshift + FUNC_0(VAR_10).pageshift);

  VAR_16 = VAR_15 * FUNC_0(VAR_10).uzonesize
   * FUNC_0(VAR_10).blocksize;


  ((__be32 *) VAR_13)[0] = FUNC_5(VAR_16 - 1);
  ((__be32 *) VAR_13)[1] = FUNC_5(512);

  FUNC_10(VAR_13, 8, VAR_9);
  return VAR_7;
 }

 if (VAR_9->cmnd[0] == VAR_2) {
  unsigned int VAR_17, VAR_18;

  VAR_11 = FUNC_2(VAR_10);
  if (VAR_11 != VAR_7)
   return VAR_11;

  VAR_17 = FUNC_9(VAR_9->cmnd[3], VAR_9->cmnd[2]);
  VAR_17 <<= 16;
  VAR_17 |= FUNC_9(VAR_9->cmnd[5], VAR_9->cmnd[4]);
  VAR_18 = FUNC_9(VAR_9->cmnd[8], VAR_9->cmnd[7]);

  FUNC_1("alauda_transport: READ_10: page %d pagect %d\n",
     VAR_17, VAR_18);

  return FUNC_3(VAR_10, VAR_17, VAR_18);
 }

 if (VAR_9->cmnd[0] == VAR_8) {
  unsigned int VAR_19, VAR_20;

  VAR_11 = FUNC_2(VAR_10);
  if (VAR_11 != VAR_7)
   return VAR_11;

  VAR_19 = FUNC_9(VAR_9->cmnd[3], VAR_9->cmnd[2]);
  VAR_19 <<= 16;
  VAR_19 |= FUNC_9(VAR_9->cmnd[5], VAR_9->cmnd[4]);
  VAR_20 = FUNC_9(VAR_9->cmnd[8], VAR_9->cmnd[7]);

  FUNC_1("alauda_transport: WRITE_10: page %d pagect %d\n",
     VAR_19, VAR_20);

  return FUNC_4(VAR_10, VAR_19, VAR_20);
 }

 if (VAR_9->cmnd[0] == VAR_4) {
  FUNC_1("alauda_transport: REQUEST_SENSE.\n");

  FUNC_8(VAR_13, 0, 18);
  VAR_13[0] = 0xF0;
  VAR_13[2] = VAR_12->sense_key;
  VAR_13[7] = 11;
  VAR_13[12] = VAR_12->sense_asc;
  VAR_13[13] = VAR_12->sense_ascq;
  FUNC_10(VAR_13, 18, VAR_9);

  return VAR_7;
 }

 if (VAR_9->cmnd[0] == VAR_0) {


  return VAR_7;
 }

 FUNC_1("alauda_transport: Gah! Unknown command: %d (0x%x)\n",
  VAR_9->cmnd[0], VAR_9->cmnd[0]);
 VAR_12->sense_key = 0x05;
 VAR_12->sense_asc = 0x20;
 VAR_12->sense_ascq = 0x00;
 return VAR_6;
}
