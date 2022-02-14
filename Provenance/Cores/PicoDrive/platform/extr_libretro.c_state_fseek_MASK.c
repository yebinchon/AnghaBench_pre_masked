
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct savestate_state {long pos; int size; } ;






int FUNC_0(void *VAR_0, long VAR_1, int VAR_2)
{
 struct savestate_state *VAR_3 = VAR_0;

 switch (VAR_2) {
 case 128:
  VAR_3->pos = VAR_1;
  break;
 case 130:
  VAR_3->pos += VAR_1;
  break;
 case 129:
  VAR_3->pos = VAR_3->size + VAR_1;
  break;
 }
 return (int)VAR_3->pos;
}
