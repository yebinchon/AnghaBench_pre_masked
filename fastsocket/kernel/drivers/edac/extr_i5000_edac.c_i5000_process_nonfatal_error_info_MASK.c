
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mem_ctl_info {int dummy; } ;
struct i5000_error_info {int ferr_nf_fbd; int recmemb; int recmema; int redmemb; int nrecmemb; int nrecmema; } ;
typedef int msg ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (char*,int,...) ;
 int FUNC_13 (struct mem_ctl_info*,int,int,char*) ;
 int FUNC_14 (struct mem_ctl_info*,int,int,int,char*) ;
 int VAR_8 ;
 int FUNC_15 (char*,int,char*,int,int,char*,...) ;

__attribute__((used)) static void FUNC_16(struct mem_ctl_info *VAR_9,
     struct i5000_error_info *VAR_10,
     int VAR_11)
{
 char VAR_12[VAR_0 + 1 + 170];
 char *VAR_13 = ((void*)0);
 u32 VAR_14;
 u32 VAR_15;
 u32 VAR_16;
 u32 VAR_17;
 int VAR_18;
 int VAR_19;
 int VAR_20;
 int VAR_21;
 int VAR_22;
 int VAR_23, VAR_24;


 VAR_14 = (VAR_10->ferr_nf_fbd & VAR_3);
 if (!VAR_14)
  return;


 VAR_15 = VAR_14 & VAR_7;
 if (VAR_15) {
  FUNC_12("\tUncorrected bits= 0x%x\n", VAR_15);

  VAR_18 = FUNC_0(VAR_10->ferr_nf_fbd);





  VAR_19 = VAR_18 & 2;

  VAR_20 = FUNC_1(VAR_10->nrecmema);
  VAR_21 = FUNC_3(VAR_10->nrecmema);
  VAR_22 = FUNC_5(VAR_10->nrecmema);
  VAR_23 = FUNC_4(VAR_10->nrecmemb);
  VAR_24 = FUNC_2(VAR_10->nrecmemb);

  FUNC_12
   ("\t\tCSROW= %d  Channels= %d,%d  (Branch= %d "
   "DRAM Bank= %d rdwr= %s ras= %d cas= %d)\n",
   VAR_21, VAR_19, VAR_19 + 1, VAR_18 >> 1, VAR_20,
   VAR_22 ? "Write" : "Read", VAR_23, VAR_24);

  switch (VAR_15) {
  case 145:
   VAR_13 = "Non-Aliased Uncorrectable Patrol Data ECC";
   break;
  case 146:
   VAR_13 = "Non-Aliased Uncorrectable Spare-Copy "
     "Data ECC";
   break;
  case 147:
   VAR_13 = "Non-Aliased Uncorrectable Mirrored Demand "
     "Data ECC";
   break;
  case 128:
   VAR_13 = "Non-Aliased Uncorrectable Non-Mirrored "
     "Demand Data ECC";
   break;
  case 129:
   VAR_13 = "Aliased Uncorrectable Patrol Data ECC";
   break;
  case 130:
   VAR_13 = "Aliased Uncorrectable Spare-Copy Data ECC";
   break;
  case 131:
   VAR_13 = "Aliased Uncorrectable Mirrored Demand "
     "Data ECC";
   break;
  case 132:
   VAR_13 = "Aliased Uncorrectable Non-Mirrored Demand "
     "Data ECC";
   break;
  case 133:
   VAR_13 = "Uncorrectable Data ECC on Replay";
   break;
  }


  FUNC_15(VAR_12, sizeof(VAR_12),
    "(Branch=%d DRAM-Bank=%d RDWR=%s RAS=%d "
    "CAS=%d, UE Err=0x%x (%s))",
    VAR_18 >> 1, VAR_20, VAR_22 ? "Write" : "Read", VAR_23, VAR_24,
    VAR_15, VAR_13);


  FUNC_14(VAR_9, VAR_21, VAR_19, VAR_19 + 1, VAR_12);
 }


 VAR_16 = VAR_14 & VAR_1;
 if (VAR_16) {
  FUNC_12("\tCorrected bits= 0x%x\n", VAR_16);

  VAR_18 = FUNC_0(VAR_10->ferr_nf_fbd);

  VAR_19 = 0;
  if (FUNC_8(VAR_10->redmemb))
   VAR_19 = 1;



  VAR_19 += VAR_18;

  VAR_20 = FUNC_6(VAR_10->recmema);
  VAR_21 = FUNC_9(VAR_10->recmema);
  VAR_22 = FUNC_11(VAR_10->recmema);
  VAR_23 = FUNC_10(VAR_10->recmemb);
  VAR_24 = FUNC_7(VAR_10->recmemb);

  FUNC_12("\t\tCSROW= %d Channel= %d  (Branch %d "
   "DRAM Bank= %d rdwr= %s ras= %d cas= %d)\n",
   VAR_21, VAR_19, VAR_18 >> 1, VAR_20,
   VAR_22 ? "Write" : "Read", VAR_23, VAR_24);

  switch (VAR_16) {
  case 141:
   VAR_13 = "Correctable Non-Mirrored Demand Data ECC";
   break;
  case 140:
   VAR_13 = "Correctable Mirrored Demand Data ECC";
   break;
  case 139:
   VAR_13 = "Correctable Spare-Copy Data ECC";
   break;
  case 138:
   VAR_13 = "Correctable Patrol Data ECC";
   break;
  }


  FUNC_15(VAR_12, sizeof(VAR_12),
    "(Branch=%d DRAM-Bank=%d RDWR=%s RAS=%d "
    "CAS=%d, CE Err=0x%x (%s))", VAR_18 >> 1, VAR_20,
    VAR_22 ? "Write" : "Read", VAR_23, VAR_24, VAR_16,
    VAR_13);


  FUNC_13(VAR_9, VAR_21, VAR_19, VAR_12);
 }

 if (!VAR_8)
  return;

 VAR_17 = VAR_14 & (VAR_4 | VAR_5 |
       VAR_6 | VAR_2);
 if (VAR_17) {
  switch (VAR_17) {
  case 144:
   VAR_13 = "Non-Retry or Redundant Retry FBD Memory "
     "Alert or Redundant Fast Reset Timeout";
   break;
  case 143:
   VAR_13 = "Non-Retry or Redundant Retry FBD "
     "Configuration Alert";
   break;
  case 142:
   VAR_13 = "Non-Retry or Redundant Retry FBD "
     "Northbound CRC error on read data";
   break;
  case 137:
   VAR_13 = "FBD Northbound CRC error on "
     "FBD Sync Status";
   break;
  case 136:
   VAR_13 = "SPD protocol error";
   break;
  case 135:
   VAR_13 = "DIMM-spare copy started";
   break;
  case 134:
   VAR_13 = "DIMM-spare copy completed";
   break;
  }
  VAR_18 = FUNC_0(VAR_10->ferr_nf_fbd);


  FUNC_15(VAR_12, sizeof(VAR_12),
    "(Branch=%d Err=%#x (%s))", VAR_18 >> 1,
    VAR_17, VAR_13);


  FUNC_13(VAR_9, 0, 0, VAR_12);
 }
}
