
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st_partstat {scalar_t__ last_block_visited; int last_block_valid; } ;
struct scsi_tape {size_t partition; size_t new_partition; struct st_partstat* ps; } ;


 int FUNC_0 (struct scsi_tape*,scalar_t__,size_t,int) ;

__attribute__((used)) static int FUNC_1(struct scsi_tape *VAR_0)
{
 struct st_partstat *VAR_1;

 if (VAR_0->partition == VAR_0->new_partition)
  return 0;
 VAR_1 = &(VAR_0->ps[VAR_0->new_partition]);
 if (!VAR_1->last_block_valid)
  VAR_1->last_block_visited = 0;
 return FUNC_0(VAR_0, VAR_1->last_block_visited, VAR_0->new_partition, 1);
}
