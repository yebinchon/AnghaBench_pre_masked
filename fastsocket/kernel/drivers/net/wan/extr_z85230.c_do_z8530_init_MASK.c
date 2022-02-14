
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int regs; void* dcdcheck; int * irqs; } ;
struct TYPE_5__ {int regs; void* dcdcheck; int * irqs; } ;
struct z8530_dev {TYPE_1__ chanB; TYPE_2__ chanA; int type; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int VAR_11 ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_2__*,int ,int) ;
 int VAR_12 ;

__attribute__((used)) static inline int FUNC_4(struct z8530_dev *VAR_13)
{


 VAR_13->chanA.irqs=&VAR_12;
 VAR_13->chanB.irqs=&VAR_12;
 VAR_13->chanA.dcdcheck=VAR_0;
 VAR_13->chanB.dcdcheck=VAR_0;


 FUNC_3(&VAR_13->chanA, VAR_6, 0xC0);
 FUNC_2(200);

 FUNC_3(&VAR_13->chanA, VAR_3, 0xAA);
 if(FUNC_1(&VAR_13->chanA, VAR_3)!=0xAA)
  return -VAR_1;
 FUNC_3(&VAR_13->chanA, VAR_3, 0x55);
 if(FUNC_1(&VAR_13->chanA, VAR_3)!=0x55)
  return -VAR_1;

 VAR_13->type=VAR_9;





 FUNC_3(&VAR_13->chanA, VAR_4, 0x01);






 if(FUNC_1(&VAR_13->chanA, VAR_4)==0x01)
 {


  FUNC_3(&VAR_13->chanA, VAR_5, 0);
  if(FUNC_1(&VAR_13->chanA, VAR_2)&VAR_7)
   VAR_13->type = VAR_8;
  else
   VAR_13->type = VAR_10;
 }







 FUNC_3(&VAR_13->chanA, VAR_4, 0);





 FUNC_0(VAR_13->chanA.regs, VAR_11, 16);
 FUNC_0(VAR_13->chanB.regs, VAR_11 ,16);

 return 0;
}
