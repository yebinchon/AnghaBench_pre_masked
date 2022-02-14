
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int master; } ;
struct spi_lm70llp {TYPE_1__ bitbang; int pd; struct parport* port; } ;
struct parport {int dummy; } ;


 struct spi_lm70llp* VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct parport*,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct parport *VAR_1)
{
 struct spi_lm70llp *VAR_2;

 if (!VAR_0 || VAR_0->port != VAR_1)
  return;

 VAR_2 = VAR_0;
 FUNC_3(&VAR_2->bitbang);


 FUNC_2(VAR_2->port, 0);

 FUNC_0(VAR_2->pd);
 FUNC_1(VAR_2->pd);

 (void) FUNC_4(VAR_2->bitbang.master);

 VAR_0 = ((void*)0);
}
