
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct elfhdr {int e_phnum; } ;
typedef int Elf32_Half ;


 scalar_t__ VAR_0 ;

Elf32_Half FUNC_0(void)
{
 return VAR_0 ? (((struct elfhdr *)VAR_0)->e_phnum) : 0;
}
