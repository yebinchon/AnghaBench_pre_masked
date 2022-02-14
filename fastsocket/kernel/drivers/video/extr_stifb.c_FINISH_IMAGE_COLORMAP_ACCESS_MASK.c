
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bits_per_pixel; } ;
struct TYPE_4__ {TYPE_1__ var; } ;
struct stifb_info {scalar_t__ id; TYPE_2__ info; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct stifb_info*) ;
 int FUNC_1 (int,struct stifb_info*,int ) ;

__attribute__((used)) static void
FUNC_2(struct stifb_info *VAR_5)
{
 FUNC_1(0x400, VAR_5, VAR_2);
 if (VAR_5->info.var.bits_per_pixel == 32) {
  FUNC_1(0x83000100, VAR_5, VAR_1);
 } else {
  if (VAR_5->id == VAR_4 || VAR_5->id == VAR_0)
   FUNC_1(0x80000100, VAR_5, VAR_3);
  else
   FUNC_1(0x80000100, VAR_5, VAR_1);
 }
 FUNC_0(VAR_5);
}
