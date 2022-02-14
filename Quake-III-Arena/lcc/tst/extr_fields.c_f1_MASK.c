
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct baz {int a; int b; } ;


 int FUNC_0 (char*,...) ;

FUNC_1(struct baz *VAR_0) {
 VAR_0->a = VAR_0->b = 0;
 if (VAR_0->b)
  FUNC_0("p->b != 0!\n");
 VAR_0->a = 0x3; VAR_0->b = 0xf;
 FUNC_0("p->a = 0x%x, p->b = 0x%x\n", VAR_0->a, VAR_0->b);
}
