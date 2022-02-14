
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nandsim {int held_cnt; int * held_pages; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct nandsim *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->held_cnt; VAR_1++)
  FUNC_0(VAR_0->held_pages[VAR_1]);
}
