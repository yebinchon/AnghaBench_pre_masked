
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct configfs_dirent {int s_type; int s_children; int s_sibling; void* s_element; int s_links; int s_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct configfs_dirent* FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct configfs_dirent*) ;
 int FUNC_4 (int ,struct configfs_dirent*) ;
 struct configfs_dirent* FUNC_5 (int ,int ) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static struct configfs_dirent *FUNC_9(struct configfs_dirent *VAR_6,
         void *VAR_7, int VAR_8)
{
 struct configfs_dirent * VAR_9;

 VAR_9 = FUNC_5(VAR_4, VAR_3);
 if (!VAR_9)
  return FUNC_0(-VAR_2);

 FUNC_2(&VAR_9->s_count, 1);
 FUNC_1(&VAR_9->s_links);
 FUNC_1(&VAR_9->s_children);
 VAR_9->s_element = VAR_7;
 VAR_9->s_type = VAR_8;
 FUNC_3(VAR_9);
 FUNC_7(&VAR_5);
 if (VAR_6->s_type & VAR_0) {
  FUNC_8(&VAR_5);
  FUNC_4(VAR_4, VAR_9);
  return FUNC_0(-VAR_1);
 }
 FUNC_6(&VAR_9->s_sibling, &VAR_6->s_children);
 FUNC_8(&VAR_5);

 return VAR_9;
}
