
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int cardtype; } ;
struct TYPE_7__ {TYPE_1__ ictl; } ;
typedef TYPE_2__ lmc_softc_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__* const,int ,int) ;
 int FUNC_1 (TYPE_2__* const,int ,int,int) ;

__attribute__((used)) static void
FUNC_2 (lmc_softc_t * const VAR_1)
{
  int VAR_2;

  VAR_1->ictl.cardtype = VAR_0;


  for (VAR_2 = 0; VAR_2 < 21; VAR_2++)
    {
      FUNC_1 (VAR_1, 0, 17, VAR_2);
      FUNC_1 (VAR_1, 0, 18, 0);
    }


  FUNC_1 (VAR_1, 0, 17, 1);
  FUNC_1 (VAR_1, 0, 18, 0x25);

  FUNC_1 (VAR_1, 0, 17, 5);
  FUNC_1 (VAR_1, 0, 18, 0x80);

  FUNC_1 (VAR_1, 0, 17, 14);
  FUNC_1 (VAR_1, 0, 18, 0x30);


  for (VAR_2 = 0; VAR_2 < 21; VAR_2++)
    {
      FUNC_1 (VAR_1, 0, 17, VAR_2);
      FUNC_0 (VAR_1, 0, 18);
    }
}
