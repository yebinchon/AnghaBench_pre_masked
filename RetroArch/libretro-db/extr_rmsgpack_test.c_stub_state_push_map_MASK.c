
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct stub_state {size_t i; int* stack; } ;


 int FUNC_0 (char*) ;

__attribute__((used)) static void FUNC_1(struct stub_state *VAR_0, uint32_t VAR_1)
{
 VAR_0->i++;
 VAR_0->stack[VAR_0->i] = 1;
 VAR_0->i++;
 VAR_0->stack[VAR_0->i] = VAR_1 * 2;
 FUNC_0("{");
}
