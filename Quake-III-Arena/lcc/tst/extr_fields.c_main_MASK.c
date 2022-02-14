
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int a; int b; int x; int y; int z; int c; } ;
struct TYPE_4__ {int a; int b; int c; } ;


 int FUNC_0 (TYPE_2__*) ;
 void* VAR_0 ;
 int FUNC_1 (char*,int,int,int,...) ;
 TYPE_2__ VAR_1 ;
 TYPE_1__ VAR_2 ;

FUNC_2()
{
 FUNC_1("x = %d %d %d %d %d %d\n", VAR_1.a, VAR_1.b, VAR_1.x, VAR_1.y, VAR_1.z, VAR_1.c);
 FUNC_1("y = %d %d %d\n", VAR_2.a, VAR_2.b, VAR_2.c);
 VAR_1.y = VAR_0;
 VAR_1.z = 070;
 FUNC_1("x = %d %d %d %d %d %d\n", VAR_1.a, VAR_1.b, VAR_1.x, VAR_1.y, VAR_1.z, VAR_1.c);
 VAR_2.a = 2;
 VAR_2.c = VAR_0;
 FUNC_1("y = %d %d %d\n", VAR_2.a, VAR_2.b, VAR_2.c);
 FUNC_0(&VAR_1);
 return 0;
}
