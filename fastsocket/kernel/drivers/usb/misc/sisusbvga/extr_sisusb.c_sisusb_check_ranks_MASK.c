
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct sisusb_usb_data {int dummy; } ;


 int FUNC_0 (struct sisusb_usb_data*,int*,int,int) ;

__attribute__((used)) static int
FUNC_1(struct sisusb_usb_data *VAR_0, int *VAR_1, int VAR_2,
     int VAR_3, int VAR_4, const u8 VAR_5[][5])
{
 int VAR_6 = 0, VAR_7, VAR_8;
 u32 VAR_9;

 *VAR_1 = 0;

 for (VAR_7 = VAR_2; VAR_7 >= 1; VAR_7--) {
  VAR_9 = 1 << (VAR_5[VAR_3][2] +
       VAR_5[VAR_3][1] +
       VAR_5[VAR_3][0] +
       VAR_4 / 64 + VAR_7);
  VAR_6 |= FUNC_0(VAR_0, &VAR_8, VAR_9, 2);
  if (!VAR_8)
   return VAR_6;
 }

 VAR_9 = 1 << (VAR_5[VAR_3][2] + VAR_4 / 64 + 2);
 VAR_6 |= FUNC_0(VAR_0, &VAR_8, VAR_9, 4);
 if (!VAR_8)
  return VAR_6;

 VAR_9 = 1 << (10 + VAR_4 / 64);
 VAR_6 |= FUNC_0(VAR_0, &VAR_8, VAR_9, 2);
 if (!VAR_8)
  return VAR_6;

 *VAR_1 = 1;
 return VAR_6;
}
