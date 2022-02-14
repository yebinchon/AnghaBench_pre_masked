
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gameport {int dummy; } ;
struct adi_port {int reads; int bad; } ;


 scalar_t__ FUNC_0 (struct adi_port*) ;
 struct adi_port* FUNC_1 (struct gameport*) ;

__attribute__((used)) static void FUNC_2(struct gameport *VAR_0)
{
 struct adi_port *VAR_1 = FUNC_1(VAR_0);

 VAR_1->bad -= FUNC_0(VAR_1);
 VAR_1->reads++;
}
