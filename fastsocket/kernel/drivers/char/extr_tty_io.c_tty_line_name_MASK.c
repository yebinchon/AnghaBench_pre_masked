
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_driver {char* name; scalar_t__ name_base; } ;


 int FUNC_0 (char*,char*,char*,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct tty_driver *VAR_0, int VAR_1, char *VAR_2)
{
 FUNC_0(VAR_2, "%s%d", VAR_0->name, VAR_1 + VAR_0->name_base);
}
