
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct aaedkbd {int * keycode; TYPE_1__* poll_dev; } ;
struct TYPE_2__ {int input; } ;


 unsigned int FUNC_0 (unsigned int) ;
 unsigned int VAR_0 ;
 unsigned int FUNC_1 (unsigned int,unsigned int) ;
 int FUNC_2 (int ,int ,unsigned int) ;

__attribute__((used)) static void FUNC_3(struct aaedkbd *VAR_1,
    unsigned int VAR_2, unsigned int VAR_3)
{
 unsigned int VAR_4, VAR_5;
 unsigned int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  VAR_4 = FUNC_1(VAR_6, VAR_2);
  VAR_5 = VAR_3 & FUNC_0(VAR_6);

  FUNC_2(VAR_1->poll_dev->input,
     VAR_1->keycode[VAR_4], VAR_5);
 }
}
