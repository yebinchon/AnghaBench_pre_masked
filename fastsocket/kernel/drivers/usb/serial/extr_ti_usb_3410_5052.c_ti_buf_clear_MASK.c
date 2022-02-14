
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct circ_buf {scalar_t__ tail; scalar_t__ head; } ;



__attribute__((used)) static void FUNC_0(struct circ_buf *VAR_0)
{
 VAR_0->head = VAR_0->tail = 0;
}
