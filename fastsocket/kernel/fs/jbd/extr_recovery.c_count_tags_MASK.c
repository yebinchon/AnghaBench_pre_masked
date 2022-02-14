
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct buffer_head {char* b_data; } ;
typedef int journal_header_t ;
struct TYPE_2__ {int t_flags; } ;
typedef TYPE_1__ journal_block_tag_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct buffer_head *VAR_2, int VAR_3)
{
 char * VAR_4;
 journal_block_tag_t * VAR_5;
 int VAR_6 = 0;

 VAR_4 = &VAR_2->b_data[sizeof(journal_header_t)];

 while ((VAR_4 - VAR_2->b_data + sizeof(journal_block_tag_t)) <= VAR_3) {
  VAR_5 = (journal_block_tag_t *) VAR_4;

  VAR_6++;
  VAR_4 += sizeof(journal_block_tag_t);
  if (!(VAR_5->t_flags & FUNC_0(VAR_1)))
   VAR_4 += 16;

  if (VAR_5->t_flags & FUNC_0(VAR_0))
   break;
 }

 return VAR_6;
}
