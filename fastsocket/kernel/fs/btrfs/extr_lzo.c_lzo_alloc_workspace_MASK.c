
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {int dummy; } ;
struct workspace {struct list_head list; void* cbuf; void* buf; void* mem; } ;


 int VAR_0 ;
 struct list_head* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (struct list_head*) ;
 int VAR_2 ;
 int VAR_3 ;
 struct workspace* FUNC_2 (int,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct list_head*) ;
 void* FUNC_5 (int ) ;

__attribute__((used)) static struct list_head *FUNC_6(void)
{
 struct workspace *VAR_4;

 VAR_4 = FUNC_2(sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return FUNC_0(-VAR_0);

 VAR_4->mem = FUNC_5(VAR_2);
 VAR_4->buf = FUNC_5(FUNC_3(VAR_3));
 VAR_4->cbuf = FUNC_5(FUNC_3(VAR_3));
 if (!VAR_4->mem || !VAR_4->buf || !VAR_4->cbuf)
  goto fail;

 FUNC_1(&VAR_4->list);

 return &VAR_4->list;
fail:
 FUNC_4(&VAR_4->list);
 return FUNC_0(-VAR_0);
}
