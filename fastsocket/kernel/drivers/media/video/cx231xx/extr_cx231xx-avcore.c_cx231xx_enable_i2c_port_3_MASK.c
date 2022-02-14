
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct cx231xx {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct cx231xx*,int ,int ,int*,int) ;
 int FUNC_2 (struct cx231xx*,int ,int ,int*,int) ;

int FUNC_3(struct cx231xx *VAR_4, bool VAR_5)
{
 u8 VAR_6[4] = { 0, 0, 0, 0 };
 int VAR_7 = 0;
 bool VAR_8;

 VAR_7 = FUNC_1(VAR_4, VAR_2,
           VAR_1, VAR_6, 4);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_8 = VAR_6[0] & VAR_0 ? 1 : 0;


 if (VAR_8 == VAR_5)
  return 0;

 if (VAR_5)
  VAR_6[0] |= VAR_0;
 else
  VAR_6[0] &= ~VAR_0;

 FUNC_0("Changing the i2c master port to %d\n",
       VAR_5 ? 3 : 1);

 VAR_7 = FUNC_2(VAR_4, VAR_3,
     VAR_1, VAR_6, 4);

 return VAR_7;

}
