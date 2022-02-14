
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct atl1c_hw {int dummy; } ;


 int FUNC_0 (struct atl1c_hw*,int ,int*) ;
 int FUNC_1 (struct atl1c_hw*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;

bool FUNC_4(struct atl1c_hw *VAR_7, u32 VAR_8, u32 *VAR_9)
{
 int VAR_10;
 int VAR_11 = 0;
 u32 VAR_12;
 u32 VAR_13;
 u32 VAR_14;

 if (VAR_8 & 3)
  return VAR_11;

 FUNC_0(VAR_7, VAR_6, &VAR_12);
 if (!(VAR_12 & VAR_3))
  FUNC_1(VAR_7, VAR_6,
    (VAR_12 | VAR_3));

 FUNC_1(VAR_7, VAR_5, 0);
 VAR_13 = (VAR_8 & VAR_0) << VAR_1;
 FUNC_1(VAR_7, VAR_4, VAR_13);

 for (VAR_10 = 0; VAR_10 < 10; VAR_10++) {
  FUNC_3(100);
  FUNC_0(VAR_7, VAR_4, &VAR_13);
  if (VAR_13 & VAR_2)
   break;
 }
 if (VAR_13 & VAR_2) {
  FUNC_0(VAR_7, VAR_4, &VAR_14);
  FUNC_0(VAR_7, VAR_5, VAR_9);
  VAR_14 = VAR_14 & 0xFFFF;
  *VAR_9 = FUNC_2((VAR_14 << 16) | (*VAR_9 >> 16));
  VAR_11 = 1;
 }
 if (!(VAR_12 & VAR_3))
  FUNC_1(VAR_7, VAR_6, VAR_12);

 return VAR_11;
}
