
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pwc_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ alternate; } ;


 unsigned int* VAR_0 ;
 TYPE_1__*** VAR_1 ;
 unsigned int VAR_2 ;

__attribute__((used)) static unsigned int FUNC_0(struct pwc_device *VAR_3, unsigned int VAR_4, unsigned int VAR_5)
{
 unsigned int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  if (VAR_1[VAR_5][VAR_6][3].alternate) {
   if (VAR_4--==0) return VAR_0[VAR_6];
  }
 }
 return 0;
}
