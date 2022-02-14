
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pnp_dev {int dummy; } ;
struct ide_host {int dummy; } ;


 int FUNC_0 (struct ide_host*) ;
 struct ide_host* FUNC_1 (struct pnp_dev*) ;
 int FUNC_2 (struct pnp_dev*,int) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static void FUNC_4(struct pnp_dev *VAR_0)
{
 struct ide_host *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_1);

 FUNC_3(FUNC_2(VAR_0, 1), 1);
 FUNC_3(FUNC_2(VAR_0, 0), 8);
}
