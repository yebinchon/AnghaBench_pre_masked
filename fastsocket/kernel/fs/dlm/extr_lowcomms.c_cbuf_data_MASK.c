
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cbuf {int base; int len; int mask; } ;



__attribute__((used)) static int FUNC_0(struct cbuf *VAR_0)
{
 return ((VAR_0->base + VAR_0->len) & VAR_0->mask);
}
