
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct amd64_pvt {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (struct amd64_pvt*) ;
 scalar_t__ FUNC_3 (struct amd64_pvt*) ;
 scalar_t__ FUNC_4 (struct amd64_pvt*) ;
 int FUNC_5 (struct amd64_pvt*) ;
 int FUNC_6 (struct amd64_pvt*) ;
 int FUNC_7 (char*,int,...) ;
 int FUNC_8 (struct amd64_pvt*) ;
 scalar_t__ FUNC_9 (struct amd64_pvt*) ;
 int FUNC_10 (struct amd64_pvt*,unsigned int) ;
 int FUNC_11 (struct amd64_pvt*,unsigned int) ;
 int FUNC_12 (struct amd64_pvt*,unsigned int) ;
 int FUNC_13 (struct amd64_pvt*,int,int,int) ;
 int FUNC_14 (struct amd64_pvt*,unsigned int,int,int,int) ;
 int FUNC_15 (int,int,int) ;
 int FUNC_16 (struct amd64_pvt*,int) ;
 int FUNC_17 (struct amd64_pvt*,unsigned int) ;
 int FUNC_18 (int) ;

__attribute__((used)) static int FUNC_19(struct amd64_pvt *VAR_1, unsigned VAR_2,
      u64 VAR_3, int *VAR_4, int *VAR_5)
{
 int VAR_6 = -VAR_0;
 u64 VAR_7;
 u32 VAR_8;
 u8 VAR_9;
 bool VAR_10 = 0;

 u8 VAR_11 = FUNC_10(VAR_1, VAR_2);
 u8 VAR_12 = FUNC_11(VAR_1, VAR_2);
 u32 VAR_13 = FUNC_12(VAR_1, VAR_2);

 FUNC_7("(range %d) SystemAddr= 0x%llx Limit=0x%llx\n",
  VAR_2, VAR_3, FUNC_17(VAR_1, VAR_2));

 if (FUNC_9(VAR_1) &&
     FUNC_8(VAR_1) <= VAR_3 &&
     VAR_3 < FUNC_0(32)) {
  FUNC_1("Huh? Address is in the MMIO hole: 0x%016llx\n",
       VAR_3);
  return -VAR_0;
 }

 if (VAR_12 && (VAR_13 != ((VAR_3 >> 12) & VAR_12)))
  return -VAR_0;

 VAR_3 = FUNC_16(VAR_1, VAR_3);

 VAR_8 = FUNC_5(VAR_1);





 if (FUNC_3(VAR_1) &&
    !FUNC_2(VAR_1) &&
    ((VAR_3 >> 27) >= (VAR_8 >> 11)))
  VAR_10 = 1;

 VAR_9 = FUNC_13(VAR_1, VAR_3, VAR_10, VAR_12);

 VAR_7 = FUNC_14(VAR_1, VAR_2, VAR_3,
       VAR_10, VAR_8);


 if (VAR_12)
  VAR_7 = ((VAR_7 >> (12 + FUNC_18(VAR_12))) << 12) |
       (VAR_7 & 0xfff);


 if (FUNC_4(VAR_1) &&
    !FUNC_3(VAR_1) &&
    !FUNC_2(VAR_1)) {

  if (FUNC_6(VAR_1) != 1) {
   if (FUNC_6(VAR_1) == 0x3)

    VAR_7 = ((VAR_7 >> 10) << 9) |
          (VAR_7 & 0x1ff);
   else

    VAR_7 = ((VAR_7 >> 7) << 6) |
          (VAR_7 & 0x3f);
  } else

   VAR_7 = ((VAR_7 >> 13) << 12) |
         (VAR_7 & 0xfff);
 }

 FUNC_7("   Normalized DCT addr: 0x%llx\n", VAR_7);

 VAR_6 = FUNC_15(VAR_7, VAR_11, VAR_9);

 if (VAR_6 >= 0) {
  *VAR_4 = VAR_11;
  *VAR_5 = VAR_9;
 }
 return VAR_6;
}
