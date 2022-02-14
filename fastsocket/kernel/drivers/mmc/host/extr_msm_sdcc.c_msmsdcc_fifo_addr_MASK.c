
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct msmsdcc_host {int pdev_id; } ;


 int FUNC_0 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

uint32_t FUNC_1(struct msmsdcc_host *VAR_5)
{
 switch (VAR_5->pdev_id) {
 case 1:
  return VAR_1 + VAR_0;
 case 2:
  return VAR_2 + VAR_0;
 case 3:
  return VAR_3 + VAR_0;
 case 4:
  return VAR_4 + VAR_0;
 }
 FUNC_0();
 return 0;
}
