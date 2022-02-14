
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cbuf {int mask; scalar_t__ len; scalar_t__ base; } ;



__attribute__((used)) static void FUNC_0(struct cbuf *VAR_0, int VAR_1)
{
 VAR_0->base = VAR_0->len = 0;
 VAR_0->mask = VAR_1-1;
}
