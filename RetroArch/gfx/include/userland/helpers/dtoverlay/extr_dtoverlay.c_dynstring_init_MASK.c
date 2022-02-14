
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dynstring {int * buf; scalar_t__ len; scalar_t__ size; } ;



__attribute__((used)) static void FUNC_0(struct dynstring *VAR_0)
{
   VAR_0->size = 0;
   VAR_0->len = 0;
   VAR_0->buf = ((void*)0);
}
