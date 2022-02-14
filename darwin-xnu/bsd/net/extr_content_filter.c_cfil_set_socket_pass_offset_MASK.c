
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
struct socket {int dummy; } ;
struct cfi_buf {scalar_t__ cfi_pending_first; scalar_t__ cfi_pending_last; scalar_t__ cfi_pass_offset; } ;
struct cfil_info {int cfi_sock_id; struct cfil_entry* cfi_entries; struct cfi_buf cfi_rcv; struct cfi_buf cfi_snd; } ;
struct cfe_buf {scalar_t__ cfe_pass_offset; } ;
struct cfil_entry {struct cfe_buf cfe_rcv; struct cfe_buf cfe_snd; int * cfe_filter; } ;


 int FUNC_0 (int ,char*,scalar_t__,int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct socket*) ;
 int FUNC_2 (struct socket*) ;

__attribute__((used)) static int
FUNC_3(struct socket *VAR_3, struct cfil_info *VAR_4, int VAR_5)
{
 struct cfi_buf *VAR_6;
 struct cfil_entry *VAR_7;
 struct cfe_buf *VAR_8;
 uint32_t VAR_9;
 uint64_t VAR_10 = 0;

 if (VAR_4 == ((void*)0))
  return (0);

 FUNC_0(VAR_1, "so %llx outgoing %d",
  (uint64_t)FUNC_1(VAR_3), VAR_5);

 FUNC_2(VAR_3);

 if (VAR_5)
  VAR_6 = &VAR_4->cfi_snd;
 else
  VAR_6 = &VAR_4->cfi_rcv;

 FUNC_0(VAR_0, "CFIL: <so %llx, sockID %llu> outgoing %d cfi_pending_first %llu cfi_pending_last %llu",
    (uint64_t)FUNC_1(VAR_3), VAR_4->cfi_sock_id, VAR_5,
    VAR_6->cfi_pending_first, VAR_6->cfi_pending_last);

 if (VAR_6->cfi_pending_last - VAR_6->cfi_pending_first == 0) {
  for (VAR_9 = 1; VAR_9 <= VAR_2; VAR_9++) {
   VAR_7 = &VAR_4->cfi_entries[VAR_9 - 1];


   if (VAR_7->cfe_filter == ((void*)0))
    continue;

   if (VAR_5)
    VAR_8 = &VAR_7->cfe_snd;
   else
    VAR_8 = &VAR_7->cfe_rcv;

   if (VAR_10 == 0 ||
       VAR_8->cfe_pass_offset < VAR_10)
    VAR_10 = VAR_8->cfe_pass_offset;
  }
  VAR_6->cfi_pass_offset = VAR_10;
 }

 FUNC_0(VAR_0, "CFIL: <so %llx, sockID %llu>, cfi_pass_offset %llu",
    (uint64_t)FUNC_1(VAR_3), VAR_4->cfi_sock_id, VAR_6->cfi_pass_offset);

 return (0);
}
