
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u_int ;
typedef int u_char ;
struct TYPE_5__ {int (* printdebug ) (TYPE_2__*,char*,scalar_t__) ;} ;
struct teimgr {TYPE_2__ tei_m; TYPE_1__* l2; } ;
struct TYPE_4__ {int flag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int* VAR_14 ;
 int FUNC_0 (TYPE_2__*,int ,int *) ;
 int FUNC_1 (TYPE_2__*,char*,scalar_t__) ;
 scalar_t__ FUNC_2 (int ,int *) ;

__attribute__((used)) static void
FUNC_3(struct teimgr *VAR_15, u_int VAR_16, u_char *VAR_17, int VAR_18)
{
 if (FUNC_2(VAR_7, &VAR_15->l2->flag))
  return;
 if (*VAR_14 & VAR_0)
  VAR_15->tei_m.printdebug(&VAR_15->tei_m, "tei handler mt %x", VAR_16);
 if (VAR_16 == VAR_8)
  FUNC_0(&VAR_15->tei_m, VAR_1, VAR_17);
 else if (VAR_16 == VAR_11)
  FUNC_0(&VAR_15->tei_m, VAR_4, VAR_17);
 else if (VAR_16 == VAR_9)
  FUNC_0(&VAR_15->tei_m, VAR_2, VAR_17);
 else if (VAR_16 == VAR_12)
  FUNC_0(&VAR_15->tei_m, VAR_5, VAR_17);
 else if (VAR_16 == VAR_13)
  FUNC_0(&VAR_15->tei_m, VAR_6, VAR_17);
 else if (VAR_16 == VAR_10)
  FUNC_0(&VAR_15->tei_m, VAR_3, VAR_17);
}
