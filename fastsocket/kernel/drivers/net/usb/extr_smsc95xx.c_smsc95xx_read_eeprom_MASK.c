
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
 int FUNC_1 (struct usbnet*) ;
 int FUNC_2 (struct usbnet*,int ,int*) ;
 int FUNC_3 (struct usbnet*) ;
 int FUNC_4 (struct usbnet*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct usbnet *VAR_5, u32 VAR_6, u32 VAR_7,
    u8 *VAR_8)
{
 u32 VAR_9;
 int VAR_10, VAR_11;

 FUNC_0(!VAR_5);
 FUNC_0(!VAR_8);

 VAR_11 = FUNC_1(VAR_5);
 if (VAR_11)
  return VAR_11;

 for (VAR_10 = 0; VAR_10 < VAR_7; VAR_10++) {
  VAR_9 = VAR_2 | VAR_3 | (VAR_6 & VAR_1);
  FUNC_4(VAR_5, VAR_0, VAR_9);

  VAR_11 = FUNC_3(VAR_5);
  if (VAR_11 < 0)
   return VAR_11;

  FUNC_2(VAR_5, VAR_4, &VAR_9);

  VAR_8[VAR_10] = VAR_9 & 0xFF;
  VAR_6++;
 }

 return 0;
}
