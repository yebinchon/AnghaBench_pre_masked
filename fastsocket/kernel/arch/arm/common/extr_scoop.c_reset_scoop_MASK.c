
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scoop_dev {scalar_t__ base; } ;
struct device {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 struct scoop_dev* FUNC_0 (struct device*) ;
 int FUNC_1 (int,scalar_t__) ;

void FUNC_2(struct device *VAR_6)
{
 struct scoop_dev *VAR_7 = FUNC_0(VAR_6);

 FUNC_1(0x0100, VAR_7->base + VAR_5);
 FUNC_1(0x0000, VAR_7->base + VAR_1);
 FUNC_1(0x0000, VAR_7->base + VAR_0);
 FUNC_1(0x0000, VAR_7->base + VAR_2);
 FUNC_1(0x00FF, VAR_7->base + VAR_3);
 FUNC_1(0x0000, VAR_7->base + VAR_4);
 FUNC_1(0x0000, VAR_7->base + VAR_3);
}
