
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
typedef TYPE_1__ journal_revoke_header_t ;
typedef int __be32 ;


 void* FUNC_0 (int ) ;
 int FUNC_1 (int *,unsigned int,int ) ;

__attribute__((used)) static int FUNC_2(journal_t *VAR_0, struct buffer_head *VAR_1,
          tid_t VAR_2, struct recovery_info *VAR_3)
{
 journal_revoke_header_t *VAR_4;
 int VAR_5, VAR_6;

 VAR_4 = (journal_revoke_header_t *) VAR_1->b_data;
 VAR_5 = sizeof(journal_revoke_header_t);
 VAR_6 = FUNC_0(VAR_4->r_count);

 while (VAR_5 < VAR_6) {
  unsigned int VAR_7;
  int VAR_8;

  VAR_7 = FUNC_0(* ((__be32 *) (VAR_1->b_data+VAR_5)));
  VAR_5 += 4;
  VAR_8 = FUNC_1(VAR_0, VAR_7, VAR_2);
  if (VAR_8)
   return VAR_8;
  ++VAR_3->nr_revokes;
 }
 return 0;
}
