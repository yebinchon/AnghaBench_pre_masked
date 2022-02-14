
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int t_tid; } ;
typedef TYPE_1__ transaction_t ;
struct timespec {int tv_nsec; int tv_sec; } ;
struct journal_head {int dummy; } ;
struct commit_header {void** h_chksum; int h_chksum_size; int h_chksum_type; void* h_commit_nsec; int h_commit_sec; void* h_sequence; void* h_blocktype; void* h_magic; } ;
struct buffer_head {int b_end_io; scalar_t__ b_data; } ;
struct TYPE_10__ {int j_flags; } ;
typedef TYPE_2__ journal_t ;
typedef int __u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int VAR_6 ;
 int FUNC_2 (struct journal_head*,char*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (struct buffer_head*) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 struct timespec FUNC_6 () ;
 scalar_t__ FUNC_7 (TYPE_2__*) ;
 struct journal_head* FUNC_8 (TYPE_2__*) ;
 struct buffer_head* FUNC_9 (struct journal_head*) ;
 int VAR_9 ;
 int FUNC_10 (struct buffer_head*) ;
 int FUNC_11 (struct buffer_head*) ;
 int FUNC_12 (int,struct buffer_head*) ;

__attribute__((used)) static int FUNC_13(journal_t *VAR_10,
     transaction_t *VAR_11,
     struct buffer_head **VAR_12,
     __u32 VAR_13)
{
 struct journal_head *VAR_14;
 struct commit_header *VAR_15;
 struct buffer_head *VAR_16;
 int VAR_17;
 struct timespec VAR_18 = FUNC_6();

 if (FUNC_7(VAR_10))
  return 0;

 VAR_14 = FUNC_8(VAR_10);
 if (!VAR_14)
  return 1;

 VAR_16 = FUNC_9(VAR_14);

 VAR_15 = (struct commit_header *)VAR_16->b_data;
 VAR_15->h_magic = FUNC_4(VAR_6);
 VAR_15->h_blocktype = FUNC_4(VAR_1);
 VAR_15->h_sequence = FUNC_4(VAR_11->t_tid);
 VAR_15->h_commit_sec = FUNC_5(VAR_18.tv_sec);
 VAR_15->h_commit_nsec = FUNC_4(VAR_18.tv_nsec);

 if (FUNC_0(VAR_10,
        VAR_4)) {
  VAR_15->h_chksum_type = VAR_2;
  VAR_15->h_chksum_size = VAR_3;
  VAR_15->h_chksum[0] = FUNC_4(VAR_13);
 }

 FUNC_2(VAR_14, "submit commit block");
 FUNC_10(VAR_16);
 FUNC_3(VAR_16);
 FUNC_11(VAR_16);
 VAR_16->b_end_io = VAR_9;

 if (VAR_10->j_flags & VAR_0 &&
     !FUNC_1(VAR_10,
           VAR_5))
  VAR_17 = FUNC_12(VAR_8 | VAR_7, VAR_16);
 else
  VAR_17 = FUNC_12(VAR_8, VAR_16);

 *VAR_12 = VAR_16;
 return VAR_17;
}
