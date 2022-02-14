
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct us_data {unsigned char* iobuf; int srb; } ;
struct scatterlist {int dummy; } ;
struct datafab_info {int lun; int ssize; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,unsigned char,unsigned char) ;
 int FUNC_1 (struct us_data*,unsigned char*,int) ;
 int FUNC_2 (struct us_data*,unsigned char*,int) ;
 int FUNC_3 (struct us_data*,struct datafab_info*) ;
 int FUNC_4 (unsigned char*) ;
 unsigned char* FUNC_5 (unsigned int,int ) ;
 void* FUNC_6 (unsigned int,unsigned int) ;
 int FUNC_7 (unsigned char*,int,int ,struct scatterlist**,unsigned int*,int ) ;

__attribute__((used)) static int FUNC_8(struct us_data *VAR_5,
         struct datafab_info *VAR_6,
         u32 VAR_7,
         u32 VAR_8)
{
 unsigned char *VAR_9 = VAR_5->iobuf;
 unsigned char *VAR_10 = VAR_5->iobuf;
 unsigned char *VAR_11;
 unsigned char VAR_12;
 unsigned int VAR_13, VAR_14;
 int VAR_15, VAR_16;
 unsigned int VAR_17 = 0;
 struct scatterlist *VAR_18 = ((void*)0);






 if (VAR_8 > 0x0FFFFFFF)
  return VAR_2;

 if (VAR_6->lun == -1) {
  VAR_16 = FUNC_3(VAR_5, VAR_6);
  if (VAR_16 != VAR_3)
   return VAR_16;
 }

 VAR_13 = VAR_8 * VAR_6->ssize;





 VAR_14 = FUNC_6(VAR_13, 65536u);
 VAR_11 = FUNC_5(VAR_14, VAR_1);
 if (VAR_11 == ((void*)0))
  return VAR_2;

 do {



  VAR_15 = FUNC_6(VAR_13, VAR_14);
  VAR_12 = (VAR_15 / VAR_6->ssize) & 0xff;


  FUNC_7(VAR_11, VAR_15, VAR_5->srb,
    &VAR_18, &VAR_17, VAR_0);

  VAR_9[0] = 0;
  VAR_9[1] = VAR_12;
  VAR_9[2] = VAR_7 & 0xFF;
  VAR_9[3] = (VAR_7 >> 8) & 0xFF;
  VAR_9[4] = (VAR_7 >> 16) & 0xFF;

  VAR_9[5] = 0xE0 + (VAR_6->lun << 4);
  VAR_9[5] |= (VAR_7 >> 24) & 0x0F;
  VAR_9[6] = 0x30;
  VAR_9[7] = 0x02;


  VAR_16 = FUNC_2(VAR_5, VAR_9, 8);
  if (VAR_16 != VAR_4)
   goto leave;


  VAR_16 = FUNC_2(VAR_5, VAR_11, VAR_15);
  if (VAR_16 != VAR_4)
   goto leave;


  VAR_16 = FUNC_1(VAR_5, VAR_10, 2);
  if (VAR_16 != VAR_4)
   goto leave;

  if (VAR_10[0] != 0x50 && VAR_10[1] != 0) {
   FUNC_0("datafab_write_data:  Gah! "
      "write return code: %02x %02x\n",
      VAR_10[0], VAR_10[1]);
   VAR_16 = VAR_2;
   goto leave;
  }

  VAR_7 += VAR_12;
  VAR_13 -= VAR_15;
 } while (VAR_13 > 0);

 FUNC_4(VAR_11);
 return VAR_3;

 leave:
 FUNC_4(VAR_11);
 return VAR_2;
}
