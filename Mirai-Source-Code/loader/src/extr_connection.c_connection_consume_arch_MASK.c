
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct elf_hdr {int* e_ident; scalar_t__ e_machine; } ;
struct TYPE_2__ {scalar_t__* arch; scalar_t__ has_arch; } ;
struct connection {int rdbuf_pos; scalar_t__ rdbuf; TYPE_1__ info; } ;





 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 char* VAR_17 ;
 scalar_t__ VAR_18 ;
 int FUNC_0 (struct connection*) ;
 void* FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,scalar_t__,int) ;
 int FUNC_3 (scalar_t__*,char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (scalar_t__,int,char*,int) ;

int FUNC_6(struct connection *VAR_19)
{
    if (!VAR_19->info.has_arch)
    {
        struct elf_hdr *VAR_20;
        int VAR_21;

        if ((VAR_21 = FUNC_5(VAR_19->rdbuf, VAR_19->rdbuf_pos, "ELF", 3)) == -1)
            return 0;
        VAR_21 -= 4;

        VAR_20 = (struct elf_hdr *)(VAR_19->rdbuf + VAR_21);
        VAR_19->info.has_arch = VAR_18;

        switch (VAR_20->e_ident[VAR_0])
        {
            case 128:
                return 0;
            case 130:



                break;
            case 129:



                break;
        }


        if (VAR_20->e_machine == VAR_7 || VAR_20->e_machine == VAR_6)
            FUNC_3(VAR_19->info.arch, "arm");
        else if (VAR_20->e_machine == VAR_8 || VAR_20->e_machine == VAR_9)
        {
            if (VAR_20->e_ident[VAR_0] == 129)
                FUNC_3(VAR_19->info.arch, "mpsl");
            else
                FUNC_3(VAR_19->info.arch, "mips");
        }
        else if (VAR_20->e_machine == VAR_1 || VAR_20->e_machine == VAR_2 || VAR_20->e_machine == VAR_4 || VAR_20->e_machine == VAR_16)
            FUNC_3(VAR_19->info.arch, "x86");
        else if (VAR_20->e_machine == VAR_13 || VAR_20->e_machine == VAR_14 || VAR_20->e_machine == VAR_15)
            FUNC_3(VAR_19->info.arch, "spc");
        else if (VAR_20->e_machine == VAR_3 || VAR_20->e_machine == VAR_5)
            FUNC_3(VAR_19->info.arch, "m68k");
        else if (VAR_20->e_machine == VAR_10 || VAR_20->e_machine == VAR_11)
            FUNC_3(VAR_19->info.arch, "ppc");
        else if (VAR_20->e_machine == VAR_12)
            FUNC_3(VAR_19->info.arch, "sh4");
        else
        {
            VAR_19->info.arch[0] = 0;
            FUNC_0(VAR_19);
        }
    }
    else
    {
        int VAR_22;

        if ((VAR_22 = FUNC_5(VAR_19->rdbuf, VAR_19->rdbuf_pos, VAR_17, FUNC_4(VAR_17))) != -1)
            return VAR_22;
        if (VAR_19->rdbuf_pos > 7168)
        {

            FUNC_2(VAR_19->rdbuf, VAR_19->rdbuf + 6144, VAR_19->rdbuf_pos - 6144);
            VAR_19->rdbuf_pos -= 6144;
        }
    }

    return 0;
}
