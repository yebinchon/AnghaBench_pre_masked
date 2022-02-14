
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum direction { ____Placeholder_direction } direction ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static inline enum direction FUNC_0(unsigned int VAR_3)
{
 unsigned long VAR_4 = (VAR_3 >> 21) & 1;

 if (!VAR_4)
  return VAR_1;
 else {
  switch ((VAR_3>>19)&0xf) {
  case 15:
   return VAR_0;
  default:
   return VAR_2;
  }
 }
}
