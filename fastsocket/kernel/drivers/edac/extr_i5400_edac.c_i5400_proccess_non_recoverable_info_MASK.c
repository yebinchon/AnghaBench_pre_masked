
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem_ctl_info {int dummy; } ;
struct i5400_error_info {int ferr_fat_fbd; } ;
typedef int msg ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_1 (char*,int,int,int,int,int,int,char*,int,int) ;
 int FUNC_2 (struct mem_ctl_info*,int,int,int,char*) ;
 int * VAR_3 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (unsigned long*,int ) ;
 int FUNC_5 (struct i5400_error_info*) ;
 int FUNC_6 (struct i5400_error_info*) ;
 int FUNC_7 (struct i5400_error_info*) ;
 int FUNC_8 (struct i5400_error_info*) ;
 int FUNC_9 (struct i5400_error_info*) ;
 int FUNC_10 (struct i5400_error_info*) ;
 char* FUNC_11 (int) ;
 int FUNC_12 (char*,int,char*,char*,int,int,int,char*,int,int,char*,unsigned long,int ) ;

__attribute__((used)) static void FUNC_13(struct mem_ctl_info *VAR_4,
        struct i5400_error_info *VAR_5,
        unsigned long VAR_6)
{
 char VAR_7[VAR_0 + 1 + 90 + 80];
 int VAR_8;
 int VAR_9;
 int VAR_10;
 int VAR_11;
 int VAR_12;
 int VAR_13;
 int VAR_14, VAR_15;
 int VAR_16;
 char *VAR_17 = ((void*)0);

 if (!VAR_6)
  return;

 if (VAR_6 & VAR_1)
  VAR_17 = "FATAL";
 else if (VAR_6 & VAR_2)
  VAR_17 = "NON-FATAL uncorrected";
 else
  VAR_17 = "NON-FATAL recoverable";



 VAR_8 = FUNC_3(VAR_5->ferr_fat_fbd);
 VAR_9 = VAR_8;


 VAR_10 = FUNC_5(VAR_5);
 VAR_12 = FUNC_8(VAR_5);
 VAR_11 = FUNC_6(VAR_5);
 VAR_13 = FUNC_10(VAR_5);
 VAR_14 = FUNC_9(VAR_5);
 VAR_15 = FUNC_7(VAR_5);

 FUNC_1("\t\tCSROW= %d  Channels= %d,%d  (Branch= %d "
  "DRAM Bank= %d Buffer ID = %d rdwr= %s ras= %d cas= %d)\n",
  VAR_12, VAR_9, VAR_9 + 1, VAR_8 >> 1, VAR_10,
  VAR_11, FUNC_11(VAR_13), VAR_14, VAR_15);


 VAR_16 = FUNC_4(&VAR_6, FUNC_0(VAR_3));


 FUNC_12(VAR_7, sizeof(VAR_7),
   "%s (Branch=%d DRAM-Bank=%d Buffer ID = %d RDWR=%s "
   "RAS=%d CAS=%d %s Err=0x%lx (%s))",
   VAR_17, VAR_8 >> 1, VAR_10, VAR_11, FUNC_11(VAR_13), VAR_14, VAR_15,
   VAR_17, VAR_6, VAR_3[VAR_16]);


 FUNC_2(VAR_4, VAR_12, VAR_9, VAR_9 + 1, VAR_7);
}
