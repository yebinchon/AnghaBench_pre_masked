
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rev; } ;
struct adapter {TYPE_1__ params; } ;






__attribute__((used)) static inline char FUNC_0(struct adapter *VAR_0)
{
 char VAR_1 = 0;

 switch(VAR_0->params.rev) {
 case 130:
 case 129:
  VAR_1 = 'b';
  break;
 case 128:
  VAR_1 = 'c';
  break;
 }
 return VAR_1;
}
