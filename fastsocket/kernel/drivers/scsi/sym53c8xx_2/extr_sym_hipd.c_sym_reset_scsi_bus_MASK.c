
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
typedef int u32 ;
struct sym_hcb {int rv_dcntl; int features; int maxwide; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sym_hcb*,int ) ;
 int FUNC_1 (struct sym_hcb*,int ) ;
 int VAR_2 ;
 int FUNC_2 (struct sym_hcb*,int ,int) ;
 int FUNC_3 (struct sym_hcb*,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_4 (char*,char*,...) ;
 char* FUNC_5 (struct sym_hcb*) ;
 int FUNC_6 (struct sym_hcb*) ;
 int FUNC_7 (int) ;

int FUNC_8(struct sym_hcb *VAR_15, int VAR_16)
{
 u32 VAR_17;
 int VAR_18 = 0;

 FUNC_6(VAR_15);
 if (VAR_16)
  FUNC_3(VAR_15, VAR_11, VAR_3);




 FUNC_2(VAR_15, VAR_14, VAR_5);
 FUNC_2(VAR_15, VAR_6, (VAR_15->rv_dcntl & VAR_2));
 FUNC_2(VAR_15, VAR_10, VAR_0);
 FUNC_0(VAR_15, VAR_7);
 FUNC_7(200);

 if (!VAR_4)
  goto out;






 VAR_17 = FUNC_0(VAR_15, VAR_12);
 VAR_17 = ((VAR_17 & 2) << 7) + ((VAR_17 & 1) << 17);
 VAR_17 |= ((FUNC_0(VAR_15, VAR_13) & 0x01) << 26) |
  ((FUNC_1(VAR_15, VAR_9) & 0xff) << 9) |
  ((FUNC_1(VAR_15, VAR_9) & 0xff00) << 10) |
  FUNC_0(VAR_15, VAR_8);

 if (!VAR_15->maxwide)
  VAR_17 &= 0x3ffff;

 if (VAR_17 != (2<<7)) {
  FUNC_4("%s: suspicious SCSI data while resetting the BUS.\n",
   FUNC_5(VAR_15));
  FUNC_4("%s: %sdp0,d7-0,rst,req,ack,bsy,sel,atn,msg,c/d,i/o = "
   "0x%lx, expecting 0x%lx\n",
   FUNC_5(VAR_15),
   (VAR_15->features & VAR_1) ? "dp1,d15-8," : "",
   (u_long)VAR_17, (u_long)(2<<7));
  if (VAR_4 == 1)
   VAR_18 = 1;
 }
out:
 FUNC_2(VAR_15, VAR_10, 0);
 return VAR_18;
}
