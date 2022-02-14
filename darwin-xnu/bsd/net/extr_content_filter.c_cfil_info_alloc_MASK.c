
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct socket {int so_gencnt; struct cfil_info* so_cfil; } ;
struct inpcb {int inp_flowhash; } ;
struct TYPE_7__ {int cfi_inject_q; } ;
struct TYPE_6__ {int cfi_inject_q; } ;
struct cfil_info {int cfi_sock_id; struct cfil_hash_entry* cfi_hash_entry; struct socket* cfi_so; struct cfil_entry* cfi_entries; TYPE_2__ cfi_rcv; TYPE_1__ cfi_snd; } ;
struct cfil_hash_entry {int cfentry_flowhash; struct cfil_info* cfentry_cfil; } ;
struct TYPE_9__ {int cfe_ctl_q; int cfe_pending_q; scalar_t__ cfe_peeked; scalar_t__ cfe_peek_offset; scalar_t__ cfe_pass_offset; } ;
struct TYPE_8__ {int cfe_ctl_q; int cfe_pending_q; scalar_t__ cfe_peeked; scalar_t__ cfe_peek_offset; scalar_t__ cfe_pass_offset; } ;
struct cfil_entry {TYPE_4__ cfe_rcv; TYPE_3__ cfe_snd; int cfe_last_action; scalar_t__ cfe_necp_control_unit; scalar_t__ cfe_flags; int * cfe_filter; struct cfil_info* cfe_cfil_info; } ;
typedef int caddr_t ;
struct TYPE_10__ {int cfs_cfi_alloc_fail; int cfs_cfi_alloc_ok; } ;


 int FUNC_0 (int ,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,struct cfil_info*,int ) ;
 int FUNC_3 (struct cfil_info*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 TYPE_5__ VAR_9 ;
 int FUNC_7 (struct inpcb*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct socket*) ;
 struct inpcb* FUNC_10 (struct socket*) ;
 int FUNC_11 (int ) ;
 struct cfil_info* FUNC_12 (int ) ;

struct cfil_info *
FUNC_13(struct socket *VAR_10, struct cfil_hash_entry *VAR_11)
{
 int VAR_12;
 struct cfil_info *VAR_13 = ((void*)0);
 struct inpcb *VAR_14 = FUNC_10(VAR_10);

 FUNC_0(VAR_1, "");

 FUNC_9(VAR_10);

 VAR_13 = FUNC_12(VAR_4);
 if (VAR_13 == ((void*)0))
  goto done;
 FUNC_3(VAR_13, sizeof(struct cfil_info));

 FUNC_4(&VAR_13->cfi_snd.cfi_inject_q);
 FUNC_4(&VAR_13->cfi_rcv.cfi_inject_q);

 for (VAR_12 = 1; VAR_12 <= VAR_2; VAR_12++) {
  struct cfil_entry *VAR_15;

  VAR_15 = &VAR_13->cfi_entries[VAR_12 - 1];
  VAR_15->cfe_cfil_info = VAR_13;


  VAR_15->cfe_filter = ((void*)0);
  VAR_15->cfe_flags = 0;
  VAR_15->cfe_necp_control_unit = 0;
  VAR_15->cfe_snd.cfe_pass_offset = 0;
  VAR_15->cfe_snd.cfe_peek_offset = 0;
  VAR_15->cfe_snd.cfe_peeked = 0;
  VAR_15->cfe_rcv.cfe_pass_offset = 0;
  VAR_15->cfe_rcv.cfe_peek_offset = 0;
  VAR_15->cfe_rcv.cfe_peeked = 0;




  FUNC_8(&VAR_15->cfe_last_action);

  FUNC_4(&VAR_15->cfe_snd.cfe_pending_q);
  FUNC_4(&VAR_15->cfe_rcv.cfe_pending_q);
  FUNC_4(&VAR_15->cfe_snd.cfe_ctl_q);
  FUNC_4(&VAR_15->cfe_rcv.cfe_ctl_q);
 }

 FUNC_5(&VAR_5);





    if (VAR_11 == ((void*)0)) {

        if (VAR_14->inp_flowhash == 0)
            VAR_14->inp_flowhash = FUNC_7(VAR_14);

        VAR_10->so_cfil = VAR_13;
        VAR_13->cfi_so = VAR_10;
        VAR_13->cfi_sock_id =
        ((VAR_10->so_gencnt << 32) | VAR_14->inp_flowhash);
    } else {

  VAR_13->cfi_so = VAR_10;
        VAR_11->cfentry_cfil = VAR_13;
  VAR_13->cfi_hash_entry = VAR_11;
        VAR_13->cfi_sock_id = ((VAR_10->so_gencnt << 32) | (VAR_11->cfentry_flowhash & 0xffffffff));
  FUNC_0(VAR_0, "CFIL: UDP inp_flowhash %x so_gencnt %llx entry flowhash %x sockID %llx",
                 VAR_14->inp_flowhash, VAR_10->so_gencnt, VAR_11->cfentry_flowhash, VAR_13->cfi_sock_id);


  if (VAR_8 == 0) {
   FUNC_11((caddr_t)&VAR_8);
  }

  VAR_8++;
    }

 FUNC_2(&VAR_7, VAR_13, VAR_3);

 VAR_6++;

 FUNC_6(&VAR_5);

done:
 if (VAR_13 != ((void*)0))
  FUNC_1(&VAR_9.cfs_cfi_alloc_ok);
 else
  FUNC_1(&VAR_9.cfs_cfi_alloc_fail);

 return (VAR_13);
}
