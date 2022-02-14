
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_gpct_device {int * regs; } ;
struct ni_gpct {int counter_index; struct ni_gpct_device* counter_dev; } ;


 unsigned int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int FUNC_1 (unsigned int) ;
 int VAR_1 ;
 unsigned int FUNC_2 (int ) ;
 int FUNC_3 (struct ni_gpct*,int ,unsigned int const) ;

__attribute__((used)) static int FUNC_4(struct ni_gpct *VAR_2,
           unsigned int VAR_3)
{
 struct ni_gpct_device *VAR_4 = VAR_2->counter_dev;
 const unsigned VAR_5 =
     FUNC_2(VAR_2->counter_index);
 const unsigned VAR_6 = FUNC_0(VAR_3);

 static const unsigned VAR_7 = 0x1f;
 unsigned VAR_8;



 switch (VAR_6) {
 default:
  VAR_8 =
      VAR_6 & VAR_7;
  break;
 };
 VAR_4->regs[VAR_5] |= VAR_0;
 VAR_4->regs[VAR_5] &= ~VAR_1;
 VAR_4->regs[VAR_5] |=
     FUNC_1(VAR_8);
 FUNC_3(VAR_2, VAR_4->regs[VAR_5],
         VAR_5);
 return 0;
}
