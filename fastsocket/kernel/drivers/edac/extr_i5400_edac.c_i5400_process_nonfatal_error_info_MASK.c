
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem_ctl_info {int dummy; } ;
struct i5400_error_info {int ferr_nf_fbd; int redmemb; } ;
typedef int msg ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*,int,...) ;
 int FUNC_3 (struct mem_ctl_info*,int,int,char*) ;
 int * VAR_6 ;
 int FUNC_4 (int) ;
 int FUNC_5 (unsigned long*,int ) ;
 unsigned long FUNC_6 (int) ;
 int FUNC_7 (struct mem_ctl_info*,int ,char*,int,unsigned long,int ) ;
 int FUNC_8 (struct mem_ctl_info*,struct i5400_error_info*,unsigned long) ;
 char* FUNC_9 (int) ;
 int FUNC_10 (struct i5400_error_info*) ;
 int FUNC_11 (struct i5400_error_info*) ;
 int FUNC_12 (struct i5400_error_info*) ;
 int FUNC_13 (struct i5400_error_info*) ;
 int FUNC_14 (struct i5400_error_info*) ;
 int FUNC_15 (char*,int,char*,int,int,char*,int,int,unsigned long,int ) ;

__attribute__((used)) static void FUNC_16(struct mem_ctl_info *VAR_7,
     struct i5400_error_info *VAR_8)
{
 char VAR_9[VAR_0 + 1 + 90 + 80];
 unsigned long VAR_10;
 int VAR_11;
 int VAR_12;
 int VAR_13;
 int VAR_14;
 int VAR_15;
 int VAR_16, VAR_17;
 int VAR_18;


 VAR_10 = FUNC_6(VAR_8->ferr_nf_fbd & VAR_4);
 if (!VAR_10)
  return;



 if (VAR_10 & (VAR_3 | VAR_2)) {
  FUNC_8(VAR_7, VAR_8, VAR_10);
  return;
 }


 if (VAR_10 & VAR_1) {
  FUNC_2("\tCorrected bits= 0x%lx\n", VAR_10);

  VAR_11 = FUNC_4(VAR_8->ferr_nf_fbd);

  VAR_12 = 0;
  if (FUNC_1(VAR_8->redmemb))
   VAR_12 = 1;



  VAR_12 += VAR_11;

  VAR_13 = FUNC_10(VAR_8);
  VAR_14 = FUNC_12(VAR_8);
  VAR_15 = FUNC_14(VAR_8);
  VAR_16 = FUNC_13(VAR_8);
  VAR_17 = FUNC_11(VAR_8);


  VAR_18 = FUNC_5(&VAR_10, FUNC_0(VAR_6));

  FUNC_2("\t\tCSROW= %d Channel= %d  (Branch %d "
   "DRAM Bank= %d rdwr= %s ras= %d cas= %d)\n",
   VAR_14, VAR_12, VAR_11 >> 1, VAR_13,
   FUNC_9(VAR_15), VAR_16, VAR_17);


  FUNC_15(VAR_9, sizeof(VAR_9),
    "Corrected error (Branch=%d DRAM-Bank=%d RDWR=%s "
    "RAS=%d CAS=%d, CE Err=0x%lx (%s))",
    VAR_11 >> 1, VAR_13, FUNC_9(VAR_15), VAR_16, VAR_17,
    VAR_10, VAR_6[VAR_18]);


  FUNC_3(VAR_7, VAR_14, VAR_12, VAR_9);

  return;
 }


 VAR_18 = FUNC_5(&VAR_10, FUNC_0(VAR_6));

 VAR_11 = FUNC_4(VAR_8->ferr_nf_fbd);

 FUNC_7(VAR_7, VAR_5,
   "Non-Fatal misc error (Branch=%d Err=%#lx (%s))",
   VAR_11 >> 1, VAR_10, VAR_6[VAR_18]);
}
