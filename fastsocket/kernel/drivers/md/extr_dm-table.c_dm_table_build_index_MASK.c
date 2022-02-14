
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_table {int depth; unsigned int* counts; int highs; int * index; int num_targets; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (int ,int ) ;
 int FUNC_1 (unsigned int,int ) ;
 int FUNC_2 (struct dm_table*) ;

__attribute__((used)) static int FUNC_3(struct dm_table *VAR_2)
{
 int VAR_3 = 0;
 unsigned int VAR_4;


 VAR_4 = FUNC_0(VAR_2->num_targets, VAR_1);
 VAR_2->depth = 1 + FUNC_1(VAR_4, VAR_0);


 VAR_2->counts[VAR_2->depth - 1] = VAR_4;
 VAR_2->index[VAR_2->depth - 1] = VAR_2->highs;

 if (VAR_2->depth >= 2)
  VAR_3 = FUNC_2(VAR_2);

 return VAR_3;
}
