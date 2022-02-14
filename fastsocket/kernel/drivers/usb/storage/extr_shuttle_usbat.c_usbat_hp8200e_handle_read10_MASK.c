
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct us_data {int dummy; } ;
struct scsi_cmnd {unsigned int transfersize; } ;
struct scatterlist {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char FUNC_0 (unsigned int) ;
 unsigned char FUNC_1 (unsigned int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (char*,unsigned int) ;
 int FUNC_3 (unsigned char*) ;
 unsigned char* FUNC_4 (unsigned int,int ) ;
 unsigned int FUNC_5 (unsigned int,unsigned int) ;
 unsigned int FUNC_6 (struct scsi_cmnd*) ;
 int FUNC_7 (struct scsi_cmnd*) ;
 unsigned char* FUNC_8 (struct scsi_cmnd*) ;
 unsigned int FUNC_9 (unsigned char,unsigned char) ;
 unsigned int VAR_11 ;
 int FUNC_10 (unsigned char*,unsigned int,struct scsi_cmnd*,struct scatterlist**,unsigned int*,int ) ;
 int FUNC_11 (struct us_data*,int ,unsigned char*,unsigned char*,int,int ,int ,int,int,int ,unsigned char*,unsigned int,int ,int) ;

__attribute__((used)) static int FUNC_12(struct us_data *VAR_12,
           unsigned char *VAR_13,
           unsigned char *VAR_14,
           struct scsi_cmnd *VAR_15)
{
 int VAR_16 = VAR_10;
 unsigned char *VAR_17;
 unsigned int VAR_18;
 unsigned int VAR_19;
 unsigned int VAR_20 = 0;
 struct scatterlist *VAR_21 = ((void*)0);

 FUNC_2("handle_read10: transfersize %d\n",
  VAR_15->transfersize);

 if (FUNC_6(VAR_15) < 0x10000) {

  VAR_16 = FUNC_11(VAR_12, VAR_4,
   VAR_13, VAR_14, 19,
   VAR_5, VAR_6, 0xFD,
   (VAR_8 | VAR_7),
   VAR_0,
   FUNC_8(VAR_15),
   FUNC_6(VAR_15), FUNC_7(VAR_15), 1);

  return VAR_16;
 }
 if (VAR_14[7+0] == VAR_2) {
  VAR_18 = FUNC_9(VAR_14[7+9], VAR_14[7+8]);
  VAR_18 <<= 16;
  VAR_18 |= VAR_14[7+7];
  FUNC_2("handle_read10: GPCMD_READ_CD: len %d\n", VAR_18);
  VAR_15->transfersize = FUNC_6(VAR_15)/VAR_18;
 }

 if (!VAR_15->transfersize) {
  VAR_15->transfersize = 2048;
  FUNC_2("handle_read10: transfersize 0, forcing %d\n",
   VAR_15->transfersize);
 }







 VAR_18 = (65535/VAR_15->transfersize) * VAR_15->transfersize;
 FUNC_2("Max read is %d bytes\n", VAR_18);
 VAR_18 = FUNC_5(VAR_18, FUNC_6(VAR_15));
 VAR_17 = FUNC_4(VAR_18, VAR_1);
 if (VAR_17 == ((void*)0))
  return VAR_9;
 VAR_19 = FUNC_9(VAR_14[7+3], VAR_14[7+2]);
 VAR_19 <<= 16;
 VAR_19 |= FUNC_9(VAR_14[7+5], VAR_14[7+4]);
 VAR_11 = 0;

 while (VAR_11 != FUNC_6(VAR_15)) {

  if (VAR_18 > FUNC_6(VAR_15) - VAR_11)
   VAR_18 = FUNC_6(VAR_15) - VAR_11;

  VAR_14[3] = VAR_18&0xFF;
  VAR_14[4] = (VAR_18>>8)&0xFF;



  VAR_14[7+2] = FUNC_1(VAR_19>>16);
  VAR_14[7+3] = FUNC_0(VAR_19>>16);
  VAR_14[7+4] = FUNC_1(VAR_19&0xFFFF);
  VAR_14[7+5] = FUNC_0(VAR_19&0xFFFF);
  if (VAR_14[7+0] == VAR_2)
   VAR_14[7+6] = 0;
  VAR_14[7+7] = FUNC_1(VAR_18 / VAR_15->transfersize);
  VAR_14[7+8] = FUNC_0(VAR_18 / VAR_15->transfersize);

  VAR_16 = FUNC_11(VAR_12, VAR_4,
   VAR_13, VAR_14, 19,
   VAR_5, VAR_6, 0xFD,
   (VAR_8 | VAR_7),
   VAR_0,
   VAR_17,
   VAR_18, 0, 1);

  if (VAR_16 != VAR_10)
   break;


  FUNC_10(VAR_17, VAR_18, VAR_15,
     &VAR_21, &VAR_20, VAR_3);



  VAR_11 += VAR_18;
  VAR_19 += VAR_18 / VAR_15->transfersize;

 }

 FUNC_3(VAR_17);
 return VAR_16;
}
