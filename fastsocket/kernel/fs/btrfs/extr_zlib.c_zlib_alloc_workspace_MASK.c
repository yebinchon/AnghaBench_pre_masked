
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct list_head {int dummy; } ;
struct TYPE_4__ {void* workspace; } ;
struct TYPE_3__ {void* workspace; } ;
struct workspace {struct list_head list; int buf; TYPE_2__ inf_strm; TYPE_1__ def_strm; } ;


 int VAR_0 ;
 struct list_head* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (struct list_head*) ;
 int VAR_2 ;
 int FUNC_2 (int ,int ) ;
 struct workspace* FUNC_3 (int,int ) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 (struct list_head*) ;
 int FUNC_7 () ;

__attribute__((used)) static struct list_head *FUNC_8(void)
{
 struct workspace *VAR_3;

 VAR_3 = FUNC_3(sizeof(*VAR_3), VAR_1);
 if (!VAR_3)
  return FUNC_0(-VAR_0);

 VAR_3->def_strm.workspace = FUNC_4(FUNC_5());
 VAR_3->inf_strm.workspace = FUNC_4(FUNC_7());
 VAR_3->buf = FUNC_2(VAR_2, VAR_1);
 if (!VAR_3->def_strm.workspace ||
     !VAR_3->inf_strm.workspace || !VAR_3->buf)
  goto fail;

 FUNC_1(&VAR_3->list);

 return &VAR_3->list;
fail:
 FUNC_6(&VAR_3->list);
 return FUNC_0(-VAR_0);
}
