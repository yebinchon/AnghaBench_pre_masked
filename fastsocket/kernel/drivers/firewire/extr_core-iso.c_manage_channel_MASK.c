
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct fw_card {int dummy; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct fw_card*,int ,int,int,int ,int ,int*,int) ;

__attribute__((used)) static int FUNC_2(struct fw_card *VAR_4, int VAR_5, int VAR_6,
  u32 VAR_7, u64 VAR_8, bool VAR_9, __be32 VAR_10[2])
{
 __be32 VAR_11, VAR_12, VAR_13;
 int VAR_14, VAR_15 = 5;

 VAR_13 = VAR_12 = VAR_9 ? FUNC_0(~0) : 0;

 for (VAR_14 = 0; VAR_14 < 32; VAR_14++) {
  if (!(VAR_7 & 1 << VAR_14))
   continue;

  VAR_11 = FUNC_0(1 << (31 - VAR_14));
  if ((VAR_13 & VAR_11) != (VAR_12 & VAR_11))
   continue;

  VAR_10[0] = VAR_13;
  VAR_10[1] = VAR_13 ^ VAR_11;
  switch (FUNC_1(VAR_4, VAR_3,
        VAR_5, VAR_6, VAR_2,
        VAR_8, VAR_10, 8)) {
  case 128:

   return VAR_9 ? -VAR_0 : VAR_14;

  case 129:
   if (VAR_10[0] == VAR_13)
    return VAR_14;

   VAR_13 = VAR_10[0];


   if ((VAR_10[0] & VAR_11) == (VAR_10[1] & VAR_11))
    continue;


  default:
   if (VAR_15--)
    VAR_14--;
  }
 }

 return -VAR_1;
}
