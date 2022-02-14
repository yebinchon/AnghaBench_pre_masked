
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct stat {int st_mtime; } ;
struct TYPE_4__ {char* name; int line; int column; int mtime; int * file; } ;
typedef TYPE_1__ File ;
typedef int FILE ;


 TYPE_1__* FUNC_0 (int,int) ;
 int VAR_0 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,struct stat*) ;
 int FUNC_4 (int ) ;

File *FUNC_5(FILE *VAR_1, char *VAR_2) {
    File *VAR_3 = FUNC_0(1, sizeof(File));
    VAR_3->file = VAR_1;
    VAR_3->name = VAR_2;
    VAR_3->line = 1;
    VAR_3->column = 1;
    struct stat VAR_4;
    if (FUNC_3(FUNC_2(VAR_1), &VAR_4) == -1)
        FUNC_1("fstat failed: %s", FUNC_4(VAR_0));
    VAR_3->mtime = VAR_4.st_mtime;
    return VAR_3;
}
