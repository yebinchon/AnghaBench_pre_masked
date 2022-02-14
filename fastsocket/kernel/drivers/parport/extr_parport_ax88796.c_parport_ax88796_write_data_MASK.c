
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parport {int dummy; } ;
struct ax_drvdata {int spp_data; } ;


 struct ax_drvdata* FUNC_0 (struct parport*) ;
 int FUNC_1 (unsigned char,int ) ;

__attribute__((used)) static void
FUNC_2(struct parport *VAR_0, unsigned char VAR_1)
{
 struct ax_drvdata *VAR_2 = FUNC_0(VAR_0);

 FUNC_1(VAR_1, VAR_2->spp_data);
}
