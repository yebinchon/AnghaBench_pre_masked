
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char u8 ;
typedef int u64 ;
typedef int u32 ;
struct gfs2_bitmap {int bi_len; } ;
typedef int __le64 ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int const*,int,unsigned char) ;

__attribute__((used)) static u32 FUNC_3(const u8 *VAR_2, struct gfs2_bitmap *VAR_3, u32 VAR_4,
         u8 VAR_5)
{
 u32 VAR_6 = (VAR_4 << 1) & ((8*sizeof(u64)) - 1);
 const __le64 *VAR_7 = ((__le64 *)VAR_2) + (VAR_4 >> 5);
 const __le64 *VAR_8 = (__le64 *)(VAR_2 + FUNC_0(VAR_3->bi_len, sizeof(u64)));
 u64 VAR_9;
 u64 VAR_10 = 0x5555555555555555ULL;
 u32 VAR_11;


 VAR_10 <<= VAR_6;
 VAR_9 = FUNC_2(VAR_7, VAR_10, VAR_5);
 VAR_7++;
 while(VAR_9 == 0 && VAR_7 < VAR_8) {
  VAR_9 = FUNC_2(VAR_7, 0x5555555555555555ULL, VAR_5);
  VAR_7++;
 }

 if (VAR_7 == VAR_8 && (VAR_3->bi_len & (sizeof(u64) - 1)))
  VAR_9 &= (((u64)~0) >> (64 - 8*(VAR_3->bi_len & (sizeof(u64) - 1))));
 if (VAR_9 == 0)
  return VAR_0;
 VAR_7--;
 VAR_11 = FUNC_1(VAR_9);
 VAR_11 /= 2;
 return (((const unsigned char *)VAR_7 - VAR_2) * VAR_1) + VAR_11;
}
