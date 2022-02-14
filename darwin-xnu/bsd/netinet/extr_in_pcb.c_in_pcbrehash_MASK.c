
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int32_t ;
struct inpcbhead {int dummy; } ;
struct TYPE_5__ {int s_addr; } ;
struct TYPE_4__ {int * s6_addr32; } ;
struct inpcb {int inp_vflag; size_t inp_hash_element; int inp_flags2; TYPE_3__* inp_pcbinfo; int inp_fport; int inp_lport; TYPE_2__ inp_faddr; TYPE_1__ in6p_faddr; } ;
struct TYPE_6__ {struct inpcbhead* ipi_hashbase; int ipi_hashmask; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (struct inpcbhead*,struct inpcb*,int ) ;
 int FUNC_2 (struct inpcb*,int ) ;
 int FUNC_3 (int) ;
 int VAR_2 ;
 int FUNC_4 (struct inpcb*,int *,int *,int ) ;

void
FUNC_5(struct inpcb *VAR_3)
{
 struct inpcbhead *VAR_4;
 u_int32_t VAR_5;






  VAR_5 = VAR_3->inp_faddr.s_addr;

 VAR_3->inp_hash_element = FUNC_0(VAR_5, VAR_3->inp_lport,
     VAR_3->inp_fport, VAR_3->inp_pcbinfo->ipi_hashmask);
 VAR_4 = &VAR_3->inp_pcbinfo->ipi_hashbase[VAR_3->inp_hash_element];

 if (VAR_3->inp_flags2 & VAR_0) {
  FUNC_2(VAR_3, VAR_2);
  VAR_3->inp_flags2 &= ~VAR_0;
 }

 FUNC_3(!(VAR_3->inp_flags2 & VAR_0));
 FUNC_1(VAR_4, VAR_3, VAR_2);
 VAR_3->inp_flags2 |= VAR_0;





}
