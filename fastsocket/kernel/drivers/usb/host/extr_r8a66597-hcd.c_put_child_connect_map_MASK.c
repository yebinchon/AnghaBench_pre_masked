
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r8a66597 {int* child_connect_map; } ;



__attribute__((used)) static void FUNC_0(struct r8a66597 *VAR_0, int VAR_1)
{
 int VAR_2;

 VAR_2 = VAR_1 / 32;
 VAR_0->child_connect_map[VAR_2] &= ~(1 << (VAR_1 % 32));
}
