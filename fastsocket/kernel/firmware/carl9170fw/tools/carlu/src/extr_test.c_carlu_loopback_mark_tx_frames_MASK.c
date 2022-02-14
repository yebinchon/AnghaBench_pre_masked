
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct frame {unsigned int len; scalar_t__* data; } ;



__attribute__((used)) static void FUNC_0(struct frame *VAR_0)
{
 unsigned int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->len; VAR_1++)
  VAR_0->data[VAR_1] = (uint8_t) VAR_1;
}
