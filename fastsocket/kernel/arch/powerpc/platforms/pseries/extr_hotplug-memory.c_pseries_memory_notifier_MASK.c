
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int FUNC_0 (void*) ;
 int FUNC_1 (void*,unsigned long) ;
 int FUNC_2 (void*) ;

__attribute__((used)) static int FUNC_3(struct notifier_block *VAR_3,
    unsigned long VAR_4, void *VAR_5)
{
 int VAR_6 = VAR_2;

 switch (VAR_4) {
 case 129:
  if (FUNC_0(VAR_5))
   VAR_6 = VAR_0;
  break;
 case 128:
  if (FUNC_2(VAR_5))
   VAR_6 = VAR_0;
  break;
 case 131:
 case 130:
  if (FUNC_1(VAR_5, VAR_4))
   VAR_6 = VAR_0;
  break;
 default:
  VAR_6 = VAR_1;
  break;
 }
 return VAR_6;
}
