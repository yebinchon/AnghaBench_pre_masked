
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* blkloop ) (int,int,int,int,int,int*) ;} ;
struct TYPE_4__ {TYPE_1__ x; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int,int,int,int,int,int*) ;
 int FUNC_2 (int,int,int,int,int,int*) ;

void FUNC_3(int VAR_1, int VAR_2, int VAR_3, int VAR_4, int VAR_5, int VAR_6[]) {
 FUNC_0(VAR_5 >= 0);
 if (VAR_5 == 0)
  return;
 else if (VAR_5 <= 2)
  FUNC_1(VAR_5, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
 else if (VAR_5 == 3) {
  FUNC_1(2, VAR_1, VAR_2, VAR_3, VAR_4, 2, VAR_6);
  FUNC_1(1, VAR_1, VAR_2+2, VAR_3, VAR_4+2, 1, VAR_6);
 }
 else if (VAR_5 <= 16) {
  FUNC_1(4, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5&~3, VAR_6);
  FUNC_3(VAR_1, VAR_2+(VAR_5&~3),
                 VAR_3, VAR_4+(VAR_5&~3), VAR_5&3, VAR_6);
 }
 else
  (*VAR_0->x.blkloop)(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
}
