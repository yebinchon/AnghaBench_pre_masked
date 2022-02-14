
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct aac_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 unsigned long VAR_11 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct aac_dev*,int ) ;
 int FUNC_2 (struct aac_dev*,int ) ;
 int FUNC_3 (struct aac_dev*,int ,int ) ;
 int FUNC_4 (struct aac_dev*,int ,int) ;
 scalar_t__ FUNC_5 (unsigned long,unsigned long) ;
 int FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct aac_dev *VAR_12, u32 VAR_13,
  u32 VAR_14, u32 VAR_15, u32 VAR_16, u32 VAR_17, u32 VAR_18, u32 VAR_19,
  u32 *VAR_20, u32 *VAR_21, u32 *VAR_22, u32 *VAR_23, u32 *VAR_24)
{
 unsigned long VAR_25;
  int VAR_26;



 FUNC_3(VAR_12, VAR_6, VAR_13);



 FUNC_3(VAR_12, VAR_7, VAR_14);
 FUNC_3(VAR_12, VAR_8, VAR_15);
 FUNC_3(VAR_12, VAR_9, VAR_16);
 FUNC_3(VAR_12, VAR_10, VAR_17);




 FUNC_4(VAR_12, VAR_1, VAR_0);



 FUNC_4(VAR_12, VAR_3, VAR_0);

 VAR_26 = 0;
 VAR_25 = VAR_11;

 while(FUNC_5(VAR_11, VAR_25+30*VAR_5))
 {



  FUNC_6(5);




  if(FUNC_2(VAR_12, VAR_2) & VAR_0) {
   VAR_26 = 1;
   break;
  }
  FUNC_0(1);
 }

 if (VAR_26 != 1)
  return -VAR_4;



 FUNC_4(VAR_12, VAR_1, VAR_0);



 if (VAR_20)
  *VAR_20 = FUNC_1(VAR_12, VAR_6);
 if (VAR_21)
  *VAR_21 = FUNC_1(VAR_12, VAR_7);
 if (VAR_22)
  *VAR_22 = FUNC_1(VAR_12, VAR_8);
 if (VAR_23)
  *VAR_23 = FUNC_1(VAR_12, VAR_9);
 if (VAR_24)
  *VAR_24 = FUNC_1(VAR_12, VAR_10);
 return 0;
}
