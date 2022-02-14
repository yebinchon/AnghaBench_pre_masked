
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_driver {int name_base; scalar_t__ subtype; char* name; } ;


 scalar_t__ VAR_0 ;
 int* VAR_1 ;
 int FUNC_0 (char*,char*,char*,int,int) ;

__attribute__((used)) static void FUNC_1(struct tty_driver *VAR_2, int VAR_3, char *VAR_4)
{
 int VAR_5 = VAR_3 + VAR_2->name_base;

 FUNC_0(VAR_4, "%s%c%x",
  VAR_2->subtype == VAR_0 ? "tty" : VAR_2->name,
  VAR_1[VAR_5 >> 4 & 0xf], VAR_5 & 0xf);
}
