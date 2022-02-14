
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dasd_device {void* state; struct dasd_block* block; } ;
struct dasd_block {int blocks; int s2b_shift; int gdp; TYPE_2__* base; } ;
struct TYPE_4__ {TYPE_1__* discipline; } ;
struct TYPE_3__ {int (* do_analysis ) (struct dasd_block*) ;} ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct dasd_block*) ;
 int FUNC_1 (struct dasd_block*) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct dasd_block*) ;

__attribute__((used)) static int FUNC_4(struct dasd_device *VAR_4)
{
 int VAR_5;
 struct dasd_block *VAR_6;

 VAR_5 = 0;
 VAR_6 = VAR_4->block;

 if (VAR_6) {
  if (VAR_6->base->discipline->do_analysis != ((void*)0))
   VAR_5 = VAR_6->base->discipline->do_analysis(VAR_6);
  if (VAR_5) {
   if (VAR_5 != -VAR_3)
    VAR_4->state = VAR_2;
   return VAR_5;
  }
  FUNC_1(VAR_6);
  FUNC_2(VAR_6->gdp,
        VAR_6->blocks << VAR_6->s2b_shift);
  VAR_4->state = VAR_1;
  VAR_5 = FUNC_0(VAR_6);
  if (VAR_5)
   VAR_4->state = VAR_0;
 } else {
  VAR_4->state = VAR_1;
 }
 return VAR_5;
}
