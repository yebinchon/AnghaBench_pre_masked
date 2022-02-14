
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cplbinfo_data {char cplb_type; int switched; int tbl; int mem_control; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int * VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;

__attribute__((used)) static void FUNC_2(struct cplbinfo_data *VAR_4, unsigned int VAR_5)
{
 if (VAR_4->cplb_type == 'I') {
  VAR_4->mem_control = FUNC_1();
  VAR_4->tbl = VAR_3[VAR_5];
  VAR_4->switched = VAR_2;
 } else {
  VAR_4->mem_control = FUNC_0();
  VAR_4->tbl = VAR_0[VAR_5];
  VAR_4->switched = VAR_1;
 }
}
