
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atm_dev {int dev_data; } ;


 unsigned char FUNC_0 (int ,int) ;

__attribute__((used)) static unsigned char
FUNC_1(struct atm_dev *VAR_0, unsigned long VAR_1)
{
 return FUNC_0(VAR_0->dev_data, 0x100 + (VAR_1 & 0x1ff));
}
