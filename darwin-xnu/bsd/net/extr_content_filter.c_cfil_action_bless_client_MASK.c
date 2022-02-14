
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct socket {int so_flags1; struct cfil_info* so_cfil; int * so_cfil_db; } ;
struct cfil_msg_hdr {int cfm_sock_id; } ;
struct cfil_msg_bless_client {int cfb_client_uuid; } ;
struct cfil_info {int cfi_sock_id; scalar_t__ cfi_hash_entry; } ;
typedef int errno_t ;


 int FUNC_0 (int ,char*,char*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct socket*) ;
 int FUNC_2 (struct socket*,struct cfil_info*,int ,int,int ,int ) ;
 struct cfil_info* FUNC_3 (int *,int ) ;
 struct socket* FUNC_4 (int ,int*) ;
 int FUNC_5 (struct socket*,int) ;

int
FUNC_6(uint32_t VAR_4, struct cfil_msg_hdr *VAR_5)
{
 errno_t VAR_6 = 0;
 struct cfil_info *VAR_7 = ((void*)0);

 bool VAR_8 = 0;
 struct cfil_msg_bless_client *VAR_9 = (struct cfil_msg_bless_client *)VAR_5;


 struct socket *VAR_10 = FUNC_4(VAR_9->cfb_client_uuid, &VAR_8);
 if (VAR_10 == ((void*)0)) {
  VAR_6 = VAR_1;
 } else {

  VAR_7 = (VAR_10->so_cfil_db != ((void*)0)) ?
   FUNC_3(VAR_10->so_cfil_db, VAR_5->cfm_sock_id) : VAR_10->so_cfil;

  if (VAR_8) {
   (void)FUNC_2(VAR_10, VAR_7, VAR_4, 1, VAR_0, VAR_0);
   (void)FUNC_2(VAR_10, VAR_7, VAR_4, 0, VAR_0, VAR_0);
  } else {
   VAR_10->so_flags1 |= VAR_3;
  }
  FUNC_5(VAR_10, 1);
 }

 return (VAR_6);
}
