
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_ucm_file {int ctxs; } ;
struct ib_ucm_context {int file_list; int id; int events; struct ib_ucm_file* file; int comp; int ref; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *,struct ib_ucm_context*,int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct ib_ucm_context*) ;
 struct ib_ucm_context* FUNC_6 (int,int ) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static struct ib_ucm_context *FUNC_10(struct ib_ucm_file *VAR_4)
{
 struct ib_ucm_context *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_6(sizeof *VAR_5, VAR_1);
 if (!VAR_5)
  return ((void*)0);

 FUNC_1(&VAR_5->ref, 1);
 FUNC_4(&VAR_5->comp);
 VAR_5->file = VAR_4;
 FUNC_0(&VAR_5->events);

 do {
  VAR_6 = FUNC_3(&VAR_3, VAR_1);
  if (!VAR_6)
   goto error;

  FUNC_8(&VAR_2);
  VAR_6 = FUNC_2(&VAR_3, VAR_5, &VAR_5->id);
  FUNC_9(&VAR_2);
 } while (VAR_6 == -VAR_0);

 if (VAR_6)
  goto error;

 FUNC_7(&VAR_5->file_list, &VAR_4->ctxs);
 return VAR_5;

error:
 FUNC_5(VAR_5);
 return ((void*)0);
}
