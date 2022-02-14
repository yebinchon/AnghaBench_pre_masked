
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct usbnet {int udev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,int,int ,int ,int *,int ,int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static inline int
FUNC_2(struct usbnet *VAR_4, u8 VAR_5, u8 VAR_6, u8 VAR_7)
{
 return FUNC_0(VAR_4->udev,
  FUNC_1(VAR_4->udev, 0),
  VAR_5,
  VAR_1 | VAR_3 | VAR_2,
  VAR_6, VAR_7,
  ((void*)0), 0,
  VAR_0);
}
