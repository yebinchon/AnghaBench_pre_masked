
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bnx2x {int dummy; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct bnx2x*) ;
 int FUNC_1 (int,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (struct bnx2x*,int ) ;
 int FUNC_3 (struct bnx2x*,int ,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct bnx2x *VAR_10, u32 VAR_11, __be32 *VAR_12,
      u32 VAR_13)
{
 int VAR_14, VAR_15, VAR_16;
 u32 VAR_17;


 VAR_13 |= VAR_5;


 FUNC_3(VAR_10, VAR_8, VAR_6);


 FUNC_3(VAR_10, VAR_7,
        (VAR_11 & VAR_4));


 FUNC_3(VAR_10, VAR_8, VAR_13);


 VAR_14 = VAR_2;
 if (FUNC_0(VAR_10))
  VAR_14 *= 100;


 *VAR_12 = 0;
 VAR_16 = -VAR_3;
 for (VAR_15 = 0; VAR_15 < VAR_14; VAR_15++) {
  FUNC_5(5);
  VAR_17 = FUNC_2(VAR_10, VAR_8);

  if (VAR_17 & VAR_6) {
   VAR_17 = FUNC_2(VAR_10, VAR_9);




   *VAR_12 = FUNC_4(VAR_17);
   VAR_16 = 0;
   break;
  }
 }
 if (VAR_16 == -VAR_3)
  FUNC_1(VAR_0 | VAR_1,
     "nvram read timeout expired\n");
 return VAR_16;
}
