
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_2__ {int data_lines; } ;
struct mipid_device {TYPE_1__ panel; } ;
typedef int initpar ;


 int FUNC_0 (struct mipid_device*,int,int *,int) ;
 int FUNC_1 (struct mipid_device*,int ) ;

__attribute__((used)) static void FUNC_2(struct mipid_device *VAR_0)
{
 u16 VAR_1[] = { 0x0102, 0x0100, 0x0100 };

 FUNC_0(VAR_0, 0xc2, (u8 *)VAR_1, sizeof(VAR_1));
 FUNC_1(VAR_0, VAR_0->panel.data_lines);
}
