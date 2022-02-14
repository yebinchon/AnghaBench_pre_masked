
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct selector {int valid_paths; } ;
struct path_selector {struct selector* context; } ;
struct path_info {unsigned int repeat_count; int list; int qlen; struct dm_path* path; } ;
struct dm_path {struct path_info* pscontext; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (int *,int ) ;
 struct path_info* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (char*,char*,unsigned int*,char*) ;

__attribute__((used)) static int FUNC_4(struct path_selector *VAR_4, struct dm_path *VAR_5,
         int VAR_6, char **VAR_7, char **VAR_8)
{
 struct selector *VAR_9 = VAR_4->context;
 struct path_info *VAR_10;
 unsigned VAR_11 = VAR_3;
 char VAR_12;






 if (VAR_6 > 1) {
  *VAR_8 = "queue-length ps: incorrect number of arguments";
  return -VAR_0;
 }

 if ((VAR_6 == 1) && (FUNC_3(VAR_7[0], "%u%c", &VAR_11, &VAR_12) != 1)) {
  *VAR_8 = "queue-length ps: invalid repeat count";
  return -VAR_0;
 }


 VAR_10 = FUNC_1(sizeof(*VAR_10), VAR_2);
 if (!VAR_10) {
  *VAR_8 = "queue-length ps: Error allocating path information";
  return -VAR_1;
 }

 VAR_10->path = VAR_5;
 VAR_10->repeat_count = VAR_11;
 FUNC_0(&VAR_10->qlen, 0);

 VAR_5->pscontext = VAR_10;

 FUNC_2(&VAR_10->list, &VAR_9->valid_paths);

 return 0;
}
