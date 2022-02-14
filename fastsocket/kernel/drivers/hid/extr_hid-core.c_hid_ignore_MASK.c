
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hid_device {int vendor; scalar_t__ type; int product; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;



 int VAR_7 ;
 scalar_t__ FUNC_0 (struct hid_device*,int ) ;
 int VAR_8 ;

__attribute__((used)) static bool FUNC_1(struct hid_device *VAR_9)
{
 switch (VAR_9->vendor) {
 case 130:

  if (VAR_9->product >= VAR_1 &&
    VAR_9->product <= VAR_2)
   return 1;
  break;
 case 129:
  if (VAR_9->product >= VAR_3 &&
    VAR_9->product <= VAR_4)
   return 1;
  break;
 case 128:
  if (VAR_9->product >= VAR_5 &&
      VAR_9->product <= VAR_6)
   return 1;
  break;
 }

 if (VAR_9->type == VAR_0 &&
   FUNC_0(VAR_9, VAR_8))
  return 1;

 return !!FUNC_0(VAR_9, VAR_7);
}
