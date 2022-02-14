
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_14__ {int s_addr; } ;
struct TYPE_11__ {int s_addr; } ;
struct inpcb {int inp_vflag; int in6p_faddr; int inp_fport; int in6p_laddr; int inp_lport; TYPE_6__ inp_faddr; TYPE_3__ inp_laddr; } ;
struct TYPE_12__ {int s_addr; } ;
struct TYPE_13__ {TYPE_4__ ia46_addr4; } ;
struct TYPE_16__ {int addr6; TYPE_5__ addr46; } ;
struct TYPE_9__ {int s_addr; } ;
struct TYPE_10__ {TYPE_1__ ia46_addr4; } ;
struct TYPE_15__ {int addr6; TYPE_2__ addr46; } ;
struct cfil_hash_entry {int cfentry_family; TYPE_8__ cfentry_faddr; int cfentry_fport; TYPE_7__ cfentry_laddr; int cfentry_lport; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static bool
FUNC_0(struct cfil_hash_entry *VAR_6, bool VAR_7, struct inpcb *VAR_8)
{
    if (VAR_6 == ((void*)0) || VAR_8 == ((void*)0)) {
        return VAR_2;
    }

    if (VAR_8->inp_vflag & VAR_3) {
        if (VAR_7 == VAR_5) {
            VAR_6->cfentry_lport = VAR_8->inp_lport;
            VAR_6->cfentry_laddr.addr46.ia46_addr4.s_addr = VAR_8->inp_laddr.s_addr;
        } else {
            VAR_6->cfentry_fport = VAR_8->inp_fport;
            VAR_6->cfentry_faddr.addr46.ia46_addr4.s_addr = VAR_8->inp_faddr.s_addr;
        }
        VAR_6->cfentry_family = VAR_0;
        return VAR_5;
    } else if (VAR_8->inp_vflag & VAR_4) {
        if (VAR_7 == VAR_5) {
            VAR_6->cfentry_lport = VAR_8->inp_lport;
            VAR_6->cfentry_laddr.addr6 = VAR_8->in6p_laddr;
        } else {
            VAR_6->cfentry_fport = VAR_8->inp_fport;
            VAR_6->cfentry_faddr.addr6 = VAR_8->in6p_faddr;
        }
        VAR_6->cfentry_family = VAR_1;
        return VAR_5;
    }
    return VAR_2;
}
