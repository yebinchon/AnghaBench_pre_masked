
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;






 int FUNC_0 (struct resource*) ;

char *FUNC_1(struct resource *VAR_0)
{
 switch (FUNC_0(VAR_0)) {
 case 130:
  return "io";
 case 128:
  return "mem";
 case 129:
  return "irq";
 case 131:
  return "dma";
 }
 return ((void*)0);
}
