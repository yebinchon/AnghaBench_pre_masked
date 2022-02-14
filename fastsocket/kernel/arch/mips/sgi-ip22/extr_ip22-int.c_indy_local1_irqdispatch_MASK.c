
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int istat1; int imask1; int vmeistat; int cmeimask1; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int* VAR_1 ;
 int* VAR_2 ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static void FUNC_1(void)
{
 u8 VAR_4 = VAR_3->istat1 & VAR_3->imask1;
 u8 VAR_5;
 int VAR_6;

 if (VAR_4 & VAR_0) {
  VAR_5 = VAR_3->vmeistat & VAR_3->cmeimask1;
  VAR_6 = VAR_2[VAR_5];
 } else
  VAR_6 = VAR_1[VAR_4];


 if (VAR_6)
  FUNC_0(VAR_6);
}
