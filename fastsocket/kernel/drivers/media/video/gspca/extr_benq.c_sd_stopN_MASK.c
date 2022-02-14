
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gspca_dev {scalar_t__ nbalt; int iface; int dev; } ;


 int FUNC_0 (struct gspca_dev*,int,int) ;
 int FUNC_1 (int ,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct gspca_dev *VAR_0)
{
 FUNC_0(VAR_0, 0x003c, 0x0003);
 FUNC_0(VAR_0, 0x003c, 0x0004);
 FUNC_0(VAR_0, 0x003c, 0x0005);
 FUNC_0(VAR_0, 0x003c, 0x0006);
 FUNC_0(VAR_0, 0x003c, 0x0007);
 FUNC_1(VAR_0->dev, VAR_0->iface,
     VAR_0->nbalt - 1);
}
