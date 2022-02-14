
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int headnode; } ;
typedef TYPE_1__ tree_t ;


 int FUNC_0 (char*,char*) ;
 char* VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (int ,char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (char*) ;
 char* VAR_5 ;
 int FUNC_8 (char*,char*,char*) ;

void FUNC_9 (tree_t *VAR_6)
{
 char VAR_7[1024];

 FUNC_7 ("--- WritePortalFile ---\n");


 FUNC_8 (VAR_7, "%s.prt", VAR_5);
 FUNC_3 ("writing %s\n", VAR_7);
 VAR_4 = FUNC_5 (VAR_7, "w");
 if (!VAR_4)
  FUNC_0 ("Error opening %s", VAR_7);

 FUNC_6 (VAR_4, "%s\n", VAR_0);
 FUNC_6 (VAR_4, "%i\n", VAR_2);
 FUNC_6 (VAR_4, "%i\n", VAR_3);
 FUNC_6 (VAR_4, "%i\n", VAR_1);

 FUNC_2(VAR_6->headnode);
 FUNC_1(VAR_6->headnode);

 FUNC_4 (VAR_4);
}
