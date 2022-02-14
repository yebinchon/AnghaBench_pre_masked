
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct sbridge_pvt {int** csrow_map; } ;
struct mem_ctl_info {struct sbridge_pvt* pvt_info; } ;
struct mce {scalar_t__ addr; int cpu; int status; int mcgstatus; } ;


 int FUNC_0 (int ,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (struct mem_ctl_info*,char*) ;
 int FUNC_3 (struct mem_ctl_info*,int,int ,char*) ;
 int FUNC_4 (struct mem_ctl_info*,int,int ,int ,char*) ;
 long FUNC_5 (long*,int ) ;
 struct mem_ctl_info* FUNC_6 (int) ;
 int FUNC_7 (struct mem_ctl_info*,scalar_t__,int*,long*,int*,char*) ;
 char* FUNC_8 (int ,char*,int,char*,char*,char*,char*,char*,int ,int,int,int,long long,int,long,long,int) ;
 int FUNC_9 (char*) ;

__attribute__((used)) static void FUNC_10(struct mem_ctl_info *VAR_2,
        const struct mce *VAR_3)
{
 struct mem_ctl_info *VAR_4;
 struct sbridge_pvt *VAR_5 = VAR_2->pvt_info;
 char *VAR_6, *VAR_7, *VAR_8, *VAR_9;
 bool VAR_10 = FUNC_0(VAR_3->mcgstatus, 0, 0);
 bool VAR_11 = FUNC_0(VAR_3->status, 62, 62);
 bool VAR_12 = FUNC_0(VAR_3->status, 61, 61);
 bool VAR_13 = FUNC_0(VAR_3->status, 56, 56);
 u32 VAR_14 = FUNC_0(VAR_3->status, 38, 52);
 u32 VAR_15 = FUNC_0(VAR_3->status, 16, 31);
 u32 VAR_16 = FUNC_0(VAR_3->status, 0, 15);
 u32 VAR_17 = FUNC_0(VAR_3->status, 0, 3);
 u32 VAR_18 = FUNC_0(VAR_3->status, 4, 6);
 long VAR_19, VAR_20;
 u8 VAR_21, VAR_22;
 int VAR_23, VAR_24, VAR_25;
 char *VAR_26 = "Unknown";

 if (VAR_10)
  VAR_6 = "NON_FATAL";
 else
  VAR_6 = "FATAL";
 if (! ((VAR_16 & 0xef80) == 0x80)) {
  VAR_7 = "Can't parse: it is not a mem";
 } else {
  switch (VAR_18) {
  case 0:
   VAR_7 = "generic undef request";
   break;
  case 1:
   VAR_7 = "memory read";
   break;
  case 2:
   VAR_7 = "memory write";
   break;
  case 3:
   VAR_7 = "addr/cmd";
   break;
  case 4:
   VAR_7 = "memory scrubbing";
   break;
  default:
   VAR_7 = "reserved";
   break;
  }
 }

 VAR_24 = FUNC_7(VAR_2, VAR_3->addr, &VAR_22,
       &VAR_19, &VAR_21, VAR_26);
 if (VAR_24 < 0)
  return;
 VAR_4 = FUNC_6(VAR_22);
 if (!VAR_4) {
  FUNC_2(VAR_2, "Error: socket got corrupted!");
  return;
 }
 VAR_2 = VAR_4;
 VAR_5 = VAR_2->pvt_info;

 VAR_20 = FUNC_5(&VAR_19, VAR_1);

 if (VAR_21 < 4)
  VAR_25 = 0;
 else if (VAR_21 < 8)
  VAR_25 = 1;
 else
  VAR_25 = 2;

 VAR_23 = VAR_5->csrow_map[VAR_20][VAR_25];

 if (VAR_12 && VAR_13)
  VAR_9 = " recoverable";
 else
  VAR_9 = "";






 VAR_8 = FUNC_8(VAR_0,
   "%d %s error(s): %s on %s area %s%s: cpu=%d Err=%04x:%04x (ch=%d), "
   "addr = 0x%08llx => socket=%d, Channel=%ld(mask=%ld), rank=%d\n",
   VAR_14,
   VAR_26,
   VAR_7,
   VAR_6,
   VAR_9,
   VAR_11 ? "OVERFLOW" : "",
   VAR_3->cpu,
   VAR_15, VAR_16,
   VAR_17,
   (long long) VAR_3->addr,
   VAR_22,
   VAR_20,
   VAR_19,
   VAR_21);

 FUNC_1("%s", VAR_8);


 if (VAR_12)
  FUNC_4(VAR_2, VAR_23, 0, 0, VAR_8);
 else
  FUNC_3(VAR_2, VAR_23, 0, VAR_8);

 FUNC_9(VAR_8);
}
