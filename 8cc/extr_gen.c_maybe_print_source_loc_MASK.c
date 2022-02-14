
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* sourceLoc; } ;
struct TYPE_4__ {char* file; int line; } ;
typedef TYPE_2__ Node ;


 int FUNC_0 (char*,...) ;
 char* FUNC_1 (char*,long,int ) ;
 char* VAR_0 ;
 scalar_t__ FUNC_2 (int ,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,void*) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (char*) ;
 int VAR_1 ;
 scalar_t__ FUNC_7 (char*,char*) ;

__attribute__((used)) static void FUNC_8(Node *VAR_2) {
    if (!VAR_2->sourceLoc)
        return;
    char *VAR_3 = VAR_2->sourceLoc->file;
    long VAR_4 = (long)FUNC_2(VAR_1, VAR_3);
    if (!VAR_4) {
        VAR_4 = FUNC_3(VAR_1) + 1;
        FUNC_4(VAR_1, VAR_3, (void *)VAR_4);
        FUNC_0(".file %ld \"%s\"", VAR_4, FUNC_6(VAR_3));
    }
    char *VAR_5 = FUNC_1(".loc %ld %d 0", VAR_4, VAR_2->sourceLoc->line);
    if (FUNC_7(VAR_5, VAR_0)) {
        FUNC_0("%s", VAR_5);
        FUNC_5(VAR_3, VAR_2->sourceLoc->line);
    }
    VAR_0 = VAR_5;
}
