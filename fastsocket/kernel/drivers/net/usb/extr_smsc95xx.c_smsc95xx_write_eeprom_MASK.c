
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct usbnet {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct usbnet*) ;
 int FUNC_2 (struct usbnet*) ;
 int FUNC_3 (struct usbnet*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct usbnet *VAR_6, u32 VAR_7, u32 VAR_8,
     u8 *VAR_9)
{
 u32 VAR_10;
 int VAR_11, VAR_12;

 FUNC_0(!VAR_6);
 FUNC_0(!VAR_9);

 VAR_12 = FUNC_1(VAR_6);
 if (VAR_12)
  return VAR_12;


 VAR_10 = VAR_2 | VAR_3;
 FUNC_3(VAR_6, VAR_0, VAR_10);

 VAR_12 = FUNC_2(VAR_6);
 if (VAR_12 < 0)
  return VAR_12;

 for (VAR_11 = 0; VAR_11 < VAR_8; VAR_11++) {


  VAR_10 = VAR_9[VAR_11];
  FUNC_3(VAR_6, VAR_5, VAR_10);


  VAR_10 = VAR_2 | VAR_4 | (VAR_7 & VAR_1);
  FUNC_3(VAR_6, VAR_0, VAR_10);

  VAR_12 = FUNC_2(VAR_6);
  if (VAR_12 < 0)
   return VAR_12;

  VAR_7++;
 }

 return 0;
}
