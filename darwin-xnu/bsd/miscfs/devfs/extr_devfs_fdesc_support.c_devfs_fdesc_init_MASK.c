
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int devnode_t ;
typedef int devdirent_t ;
struct TYPE_2__ {int * de_dnp; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char*,int *,int ,int *,int *,int *,int **) ;
 TYPE_1__* VAR_3 ;
 int FUNC_3 () ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int ,int ,int *) ;
 int FUNC_5 (char*,int *) ;
 int FUNC_6 (int *,int ,int *) ;

int
FUNC_7()
{
 int VAR_8 = 0;
 devnode_t *VAR_9 = VAR_3->de_dnp;
 devdirent_t *VAR_10;


 VAR_7 = FUNC_4(VAR_2, VAR_1, &VAR_6);
 VAR_4 = FUNC_5("fdesc", ((void*)0));
 FUNC_6(&VAR_5, VAR_4, ((void*)0));

 FUNC_0();
 FUNC_2("fd", VAR_9, VAR_0, ((void*)0), ((void*)0), ((void*)0), &VAR_10);
 FUNC_3();
 FUNC_1();

 return(VAR_8);
}
