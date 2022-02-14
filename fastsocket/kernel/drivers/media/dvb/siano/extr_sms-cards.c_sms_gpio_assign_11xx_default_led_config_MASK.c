
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smscore_gpio_config {int PullUpDown; int OutputSlewRate; int OutputDriving; int InputCharacteristics; int Direction; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static inline void FUNC_0(
  struct smscore_gpio_config *VAR_5) {
 VAR_5->Direction = VAR_0;
 VAR_5->InputCharacteristics =
  VAR_1;
 VAR_5->OutputDriving = VAR_2;
 VAR_5->OutputSlewRate = VAR_3;
 VAR_5->PullUpDown = VAR_4;
}
