
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mbuf {int m_flags; } ;
struct m_tag {int dummy; } ;
struct cfil_tag {int cfil_faddr; int cfil_so_options; int cfil_so_state_change_cnt; } ;
struct cfil_info {struct cfil_hash_entry* cfi_hash_entry; TYPE_1__* cfi_so; } ;
struct TYPE_5__ {int ia46_addr4; } ;
struct TYPE_6__ {TYPE_2__ addr46; int addr6; } ;
struct cfil_hash_entry {scalar_t__ cfentry_family; int cfentry_fport; TYPE_3__ cfentry_faddr; } ;
struct TYPE_4__ {int so_options; int so_state_change_cnt; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int *,int ) ;
 int FUNC_1 (int *,int ,int ) ;
 struct m_tag* FUNC_2 (int ,int ,int,int ,struct mbuf*) ;
 int FUNC_3 (struct mbuf*,struct m_tag*) ;

struct m_tag *
FUNC_4(struct cfil_info *VAR_6, struct mbuf *VAR_7)
{
 struct m_tag *VAR_8 = ((void*)0);
 struct cfil_tag *VAR_9 = ((void*)0);
 struct cfil_hash_entry *VAR_10 = ((void*)0);

 if (VAR_6 == ((void*)0) || VAR_6->cfi_so == ((void*)0) ||
  VAR_6->cfi_hash_entry == ((void*)0) || VAR_7 == ((void*)0) || !(VAR_7->m_flags & VAR_5)) {
  return ((void*)0);
 }


 VAR_8 = FUNC_2(VAR_2, VAR_3,
        sizeof(struct cfil_tag), VAR_4, VAR_7);

 if (VAR_8) {
  VAR_9 = (struct cfil_tag*)(VAR_8 + 1);
  VAR_9->cfil_so_state_change_cnt = VAR_6->cfi_so->so_state_change_cnt;
  VAR_9->cfil_so_options = VAR_6->cfi_so->so_options;

  VAR_10 = VAR_6->cfi_hash_entry;
  if (VAR_10->cfentry_family == VAR_1) {
   FUNC_0(&VAR_9->cfil_faddr,
          &VAR_10->cfentry_faddr.addr6,
          VAR_10->cfentry_fport);
  } else if (VAR_10->cfentry_family == VAR_0) {
   FUNC_1(&VAR_9->cfil_faddr,
         VAR_10->cfentry_faddr.addr46.ia46_addr4,
         VAR_10->cfentry_fport);
  }
  FUNC_3(VAR_7, VAR_8);
  return (VAR_8);
 }
 return ((void*)0);
}
