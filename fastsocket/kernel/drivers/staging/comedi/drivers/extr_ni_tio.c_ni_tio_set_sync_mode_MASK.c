
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct ni_gpct_device {int variant; } ;
struct ni_gpct {int counter_index; struct ni_gpct_device* counter_dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;




 unsigned int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct ni_gpct*,int ) ;
 scalar_t__ FUNC_3 (struct ni_gpct_device*) ;
 int FUNC_4 (struct ni_gpct*) ;
 int FUNC_5 (struct ni_gpct*,unsigned int const) ;
 int FUNC_6 (struct ni_gpct*,unsigned int const,int,int) ;

__attribute__((used)) static void FUNC_7(struct ni_gpct *VAR_1, int VAR_2)
{
 struct ni_gpct_device *VAR_3 = VAR_1->counter_dev;
 const unsigned VAR_4 =
     FUNC_1(VAR_1->counter_index);
 static const uint64_t VAR_5 = 25000;
 const uint64_t VAR_6 = FUNC_2(VAR_1,
        FUNC_4
        (VAR_1));

 if (FUNC_3(VAR_3) == 0)
  return;

 switch (FUNC_5(VAR_1,
         VAR_4) & VAR_0)
 {
 case 131:
 case 130:
 case 129:
 case 128:
  VAR_2 = 1;
  break;
 default:
  break;
 }



 if (VAR_2 ||
     (VAR_6 && VAR_6 < VAR_5)) {
  FUNC_6(VAR_1, VAR_4,
    FUNC_0(VAR_3->variant),
    FUNC_0(VAR_3->variant));
 } else {
  FUNC_6(VAR_1, VAR_4,
    FUNC_0(VAR_3->variant),
    0x0);
 }
}
