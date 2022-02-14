
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct powerdomain {int state; int * state_counter; } ;


 int VAR_0 ;


 int FUNC_0 (struct powerdomain*,int) ;
 int FUNC_1 (struct powerdomain*) ;
 int FUNC_2 (struct powerdomain*) ;

__attribute__((used)) static int FUNC_3(struct powerdomain *VAR_1, int VAR_2)
{

 int VAR_3;
 int VAR_4;

 if (VAR_1 == ((void*)0))
  return -VAR_0;

 VAR_4 = FUNC_2(VAR_1);

 switch (VAR_2) {
 case 129:
  VAR_3 = VAR_1->state;
  break;
 case 128:
  VAR_3 = FUNC_1(VAR_1);
  if (VAR_1->state != VAR_3)
   VAR_1->state_counter[VAR_3]++;
  break;
 default:
  return -VAR_0;
 }

 if (VAR_4 != VAR_3)
  VAR_1->state_counter[VAR_4]++;

 FUNC_0(VAR_1, VAR_3);

 VAR_1->state = VAR_4;

 return 0;
}
