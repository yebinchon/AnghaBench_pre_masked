
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {size_t level; TYPE_1__* section_pbuf; TYPE_3__* priv; } ;
typedef TYPE_2__ WriterContext ;
struct TYPE_7__ {int sep; } ;
struct TYPE_5__ {char* str; } ;
typedef TYPE_3__ FlatContext ;
typedef int AVBPrint ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int,int ) ;
 char* FUNC_3 (int *,char const*,int ) ;
 char* FUNC_4 (int *,char const*) ;
 int FUNC_5 (char*,char*) ;

__attribute__((used)) static void FUNC_6(WriterContext *VAR_1, const char *VAR_2, const char *VAR_3)
{
    FlatContext *VAR_4 = VAR_1->priv;
    AVBPrint VAR_5;

    FUNC_5("%s", VAR_1->section_pbuf[VAR_1->level].str);
    FUNC_2(&VAR_5, 1, VAR_0);
    FUNC_5("%s=", FUNC_3(&VAR_5, VAR_2, VAR_4->sep));
    FUNC_0(&VAR_5);
    FUNC_5("\"%s\"\n", FUNC_4(&VAR_5, VAR_3));
    FUNC_1(&VAR_5, ((void*)0));
}
