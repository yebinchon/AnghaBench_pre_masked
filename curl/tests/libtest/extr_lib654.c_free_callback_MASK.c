
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct WriteThis {int freecount; } ;



__attribute__((used)) static void FUNC_0(void *VAR_0)
{
  struct WriteThis *VAR_1 = (struct WriteThis *) VAR_0;

  VAR_1->freecount++;
}
