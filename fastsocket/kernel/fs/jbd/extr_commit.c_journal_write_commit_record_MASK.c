
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int t_tid; } ;
typedef TYPE_1__ transaction_t ;
struct journal_head {int dummy; } ;
struct buffer_head {scalar_t__ b_data; } ;
struct TYPE_9__ {int j_flags; } ;
typedef TYPE_2__ journal_t ;
struct TYPE_10__ {void* h_sequence; void* h_blocktype; void* h_magic; } ;
typedef TYPE_3__ journal_header_t ;


 int VAR_0 ;
 int FUNC_0 (struct journal_head*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct buffer_head*,int) ;
 void* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 struct buffer_head* FUNC_4 (struct journal_head*) ;
 struct journal_head* FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (struct journal_head*) ;
 int FUNC_7 (struct buffer_head*) ;
 int FUNC_8 (struct buffer_head*) ;
 int FUNC_9 (struct buffer_head*) ;

__attribute__((used)) static int FUNC_10(journal_t *VAR_6,
     transaction_t *VAR_7)
{
 struct journal_head *VAR_8;
 struct buffer_head *VAR_9;
 journal_header_t *VAR_10;
 int VAR_11;

 if (FUNC_3(VAR_6))
  return 0;

 VAR_8 = FUNC_5(VAR_6);
 if (!VAR_8)
  return 1;

 VAR_9 = FUNC_4(VAR_8);

 VAR_10 = (journal_header_t *)(VAR_9->b_data);
 VAR_10->h_magic = FUNC_2(VAR_3);
 VAR_10->h_blocktype = FUNC_2(VAR_2);
 VAR_10->h_sequence = FUNC_2(VAR_7->t_tid);

 FUNC_0(VAR_8, "write commit block");
 FUNC_8(VAR_9);

 if (VAR_6->j_flags & VAR_1)
  VAR_11 = FUNC_1(VAR_9, VAR_5 | VAR_4);
 else
  VAR_11 = FUNC_9(VAR_9);

 FUNC_7(VAR_9);
 FUNC_6(VAR_8);

 return (VAR_11 == -VAR_0);
}
