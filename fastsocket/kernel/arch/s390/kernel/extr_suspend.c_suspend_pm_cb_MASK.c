
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;




 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_2(struct notifier_block *VAR_6, unsigned long VAR_7,
    void *VAR_8)
{
 switch (VAR_7) {
 case 128:
 case 131:
  VAR_5 = FUNC_0(VAR_0, VAR_1);
  if (!VAR_5)
   return VAR_2;
  break;
 case 129:
 case 130:
  FUNC_1(VAR_5, VAR_1);
  break;
 default:
  return VAR_3;
 }
 return VAR_4;
}
