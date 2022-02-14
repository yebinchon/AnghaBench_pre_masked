
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int buf ;
struct TYPE_6__ {TYPE_1__* file; } ;
typedef TYPE_2__ Token ;
struct TYPE_5__ {int mtime; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*,int ,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int,char*,int ) ;

__attribute__((used)) static void FUNC_4(Token *VAR_1) {


    char VAR_2[30];
    FUNC_3(VAR_2, sizeof(VAR_2), "%a %b %e %T %Y", FUNC_0(&VAR_1->file->mtime));
    FUNC_1(VAR_1, VAR_0, FUNC_2(VAR_2));
}
