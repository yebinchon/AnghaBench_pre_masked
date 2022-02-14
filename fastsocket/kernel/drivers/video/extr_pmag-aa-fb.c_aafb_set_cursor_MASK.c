
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aafb_cursor {int y; int x; } ;
struct aafb_info {int bt431; struct aafb_cursor cursor; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct aafb_info *VAR_0, int VAR_1)
{
 struct aafb_cursor *VAR_2 = &VAR_0->cursor;

 if (VAR_1) {
  FUNC_2(VAR_0->bt431, VAR_2->x, VAR_2->y);
  FUNC_0(VAR_0->bt431);
 } else
  FUNC_1(VAR_0->bt431);
}
