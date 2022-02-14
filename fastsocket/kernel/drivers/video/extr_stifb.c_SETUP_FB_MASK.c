
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int bits_per_pixel; } ;
struct TYPE_3__ {TYPE_2__ var; } ;
struct stifb_info {int id; TYPE_1__ info; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;





 int FUNC_0 (struct stifb_info*) ;
 int FUNC_1 (int,struct stifb_info*,int ) ;
 int FUNC_2 (int,struct stifb_info*,int ) ;

__attribute__((used)) static void
FUNC_3(struct stifb_info *VAR_3)
{
 unsigned int VAR_4 = 0;

 FUNC_0(VAR_3);
 switch (VAR_3->id)
 {
  case 134:
  case 130:
  case 131:
   VAR_4 = 0x13601000;
   break;
  case 132:
   if (VAR_3->info.var.bits_per_pixel == 32)
    VAR_4 = 0xBBA0A000;
   else
    VAR_4 = 0x13601000;
   break;
  case 129:
   if (VAR_3->info.var.bits_per_pixel == 32)
    VAR_4 = 0xBBA0A000;
   else
    VAR_4 = 0x13602000;
   break;
  case 128:
  case 133:
   VAR_4 = 0x13602000;
   break;
 }
 if (VAR_4)
  FUNC_2(VAR_4, VAR_3, VAR_0);
 FUNC_2(0x83000300, VAR_3, VAR_1);
 FUNC_0(VAR_3);
 FUNC_1(1, VAR_3, VAR_2);
}
