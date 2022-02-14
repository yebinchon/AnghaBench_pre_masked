
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {int errors; } ;
struct multipath {int lock; int queue_if_no_path; int nr_valid_paths; } ;
struct dm_mpath_io {scalar_t__ pgpath; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct multipath*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct multipath *VAR_6, struct request *VAR_7,
       int VAR_8, struct dm_mpath_io *VAR_9)
{
 int VAR_10 = VAR_0;
 unsigned long VAR_11;

 if (!VAR_8 && !VAR_7->errors)
  return 0;

 if (VAR_8 == -VAR_4 || VAR_8 == -VAR_5 || VAR_8 == -VAR_2)
  return VAR_8;

 if (VAR_9->pgpath)
  FUNC_1(VAR_9->pgpath);

 FUNC_2(&VAR_6->lock, VAR_11);
 if (!VAR_6->nr_valid_paths) {
  if (!VAR_6->queue_if_no_path) {
   if (!FUNC_0(VAR_6))
    VAR_10 = -VAR_3;
  } else {
   if (VAR_8 == -VAR_1)
    VAR_10 = VAR_8;
  }
 }
 FUNC_3(&VAR_6->lock, VAR_11);

 return VAR_10;
}
