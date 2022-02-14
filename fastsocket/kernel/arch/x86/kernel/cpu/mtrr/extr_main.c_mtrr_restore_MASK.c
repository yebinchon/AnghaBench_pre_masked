
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sys_device {int dummy; } ;
struct TYPE_2__ {int ltype; scalar_t__ lsize; int lbase; } ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ,scalar_t__,int ,int) ;

__attribute__((used)) static int FUNC_1(struct sys_device *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  if (VAR_0[VAR_3].lsize) {
   FUNC_0(VAR_3, VAR_0[VAR_3].lbase,
        VAR_0[VAR_3].lsize,
        VAR_0[VAR_3].ltype,
        1);
  }
 }
 return 0;
}
