
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint64_t ;
struct socket {int dummy; } ;
struct TYPE_10__ {int s_addr; } ;
struct TYPE_11__ {TYPE_4__ ia46_addr4; } ;
struct TYPE_12__ {TYPE_5__ addr46; int addr6; } ;
struct TYPE_7__ {int s_addr; } ;
struct TYPE_8__ {TYPE_1__ ia46_addr4; } ;
struct TYPE_9__ {TYPE_2__ addr46; int addr6; } ;
struct cfil_hash_entry {int cfentry_family; int cfentry_fport; int cfentry_lport; TYPE_6__ cfentry_faddr; TYPE_3__ cfentry_laddr; } ;
typedef int local ;




 int FUNC_0 (int,char*,char const*,int ,struct cfil_hash_entry*,int ,int ,int ,char*,char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct socket*) ;
 int FUNC_2 (int const,void const*,char*,int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(int VAR_1, struct socket *VAR_2, struct cfil_hash_entry *VAR_3, uint64_t VAR_4, const char* VAR_5)
{
    char VAR_6[VAR_0+6];
    char VAR_7[VAR_0+6];
    const void *VAR_8;


    if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0)) {
        return;
    }

    VAR_6[0] = VAR_7[0] = 0x0;

    switch (VAR_3->cfentry_family) {
        case 128:
            VAR_8 = &VAR_3->cfentry_laddr.addr6;
            FUNC_2(128, VAR_8, VAR_6, sizeof(VAR_6));
            VAR_8 = &VAR_3->cfentry_faddr.addr6;
            FUNC_2(128, VAR_8, VAR_7, sizeof(VAR_6));
            break;
        case 129:
            VAR_8 = &VAR_3->cfentry_laddr.addr46.ia46_addr4.s_addr;
            FUNC_2(129, VAR_8, VAR_6, sizeof(VAR_6));
            VAR_8 = &VAR_3->cfentry_faddr.addr46.ia46_addr4.s_addr;
            FUNC_2(129, VAR_8, VAR_7, sizeof(VAR_6));
            break;
        default:
            return;
    }

 FUNC_0(VAR_1, "<%s>: <UDP so %llx, entry %p, sockID %llu> lport %d fport %d laddr %s faddr %s",
    VAR_5,
    (uint64_t)FUNC_1(VAR_2), VAR_3, VAR_4,
    FUNC_3(VAR_3->cfentry_lport), FUNC_3(VAR_3->cfentry_fport), VAR_6, VAR_7);
}
