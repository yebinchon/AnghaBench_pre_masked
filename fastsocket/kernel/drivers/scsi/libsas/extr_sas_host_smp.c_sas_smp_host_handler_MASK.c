
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sas_ha_struct {int num_phys; } ;
struct request {int resid_len; int bio; } ;
struct Scsi_Host {TYPE_1__* hostt; } ;
struct TYPE_2__ {int* name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int const VAR_6 ;
 int const VAR_7 ;
 struct sas_ha_struct* FUNC_0 (struct Scsi_Host*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;

 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int const FUNC_3 (struct request*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int*) ;
 int* FUNC_6 (int ,int ) ;
 int FUNC_7 (int*,int ) ;
 int* FUNC_8 (int const,int ) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int const FUNC_11 (int const,unsigned int) ;
 int FUNC_12 (int*,...) ;
 int FUNC_13 (struct sas_ha_struct*,int*,int) ;
 int FUNC_14 (struct sas_ha_struct*,int*,int,int,int,int*) ;
 int FUNC_15 (struct sas_ha_struct*,int,int,int,int,int*) ;
 int FUNC_16 (struct sas_ha_struct*,int*,int) ;
 int FUNC_17 (int ,struct Scsi_Host*,char*) ;

int FUNC_18(struct Scsi_Host *VAR_13, struct request *VAR_14,
    struct request *VAR_15)
{
 u8 *VAR_16 = ((void*)0), *VAR_17 = ((void*)0), *VAR_18;
 struct sas_ha_struct *VAR_19 = FUNC_0(VAR_13);
 int VAR_20 = -VAR_0;


 if (FUNC_3(VAR_14) < 8 || FUNC_3(VAR_15) < 8)
  goto out;

 if (FUNC_1(VAR_14->bio) + FUNC_3(VAR_14) > VAR_5 ||
     FUNC_1(VAR_15->bio) + FUNC_3(VAR_15) > VAR_5) {
  FUNC_17(VAR_3, VAR_13,
   "SMP request/response frame crosses page boundary");
  goto out;
 }

 VAR_16 = FUNC_8(FUNC_3(VAR_14), VAR_2);



 VAR_17 = FUNC_8(FUNC_11(FUNC_3(VAR_15), 128U), VAR_2);

 if (!VAR_16 || !VAR_17) {
  VAR_20 = -VAR_1;
  goto out;
 }

 FUNC_9();
 VAR_18 = FUNC_6(FUNC_2(VAR_14->bio), VAR_4) + FUNC_1(VAR_14->bio);
 FUNC_12(VAR_16, VAR_18, FUNC_3(VAR_14));
 FUNC_7(VAR_18 - FUNC_1(VAR_14->bio), VAR_4);
 FUNC_10();

 if (VAR_16[0] != VAR_8)
  goto out;



 VAR_20 = 0;


 VAR_17[0] = VAR_9;
 VAR_17[1] = VAR_16[1];
 VAR_17[2] = VAR_11;

 switch (VAR_16[1]) {
 case 133:
  VAR_14->resid_len -= 8;
  VAR_15->resid_len -= 32;
  VAR_17[2] = VAR_10;
  VAR_17[9] = VAR_19->num_phys;
  break;

 case 132:
  VAR_14->resid_len -= 8;
  VAR_15->resid_len -= 64;
  VAR_17[2] = VAR_10;
  FUNC_12(VAR_17 + 12, VAR_13->hostt->name,
         VAR_7);
  FUNC_12(VAR_17 + 20, "libsas virt phy",
         VAR_6);
  break;

 case 134:

  break;

 case 137:
  VAR_14->resid_len -= 16;
  if ((int)VAR_14->resid_len < 0) {
   VAR_14->resid_len = 0;
   VAR_20 = -VAR_0;
   goto out;
  }
  VAR_15->resid_len -= 56;
  FUNC_13(VAR_19, VAR_17, VAR_16[9]);
  break;

 case 131:


  break;

 case 130:
  VAR_14->resid_len -= 16;
  if ((int)VAR_14->resid_len < 0) {
   VAR_14->resid_len = 0;
   VAR_20 = -VAR_0;
   goto out;
  }
  VAR_15->resid_len -= 60;
  FUNC_16(VAR_19, VAR_17, VAR_16[9]);
  break;

 case 129:

  break;

 case 128: {

  const int VAR_21 = 11;
  int VAR_22 = VAR_16[4];

  if (FUNC_3(VAR_14) < VAR_21 + VAR_22 * 4 ||
      VAR_14->resid_len < VAR_21 + VAR_22 * 4) {
   VAR_17[2] = VAR_12;
   break;
  }

  VAR_22 = FUNC_14(VAR_19, VAR_17, VAR_16[2],
         VAR_16[3], VAR_22, &VAR_16[8]);
  VAR_14->resid_len -= VAR_21 + VAR_22 * 4;
  VAR_15->resid_len -= 8;
  break;
 }

 case 138:

  break;

 case 136:
  VAR_14->resid_len -= 44;
  if ((int)VAR_14->resid_len < 0) {
   VAR_14->resid_len = 0;
   VAR_20 = -VAR_0;
   goto out;
  }
  VAR_15->resid_len -= 8;
  FUNC_15(VAR_19, VAR_16[9], VAR_16[10],
    VAR_16[32] >> 4, VAR_16[33] >> 4,
    VAR_17);
  break;

 case 135:

  break;

 default:

  break;
 }

 FUNC_9();
 VAR_18 = FUNC_6(FUNC_2(VAR_15->bio), VAR_4) + FUNC_1(VAR_15->bio);
 FUNC_12(VAR_18, VAR_17, FUNC_3(VAR_15));
 FUNC_4(FUNC_2(VAR_15->bio));
 FUNC_7(VAR_18 - FUNC_1(VAR_15->bio), VAR_4);
 FUNC_10();

 out:
 FUNC_5(VAR_16);
 FUNC_5(VAR_17);
 return VAR_20;
}
