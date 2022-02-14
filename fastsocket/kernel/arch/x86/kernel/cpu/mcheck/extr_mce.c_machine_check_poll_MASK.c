
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mce {int bank; int status; scalar_t__ tsc; scalar_t__ addr; scalar_t__ misc; } ;
typedef int mce_banks_t ;
typedef enum mcp_flags { ____Placeholder_mcp_flags } mcp_flags ;
struct TYPE_2__ {int ctl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int VAR_6 ;
 int FUNC_1 () ;
 TYPE_1__* VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct mce*,int *) ;
 int FUNC_3 (struct mce*) ;
 int VAR_9 ;
 scalar_t__ FUNC_4 (int,struct mce*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct mce*,int) ;
 scalar_t__ VAR_10 ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 () ;
 int FUNC_10 (int,int ) ;

void FUNC_11(enum mcp_flags VAR_11, mce_banks_t *VAR_12)
{
 struct mce VAR_13;
 int VAR_14;

 FUNC_8(VAR_9);

 FUNC_2(&VAR_13, ((void*)0));

 for (VAR_14 = 0; VAR_14 < VAR_6; VAR_14++) {
  if (!VAR_7[VAR_14].ctl || !FUNC_10(VAR_14, *VAR_12))
   continue;

  VAR_13.misc = 0;
  VAR_13.addr = 0;
  VAR_13.bank = VAR_14;
  VAR_13.tsc = 0;

  FUNC_1();
  VAR_13.status = FUNC_5(FUNC_0(VAR_14));
  if (!(VAR_13.status & VAR_2))
   continue;

  if (FUNC_4(VAR_14, &VAR_13))
   continue;







  if (!(VAR_11 & VAR_5) &&
      (VAR_13.status & (VAR_10 ? VAR_0 : VAR_1)))
   continue;

  FUNC_6(&VAR_13, VAR_14);

  if (!(VAR_11 & VAR_4))
   VAR_13.tsc = 0;




  if (!(VAR_11 & VAR_3) && !VAR_8)
   FUNC_3(&VAR_13);




  FUNC_7(FUNC_0(VAR_14), 0);
 }






 FUNC_9();
}
