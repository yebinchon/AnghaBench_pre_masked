
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int devnode_t ;
typedef int devdirent_t ;
struct TYPE_2__ {int * de_dnp; } ;


 int FUNC_0 (int *) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (int *,char*,int,char*,int **) ;
 int FUNC_2 (char*,int) ;

int
FUNC_3()
{
 int VAR_1 = 0;
 devdirent_t *VAR_2 = ((void*)0), *VAR_3 = ((void*)0), *VAR_4 = ((void*)0);
 devnode_t *VAR_5 = VAR_0->de_dnp;


 char VAR_6[] = "stdin";
 char VAR_7[] = "stdout";
 char VAR_8[] = "stderr";
 char VAR_9[] = "fd/0";
 char VAR_10[] = "fd/1";
 char VAR_11[] = "fd/2";

 if ((VAR_1 = FUNC_1(VAR_5, VAR_6, 0555, VAR_9, &VAR_2))) {
  FUNC_2("Couldn't make stdin, err %d.\n", VAR_1);
  goto bad;
 }

 if ((VAR_1 = FUNC_1(VAR_5, VAR_7, 0555, VAR_10, &VAR_3))) {
  FUNC_2("Couldn't make stdout, err %d.\n", VAR_1);
  goto bad;
 }

 if ((VAR_1 = FUNC_1(VAR_5, VAR_8, 0555, VAR_11, &VAR_4))) {
  FUNC_2("Couldn't make stderr, err %d.\n", VAR_1);
  goto bad;
 }

 return 0;

bad:
 if (VAR_2) {
  FUNC_0(VAR_2);
 }
 if (VAR_3) {
  FUNC_0(VAR_3);
 }
 if (VAR_4) {
  FUNC_0(VAR_4);
 }

 return VAR_1;
}
