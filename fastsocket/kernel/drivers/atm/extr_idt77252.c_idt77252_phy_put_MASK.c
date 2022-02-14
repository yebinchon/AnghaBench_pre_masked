
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atm_dev {int dev_data; } ;


 int FUNC_0 (int ,int,unsigned char) ;

__attribute__((used)) static void
FUNC_1(struct atm_dev *VAR_0, unsigned char VAR_1, unsigned long VAR_2)
{
 FUNC_0(VAR_0->dev_data, 0x100 + (VAR_2 & 0x1ff), VAR_1);
}
