
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ user_addr_t ;
typedef scalar_t__ u_int ;
struct proc {int dummy; } ;
struct ifnet {int dummy; } ;
struct bpf_if {scalar_t__ bif_dlt; struct ifnet* bif_ifp; struct bpf_if* bif_next; } ;
struct TYPE_3__ {int bflu_list; scalar_t__ bflu_pad; } ;
struct bpf_dltlist {scalar_t__ bfl_len; TYPE_1__ bfl_u; } ;
struct bpf_d {int bd_flags; TYPE_2__* bd_bif; } ;
typedef struct bpf_dltlist* caddr_t ;
typedef int bfl ;
struct TYPE_4__ {struct ifnet* bif_ifp; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct bpf_dltlist*,struct bpf_dltlist*,int) ;
 struct bpf_if* VAR_4 ;
 int FUNC_2 (scalar_t__*,scalar_t__,int) ;
 scalar_t__ FUNC_3 (struct proc*) ;

__attribute__((used)) static int
FUNC_4(struct bpf_d *VAR_5, caddr_t VAR_6, struct proc *VAR_7)
{
 u_int VAR_8;
 int VAR_9;
 struct ifnet *VAR_10;
 struct bpf_if *VAR_11;
 user_addr_t VAR_12;
 struct bpf_dltlist VAR_13;

 FUNC_1(VAR_6, &VAR_13, sizeof (VAR_13));
 if (FUNC_3(VAR_7)) {
  VAR_12 = (user_addr_t)VAR_13.bfl_u.bflu_pad;
 } else {
  VAR_12 = FUNC_0(VAR_13.bfl_u.bflu_list);
 }

 VAR_10 = VAR_5->bd_bif->bif_ifp;
 VAR_8 = 0;
 VAR_9 = 0;

 for (VAR_11 = VAR_4; VAR_11; VAR_11 = VAR_11->bif_next) {
  if (VAR_11->bif_ifp != VAR_10)
   continue;



  if (VAR_11->bif_dlt == VAR_1 && !(VAR_5->bd_flags & VAR_0))
   continue;
  if (VAR_12 != VAR_3) {
   if (VAR_8 >= VAR_13.bfl_len) {
    return (VAR_2);
   }
   VAR_9 = FUNC_2(&VAR_11->bif_dlt, VAR_12,
       sizeof (VAR_11->bif_dlt));
   if (VAR_9 != 0)
    break;
   VAR_12 += sizeof (VAR_11->bif_dlt);
  }
  VAR_8++;
 }
 VAR_13.bfl_len = VAR_8;
 FUNC_1(&VAR_13, VAR_6, sizeof (VAR_13));

 return (VAR_9);
}
