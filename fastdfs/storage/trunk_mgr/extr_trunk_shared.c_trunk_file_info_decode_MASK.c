
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* size; void* offset; void* id; } ;
typedef TYPE_1__ FDFSTrunkFileInfo ;


 int VAR_0 ;
 int FUNC_0 (int *,char const*,int,char*,int*) ;
 void* FUNC_1 (char*) ;
 int VAR_1 ;

void FUNC_2(const char *VAR_2, FDFSTrunkFileInfo *VAR_3)
{
 char VAR_4[VAR_0];
 int VAR_5;

 FUNC_0(&VAR_1, VAR_2, VAR_0, VAR_4, &VAR_5);


 VAR_3->id = FUNC_1(VAR_4);
 VAR_3->offset = FUNC_1(VAR_4 + sizeof(int));
 VAR_3->size = FUNC_1(VAR_4 + sizeof(int) * 2);
}
