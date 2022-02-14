
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* gr; } ;
struct TYPE_3__ {int h; } ;


 int FUNC_0 (int,int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int* VAR_5 ;
 int VAR_6 ;
 TYPE_2__ VAR_7 ;

__attribute__((used)) static void FUNC_3(void)
{
 if (VAR_4 & VAR_0) return;
 if (VAR_6 & VAR_0) {
  int VAR_8 = 0;
  if (VAR_7.gr[VAR_3].h & VAR_1) VAR_8 |= 8;
  if (VAR_7.gr[VAR_3].h & VAR_2) VAR_8 |= 4;
  FUNC_1(4/2, VAR_8);
 } else {
  FUNC_0(1, 6, 28);
  FUNC_2(1);
  VAR_5[1] = -1;
 }
 VAR_4 |= VAR_0;
}
