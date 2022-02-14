
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stv090x_state {int algo; int srate; int DemodTimeout; int FecTimeout; } ;


 int VAR_0 ;



 int FUNC_0 (int ,int,char*) ;

__attribute__((used)) static void FUNC_1(struct stv090x_state *VAR_1)
{
 switch (VAR_1->algo) {
 case 130:
  FUNC_0(VAR_0, 1, "Blind Search");
  if (VAR_1->srate <= 1500000) {
   VAR_1->DemodTimeout = 1500;
   VAR_1->FecTimeout = 400;
  } else if (VAR_1->srate <= 5000000) {
   VAR_1->DemodTimeout = 1000;
   VAR_1->FecTimeout = 300;
  } else {
   VAR_1->DemodTimeout = 700;
   VAR_1->FecTimeout = 100;
  }
  break;

 case 129:
 case 128:
 default:
  FUNC_0(VAR_0, 1, "Normal Search");
  if (VAR_1->srate <= 1000000) {
   VAR_1->DemodTimeout = 4500;
   VAR_1->FecTimeout = 1700;
  } else if (VAR_1->srate <= 2000000) {
   VAR_1->DemodTimeout = 2500;
   VAR_1->FecTimeout = 1100;
  } else if (VAR_1->srate <= 5000000) {
   VAR_1->DemodTimeout = 1000;
   VAR_1->FecTimeout = 550;
  } else if (VAR_1->srate <= 10000000) {
   VAR_1->DemodTimeout = 700;
   VAR_1->FecTimeout = 250;
  } else if (VAR_1->srate <= 20000000) {
   VAR_1->DemodTimeout = 400;
   VAR_1->FecTimeout = 130;
  } else {
   VAR_1->DemodTimeout = 300;
   VAR_1->FecTimeout = 100;
  }
  break;
 }

 if (VAR_1->algo == 128)
  VAR_1->DemodTimeout /= 2;
}
