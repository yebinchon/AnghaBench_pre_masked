
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gfs2_log_header_host {void* lh_hash; void* lh_blkno; void* lh_tail; void* lh_flags; int lh_sequence; } ;
struct TYPE_2__ {scalar_t__ mh_magic; scalar_t__ mh_type; } ;
struct gfs2_log_header {int lh_hash; int lh_blkno; int lh_tail; int lh_flags; int lh_sequence; TYPE_1__ lh_header; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct gfs2_log_header_host *VAR_2, const void *VAR_3)
{
 const struct gfs2_log_header *VAR_4 = VAR_3;

 if (VAR_4->lh_header.mh_magic != FUNC_2(VAR_0) ||
     VAR_4->lh_header.mh_type != FUNC_2(VAR_1))
  return 1;

 VAR_2->lh_sequence = FUNC_1(VAR_4->lh_sequence);
 VAR_2->lh_flags = FUNC_0(VAR_4->lh_flags);
 VAR_2->lh_tail = FUNC_0(VAR_4->lh_tail);
 VAR_2->lh_blkno = FUNC_0(VAR_4->lh_blkno);
 VAR_2->lh_hash = FUNC_0(VAR_4->lh_hash);
 return 0;
}
