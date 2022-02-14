
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct psmouse {int type; } ;
typedef int ssize_t ;
struct TYPE_2__ {char* name; } ;


 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (char*,char*,char*) ;

__attribute__((used)) static ssize_t FUNC_2(struct psmouse *VAR_0, void *VAR_1, char *VAR_2)
{
 return FUNC_1(VAR_2, "%s\n", FUNC_0(VAR_0->type)->name);
}
