
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* gr; } ;
struct TYPE_3__ {int l; } ;


 int FUNC_0 (int,int,int) ;
 int FUNC_1 (int,int,int) ;
 int FUNC_2 (int,int,int ,int) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int) ;
 int VAR_2 ;
 TYPE_2__ VAR_3 ;

__attribute__((used)) static void FUNC_4(int VAR_4)
{
 FUNC_0(5, 5, 16);
 FUNC_2(5, 5, 0, 16);
 FUNC_1(5, 5, 16);
 FUNC_3(VAR_1);
 if (VAR_4 != -1) {
  VAR_3.gr[VAR_0].l = VAR_4;
  VAR_2 |= 1 << VAR_1;
 } else
  VAR_2 &= ~(1 << VAR_1);
}
