
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bttv {scalar_t__ field_count; scalar_t__ users; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(struct bttv *VAR_2)
{
 int VAR_3 = 0;

 if (VAR_2->users)
  VAR_3++;

 if (VAR_3) {

  FUNC_1(VAR_1,VAR_0);
 } else {

  FUNC_0(~VAR_1,VAR_0);
  VAR_2->field_count = 0;
 }
}
