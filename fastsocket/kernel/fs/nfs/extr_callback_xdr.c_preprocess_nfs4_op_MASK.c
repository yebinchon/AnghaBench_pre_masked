
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct callback_op {int dummy; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;


 struct callback_op* VAR_2 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static __be32
FUNC_1(unsigned int VAR_3, struct callback_op **VAR_4)
{
 switch (VAR_3) {
 case 129:
 case 128:
  *VAR_4 = &VAR_2[VAR_3];
  break;
 default:
  return FUNC_0(VAR_0);
 }

 return FUNC_0(VAR_1);
}
