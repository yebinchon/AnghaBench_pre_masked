
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int x86_vendor; int x86; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;


 TYPE_1__ VAR_6 ;
 int FUNC_0 (TYPE_1__*,int ) ;

__attribute__((used)) static inline unsigned int FUNC_1(unsigned int VAR_7)
{

 switch (VAR_6.x86_vendor) {
 case 129:
  if (VAR_7 >= VAR_1)
   return (VAR_7 - VAR_1) >> 1;
  return VAR_7 - VAR_2;
 case 128:
  if (FUNC_0(&VAR_6, VAR_5))
   return VAR_7 - VAR_0;

  switch (VAR_6.x86) {
  case 6:
   return VAR_7 - VAR_4;
  case 15:
   return VAR_7 - VAR_3;
  }
 }
 return 0;

}
