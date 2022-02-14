
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct savestate_state {size_t pos; } ;



size_t FUNC_0(void *VAR_0, size_t VAR_1, size_t VAR_2, void *VAR_3)
{
 struct savestate_state *VAR_4 = VAR_3;
 size_t VAR_5 = VAR_1 * VAR_2;

 VAR_4->pos += VAR_5;
 return VAR_5;
}
