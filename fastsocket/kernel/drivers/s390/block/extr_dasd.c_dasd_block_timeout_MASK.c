
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dasd_block {TYPE_1__* base; } ;
struct TYPE_2__ {int cdev; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (struct dasd_block*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,unsigned long) ;
 int FUNC_4 (int ,unsigned long) ;

__attribute__((used)) static void FUNC_5(unsigned long VAR_1)
{
 unsigned long VAR_2;
 struct dasd_block *VAR_3;

 VAR_3 = (struct dasd_block *) VAR_1;
 FUNC_3(FUNC_2(VAR_3->base->cdev), VAR_2);

 FUNC_0(VAR_3->base, VAR_0);
 FUNC_4(FUNC_2(VAR_3->base->cdev), VAR_2);
 FUNC_1(VAR_3);
}
