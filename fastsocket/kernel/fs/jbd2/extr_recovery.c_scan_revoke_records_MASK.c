
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tid_t ;
struct recovery_info {int nr_revokes; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int journal_t ;
struct TYPE_2__ {int r_count; } ;
typedef TYPE_1__ jbd2_journal_revoke_header_t ;
typedef int __be64 ;
typedef int __be32 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 void* FUNC_1 (int ) ;
 unsigned long long FUNC_2 (int ) ;
 int FUNC_3 (int *,unsigned long long,int ) ;

__attribute__((used)) static int FUNC_4(journal_t *VAR_1, struct buffer_head *VAR_2,
          tid_t VAR_3, struct recovery_info *VAR_4)
{
 jbd2_journal_revoke_header_t *VAR_5;
 int VAR_6, VAR_7;
 int VAR_8 = 4;

 VAR_5 = (jbd2_journal_revoke_header_t *) VAR_2->b_data;
 VAR_6 = sizeof(jbd2_journal_revoke_header_t);
 VAR_7 = FUNC_1(VAR_5->r_count);

 if (FUNC_0(VAR_1, VAR_0))
  VAR_8 = 8;

 while (VAR_6 + VAR_8 <= VAR_7) {
  unsigned long long VAR_9;
  int VAR_10;

  if (VAR_8 == 4)
   VAR_9 = FUNC_1(* ((__be32 *) (VAR_2->b_data+VAR_6)));
  else
   VAR_9 = FUNC_2(* ((__be64 *) (VAR_2->b_data+VAR_6)));
  VAR_6 += VAR_8;
  VAR_10 = FUNC_3(VAR_1, VAR_9, VAR_3);
  if (VAR_10)
   return VAR_10;
  ++VAR_4->nr_revokes;
 }
 return 0;
}
