
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int WINDOW ;
struct TYPE_15__ {int atr; } ;
struct TYPE_14__ {int atr; } ;
struct TYPE_13__ {int atr; } ;
struct TYPE_12__ {int atr; } ;
struct TYPE_11__ {int atr; } ;
struct TYPE_10__ {int atr; } ;
struct TYPE_9__ {int atr; } ;
struct TYPE_16__ {TYPE_7__ item; TYPE_6__ item_selected; TYPE_5__ tag; TYPE_4__ tag_selected; TYPE_3__ check; TYPE_2__ check_selected; TYPE_1__ menubox; } ;


 scalar_t__ VAR_0 ;
 TYPE_8__ VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char) ;
 int FUNC_2 () ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_3 (int) ;
 int FUNC_4 (int *,int,int,char) ;
 int FUNC_5 (char*,int ,int) ;
 int FUNC_6 (int *,char) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,int,scalar_t__) ;
 int FUNC_10 (int *,char*,char) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static void FUNC_12(WINDOW * VAR_4, int VAR_5, int VAR_6)
{
 int VAR_7;
 char *VAR_8 = FUNC_3(VAR_3 + 1);

 FUNC_5(VAR_8, FUNC_2(), VAR_3 - VAR_2);
 VAR_8[VAR_3 - VAR_2] = '\0';


 FUNC_8(VAR_4, VAR_1.menubox.atr);
 FUNC_9(VAR_4, VAR_5, 0);
 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++)
  FUNC_6(VAR_4, ' ');

 FUNC_9(VAR_4, VAR_5, VAR_0);
 FUNC_8(VAR_4, VAR_6 ? VAR_1.check_selected.atr
   : VAR_1.check.atr);
 if (!FUNC_1(':'))
  FUNC_10(VAR_4, "(%c)", FUNC_1('X') ? 'X' : ' ');

 FUNC_8(VAR_4, VAR_6 ? VAR_1.tag_selected.atr : VAR_1.tag.atr);
 FUNC_4(VAR_4, VAR_5, VAR_2, VAR_8[0]);
 FUNC_8(VAR_4, VAR_6 ? VAR_1.item_selected.atr : VAR_1.item.atr);
 FUNC_7(VAR_4, VAR_8 + 1);
 if (VAR_6) {
  FUNC_9(VAR_4, VAR_5, VAR_0 + 1);
  FUNC_11(VAR_4);
 }
 FUNC_0(VAR_8);
}
