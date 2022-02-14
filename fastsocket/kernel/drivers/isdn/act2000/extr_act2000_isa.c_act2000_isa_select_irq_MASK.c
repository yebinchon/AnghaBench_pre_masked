
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int irq; } ;
typedef TYPE_1__ act2000_card ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 unsigned char VAR_6 ;
 unsigned char VAR_7 ;
 unsigned char VAR_8 ;
 int VAR_9 ;
 unsigned char FUNC_0 (int ) ;
 int FUNC_1 (unsigned char,int ) ;

__attribute__((used)) static void
FUNC_2(act2000_card * VAR_10)
{
 unsigned char VAR_11;

 VAR_11 = (FUNC_0(VAR_9) & ~VAR_7) | VAR_8;
 switch (VAR_10->irq) {
  case 3:
   VAR_11 = VAR_0;
   break;
  case 5:
   VAR_11 = VAR_1;
   break;
  case 7:
   VAR_11 = VAR_2;
   break;
  case 10:
   VAR_11 = VAR_3;
   break;
  case 11:
   VAR_11 = VAR_4;
   break;
  case 12:
   VAR_11 = VAR_5;
   break;
  case 15:
   VAR_11 = VAR_6;
   break;
 }
 FUNC_1(VAR_11, VAR_9);
}
