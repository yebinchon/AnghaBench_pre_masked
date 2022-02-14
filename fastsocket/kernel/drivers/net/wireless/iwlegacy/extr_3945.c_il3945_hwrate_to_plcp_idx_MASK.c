
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_2__ {scalar_t__ plcp; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static int
FUNC_0(u8 VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  if (VAR_1[VAR_3].plcp == VAR_2)
   return VAR_3;
 return -1;
}
