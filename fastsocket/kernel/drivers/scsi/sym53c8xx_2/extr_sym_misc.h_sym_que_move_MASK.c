
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sym_quehead {struct sym_quehead* blink; struct sym_quehead* flink; } ;



__attribute__((used)) static inline void FUNC_0(struct sym_quehead *VAR_0,
 struct sym_quehead *VAR_1)
{
 struct sym_quehead *VAR_2, *VAR_3;

 VAR_2 = VAR_0->flink;
 if (VAR_2 != VAR_0) {
  VAR_2->blink = VAR_1;
  VAR_1->flink = VAR_2;
  VAR_3 = VAR_0->blink;
  VAR_3->flink = VAR_1;
  VAR_1->blink = VAR_3;
  VAR_0->flink = VAR_0;
  VAR_0->blink = VAR_0;
 } else {
  VAR_1->flink = VAR_1;
  VAR_1->blink = VAR_1;
 }
}
