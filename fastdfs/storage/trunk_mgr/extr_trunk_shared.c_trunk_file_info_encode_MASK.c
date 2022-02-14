
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int buff ;
struct TYPE_3__ {int size; int offset; int id; } ;
typedef TYPE_1__ FDFSTrunkFileInfo ;


 int FUNC_0 (int *,char*,int,char*,int*,int) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*) ;

void FUNC_2(const FDFSTrunkFileInfo *VAR_1, char *VAR_2)
{
 char VAR_3[sizeof(int) * 3];
 int VAR_4;

 FUNC_1(VAR_1->id, VAR_3);
 FUNC_1(VAR_1->offset, VAR_3 + sizeof(int));
 FUNC_1(VAR_1->size, VAR_3 + sizeof(int) * 2);
 FUNC_0(&VAR_0, VAR_3, sizeof(VAR_3), VAR_2, &VAR_4, 0);

}
