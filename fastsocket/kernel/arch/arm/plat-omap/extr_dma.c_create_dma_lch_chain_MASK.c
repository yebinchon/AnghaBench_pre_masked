
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int next_linked_ch; int prev_linked_ch; } ;


 int FUNC_0 (int) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static void FUNC_3(int VAR_1, int VAR_2)
{
 u32 VAR_3;


 if (VAR_0[VAR_1].next_linked_ch == -1) {
  VAR_0[VAR_1].next_linked_ch = VAR_2;
  VAR_0[VAR_1].prev_linked_ch = VAR_2;
  VAR_0[VAR_2].next_linked_ch = VAR_1;
  VAR_0[VAR_2].prev_linked_ch = VAR_1;
 }


 else {
  VAR_0[VAR_2].next_linked_ch =
     VAR_0[VAR_1].next_linked_ch;
  VAR_0[VAR_2].prev_linked_ch = VAR_1;
  VAR_0[VAR_1].next_linked_ch = VAR_2;
  VAR_0[VAR_0[VAR_2].next_linked_ch].prev_linked_ch =
     VAR_2;
 }

 VAR_3 = FUNC_1(FUNC_0(VAR_1));
 VAR_3 &= ~(0x1f);
 VAR_3 |= VAR_2;
 FUNC_2(VAR_3, FUNC_0(VAR_1));

 VAR_3 = FUNC_1(FUNC_0(VAR_2));
 VAR_3 &= ~(0x1f);
 VAR_3 |= (VAR_0[VAR_2].next_linked_ch);
 FUNC_2(VAR_3, FUNC_0(VAR_2));
}
