
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int header ;
struct TYPE_4__ {int e_shoff; int e_shnum; int e_shstrndx; } ;
typedef TYPE_1__ Elf32_Ehdr ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *,int,int,int ,int,int ) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,...) ;

int FUNC_7(int VAR_6, char** VAR_7) {
    int VAR_8;
    static Elf32_Ehdr* VAR_9;

    FUNC_6(".: Elf corrupt :.\n");

    if(VAR_6 < 2){
        FUNC_6("Usage: %s file", VAR_7[0]);
        return 1;
    }

    if((VAR_8 = FUNC_4(VAR_7[1], VAR_3)) < 0){
        FUNC_5("open");
        return 1;
    }


    if((VAR_9 = (Elf32_Ehdr *) FUNC_1(((void*)0), sizeof(VAR_9), VAR_4 | VAR_5, VAR_1, VAR_8, 0)) == VAR_0){
        FUNC_5("mmap");
        FUNC_0(VAR_8);
        return 1;
    }

    FUNC_6("[*] Current header values:\n");
    FUNC_6("\te_shoff:%d\n\te_shnum:%d\n\te_shstrndx:%d\n",
            VAR_9->e_shoff, VAR_9->e_shnum, VAR_9->e_shstrndx);

    VAR_9->e_shoff = 0xffff;
    VAR_9->e_shnum = 0xffff;
    VAR_9->e_shstrndx = 0xffff;

    FUNC_6("[*] Patched header values:\n");
    FUNC_6("\te_shoff:%d\n\te_shnum:%d\n\te_shstrndx:%d\n",
            VAR_9->e_shoff, VAR_9->e_shnum, VAR_9->e_shstrndx);

    if(FUNC_2(((void*)0), 0, VAR_2) == -1){
        FUNC_5("msync");
        FUNC_0(VAR_8);
        return 1;
    }

    FUNC_0(VAR_8);
    FUNC_3(VAR_9, 0);
    FUNC_6("You should no more be able to run \"%s\" inside GDB\n", VAR_7[1]);
    return 0;
}
