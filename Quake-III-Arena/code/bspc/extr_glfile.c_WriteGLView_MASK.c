
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int headnode; } ;
typedef TYPE_1__ tree_t ;
typedef int FILE ;


 int FUNC_0 (char*,char*) ;
 int FUNC_1 (int ,int *) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char*,char*) ;
 char* VAR_1 ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (char*,char*,char*,char*) ;

void FUNC_6 (tree_t *VAR_2, char *VAR_3)
{
 char VAR_4[1024];
 FILE *VAR_5;

 VAR_0 = 0;
 FUNC_5 (VAR_4, "%s%s.gl",VAR_1, VAR_3);
 FUNC_4 ("Writing %s\n", VAR_4);

 VAR_5 = FUNC_3 (VAR_4, "w");
 if (!VAR_5)
  FUNC_0 ("Couldn't open %s", VAR_4);
 FUNC_1 (VAR_2->headnode, VAR_5);
 FUNC_2 (VAR_5);

 FUNC_4 ("%5i c_glfaces\n", VAR_0);
}
