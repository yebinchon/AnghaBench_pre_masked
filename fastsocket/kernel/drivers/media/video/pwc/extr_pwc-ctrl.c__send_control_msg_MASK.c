
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct pwc_device {int udev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (void*) ;
 void* FUNC_1 (int,int ) ;
 int FUNC_2 (void*,void*,int) ;
 int FUNC_3 (int ,int ,int ,int,int ,int,void*,int,int) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(struct pwc_device *VAR_5,
 u8 VAR_6, u16 VAR_7, int VAR_8, void *VAR_9, int VAR_10, int VAR_11)
{
 int VAR_12;
 void *VAR_13 = ((void*)0);

 if (VAR_10) {
  VAR_13 = FUNC_1(VAR_10, VAR_1);
  if (VAR_13 == ((void*)0))
   return -VAR_0;
  FUNC_2(VAR_13, VAR_9, VAR_10);
 }

 VAR_12 = FUNC_3(VAR_5->udev, FUNC_4(VAR_5->udev, 0),
  VAR_6,
  VAR_2 | VAR_4 | VAR_3,
  VAR_7,
  VAR_8,
  VAR_13, VAR_10, VAR_11);

 FUNC_0(VAR_13);
 return VAR_12;
}
