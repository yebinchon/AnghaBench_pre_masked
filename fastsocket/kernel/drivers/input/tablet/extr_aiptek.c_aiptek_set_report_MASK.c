
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aiptek {int ifnum; int usbdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,int,unsigned char,int ,void*,int,int) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int
FUNC_2(struct aiptek *VAR_4,
    unsigned char VAR_5,
    unsigned char VAR_6, void *VAR_7, int VAR_8)
{
 return FUNC_0(VAR_4->usbdev,
          FUNC_1(VAR_4->usbdev, 0),
          VAR_2,
          VAR_3 | VAR_1 |
          VAR_0, (VAR_5 << 8) + VAR_6,
          VAR_4->ifnum, VAR_7, VAR_8, 5000);
}
