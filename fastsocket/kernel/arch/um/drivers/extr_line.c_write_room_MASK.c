
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct line {int head; int tail; int * buffer; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct line *VAR_1)
{
 int VAR_2;

 if (VAR_1->buffer == ((void*)0))
  return VAR_0 - 1;


 VAR_2 = VAR_1->head - VAR_1->tail;

 if (VAR_2 <= 0)
  VAR_2 += VAR_0;
 return VAR_2 - 1;
}
