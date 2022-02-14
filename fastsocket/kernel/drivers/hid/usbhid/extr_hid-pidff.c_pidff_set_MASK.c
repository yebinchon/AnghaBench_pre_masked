
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pidff_usage {int * value; int field; } ;


 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (int ,int,int ) ;

__attribute__((used)) static void FUNC_2(struct pidff_usage *VAR_0, u16 VAR_1)
{
 VAR_0->value[0] = FUNC_1(VAR_1, 0xffff, VAR_0->field);
 FUNC_0("calculated from %d to %d", VAR_1, VAR_0->value[0]);
}
