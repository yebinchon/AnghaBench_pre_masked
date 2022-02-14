
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gelic_wl_info {int eurus_cmd_queue; } ;
struct gelic_eurus_cmd {unsigned int cmd; unsigned int buf_size; int done; int work; struct gelic_wl_info* wl; void* buffer; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 struct gelic_eurus_cmd* FUNC_2 (int,int ) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static struct gelic_eurus_cmd *FUNC_5(struct gelic_wl_info *VAR_2,
          unsigned int VAR_3,
          void *VAR_4,
          unsigned int VAR_5)
{
 struct gelic_eurus_cmd *VAR_6;


 VAR_6 = FUNC_2(sizeof(*VAR_6), VAR_0);
 if (!VAR_6)
  return ((void*)0);


 VAR_6->cmd = VAR_3;
 VAR_6->buffer = VAR_4;
 VAR_6->buf_size = VAR_5;
 VAR_6->wl = VAR_2;
 FUNC_0(&VAR_6->work, VAR_1);
 FUNC_1(&VAR_6->done);
 FUNC_3(VAR_2->eurus_cmd_queue, &VAR_6->work);


 FUNC_4(&VAR_6->done);

 return VAR_6;
}
