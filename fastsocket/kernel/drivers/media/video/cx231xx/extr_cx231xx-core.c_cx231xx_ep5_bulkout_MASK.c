
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct cx231xx {int udev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int ,int ,int *,int,int*,int) ;
 int FUNC_5 (int ,int) ;

int FUNC_6(struct cx231xx *VAR_2, u8 *VAR_3, u16 VAR_4)
{
 int VAR_5 = 0;
 int VAR_6, VAR_7 = -VAR_0;
 u32 *VAR_8;

VAR_8 = FUNC_2(4096, VAR_1);
 if (VAR_8 == ((void*)0)) {
  FUNC_0("out of mem\n");
  return -VAR_0;
 }
 FUNC_3(&VAR_8[0], VAR_3, 4096);

 VAR_7 = FUNC_4(VAR_2->udev, FUNC_5(VAR_2->udev, 5),
     VAR_8, 4096, &VAR_6, 2000);

 if (VAR_7)
  FUNC_0("bulk message failed: %d (%d/%d)", VAR_7,
     VAR_4, VAR_6);
 else {
  VAR_5 = VAR_6 != VAR_4 ? -1 : 0;
 }
FUNC_1(VAR_8);
 return 0;
}
