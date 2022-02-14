
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tmp_level ;
struct cpuinfo_tree {int total_nodes; struct cpuinfo_node* nodes; TYPE_1__* level; } ;
struct cpuinfo_node {int id; int level; int num_cpus; int parent_index; int child_start; int child_end; int rover; } ;
struct cpuinfo_level {int dummy; } ;
struct TYPE_2__ {int start_index; int end_index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_4 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (struct cpuinfo_level*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct cpuinfo_tree*) ;
 struct cpuinfo_tree* FUNC_5 (int,int ) ;
 int FUNC_6 (TYPE_1__**,struct cpuinfo_level*,int) ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static struct cpuinfo_tree *FUNC_9(void)
{
 struct cpuinfo_tree *VAR_5;
 struct cpuinfo_node *VAR_6;
 struct cpuinfo_level VAR_7[VAR_0];
 int VAR_8[VAR_0];
 int VAR_9[VAR_0];
 int VAR_10[VAR_0];
 int VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;

 VAR_11 = FUNC_2(VAR_7);

 VAR_5 = FUNC_5(sizeof(struct cpuinfo_tree) +
                    (sizeof(struct cpuinfo_node) * VAR_11), VAR_3);
 if (!VAR_5)
  return ((void*)0);

 VAR_5->total_nodes = VAR_11;
 FUNC_6(&VAR_5->level, VAR_7, sizeof(VAR_7));

 VAR_14 = VAR_13 = FUNC_3(VAR_4);


 for (VAR_16 = VAR_1; VAR_16 >= VAR_2; VAR_16--) {
  VAR_11 = VAR_5->level[VAR_16].start_index;

  VAR_9[VAR_16] = VAR_11;
  VAR_6 = &VAR_5->nodes[VAR_11];

  VAR_12 = FUNC_1(VAR_13, VAR_16);
  if (FUNC_8(VAR_12 < 0)) {
   FUNC_4(VAR_5);
   return ((void*)0);
  }
  VAR_6->id = VAR_12;
  VAR_6->level = VAR_16;
  VAR_6->num_cpus = 1;

  VAR_6->parent_index = (VAR_16 > VAR_2)
      ? VAR_5->level[VAR_16 - 1].start_index : -1;

  VAR_6->child_start = VAR_6->child_end = VAR_6->rover =
      (VAR_16 == VAR_1)
      ? VAR_13 : VAR_5->level[VAR_16 + 1].start_index;

  VAR_10[VAR_16] = VAR_6->id;
  VAR_8[VAR_16] = 1;
 }

 for (VAR_15 = (FUNC_7() - 1); VAR_15 >= 0; VAR_15--) {
  if (FUNC_0(VAR_15))
   break;
 }

 while (++VAR_13 <= VAR_15) {
  if (!FUNC_0(VAR_13))
   continue;

  for (VAR_16 = VAR_1; VAR_16 >= VAR_2;
       VAR_16--) {
   VAR_12 = FUNC_1(VAR_13, VAR_16);
   if (FUNC_8(VAR_12 < 0)) {
    FUNC_4(VAR_5);
    return ((void*)0);
   }

   if ((VAR_12 != VAR_10[VAR_16]) || (VAR_13 == VAR_15)) {
    VAR_10[VAR_16] = VAR_12;
    VAR_6 = &VAR_5->nodes[VAR_9[VAR_16]];
    VAR_6->num_cpus = VAR_8[VAR_16];
    VAR_8[VAR_16] = 1;

    if (VAR_13 == VAR_15)
     VAR_6->num_cpus++;


    if (VAR_16 == VAR_2)
     VAR_6->parent_index = -1;
    else
     VAR_6->parent_index =
         VAR_9[VAR_16 - 1];

    if (VAR_16 == VAR_1) {
     VAR_6->child_end =
         (VAR_13 == VAR_15) ? VAR_13 : VAR_14;
    } else {
     VAR_6->child_end =
         VAR_9[VAR_16 + 1] - 1;
    }


    VAR_11 = ++VAR_9[VAR_16];
    if (VAR_11 <= VAR_5->level[VAR_16].end_index) {
     VAR_6 = &VAR_5->nodes[VAR_11];
     VAR_6->id = VAR_12;
     VAR_6->level = VAR_16;


     VAR_6->child_start = VAR_6->child_end =
     VAR_6->rover =
         (VAR_16 == VAR_1)
         ? VAR_13 : VAR_9[VAR_16 + 1];
    }
   } else
    VAR_8[VAR_16]++;
  }
  VAR_14 = VAR_13;
 }

 return VAR_5;
}
