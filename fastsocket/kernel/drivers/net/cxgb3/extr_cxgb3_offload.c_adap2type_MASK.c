
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rev; } ;
struct adapter {TYPE_1__ params; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;





__attribute__((used)) static inline int FUNC_0(struct adapter *VAR_3)
{
 int VAR_4 = 0;

 switch (VAR_3->params.rev) {
 case 131:
  VAR_4 = VAR_0;
  break;
 case 130:
 case 129:
  VAR_4 = VAR_1;
  break;
 case 128:
  VAR_4 = VAR_2;
  break;
 }
 return VAR_4;
}
