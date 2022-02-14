
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct socket {int dummy; } ;
struct cfil_info {struct cfil_entry* cfi_entries; } ;
struct TYPE_4__ {unsigned int q_start; unsigned int q_end; } ;
struct TYPE_3__ {unsigned int q_start; unsigned int q_end; } ;
struct cfe_buf {scalar_t__ cfe_pass_offset; scalar_t__ cfe_peeked; scalar_t__ cfe_peek_offset; TYPE_2__ cfe_pending_q; TYPE_1__ cfe_ctl_q; } ;
struct cfil_entry {struct cfe_buf cfe_rcv; struct cfe_buf cfe_snd; int * cfe_filter; } ;


 int FUNC_0 (struct cfil_info*) ;
 int FUNC_1 (int ,char*,int ,int,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (struct socket*) ;

__attribute__((used)) static int
FUNC_3(struct socket *VAR_2, struct cfil_info *VAR_3, int VAR_4, unsigned int VAR_5)
{
 struct cfil_entry *VAR_6;
 struct cfe_buf *VAR_7;
 uint32_t VAR_8;

 FUNC_1(VAR_0, "so %llx outgoing %d datalen %u",
  (uint64_t)FUNC_2(VAR_2), VAR_4, VAR_5);

 for (VAR_8 = 1; VAR_8 <= VAR_1; VAR_8++) {
  VAR_6 = &VAR_3->cfi_entries[VAR_8 - 1];


  if (VAR_6->cfe_filter == ((void*)0))
   continue;

  if (VAR_4)
   VAR_7 = &VAR_6->cfe_snd;
  else
   VAR_7 = &VAR_6->cfe_rcv;

  VAR_7->cfe_ctl_q.q_start += VAR_5;
  VAR_7->cfe_pass_offset = VAR_7->cfe_ctl_q.q_start;
  VAR_7->cfe_peeked = VAR_7->cfe_ctl_q.q_start;
  if (VAR_7->cfe_peek_offset < VAR_7->cfe_pass_offset)
   VAR_7->cfe_peek_offset = VAR_7->cfe_pass_offset;

  VAR_7->cfe_ctl_q.q_end += VAR_5;

  VAR_7->cfe_pending_q.q_start += VAR_5;
  VAR_7->cfe_pending_q.q_end += VAR_5;
 }
 FUNC_0(VAR_3);
 return (0);
}
