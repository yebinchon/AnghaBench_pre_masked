
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parport {int dummy; } ;
struct ax_drvdata {int spp_data; } ;


 struct ax_drvdata* FUNC_0 (struct parport*) ;
 unsigned char FUNC_1 (int ) ;

__attribute__((used)) static unsigned char
FUNC_2(struct parport *VAR_0)
{
 struct ax_drvdata *VAR_1 = FUNC_0(VAR_0);

 return FUNC_1(VAR_1->spp_data);
}
