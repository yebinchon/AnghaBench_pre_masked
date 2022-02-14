
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pin_group {int nr_pins; struct pin_desc* pins; } ;
struct pin_desc {int id; } ;


 int FUNC_0 (int ,char const*) ;

void FUNC_1(struct pin_group *VAR_0, const char *VAR_1)
{
 struct pin_desc *VAR_2;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0->nr_pins; VAR_3++) {
  VAR_2 = &VAR_0->pins[VAR_3];
  FUNC_0(VAR_2->id, VAR_1);
 }
}
