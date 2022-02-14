
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ tid; } ;
struct cryptocop_transform_ctx {struct cryptocop_transform_ctx* next; TYPE_1__ init; } ;
struct cryptocop_session {struct cryptocop_transform_ctx* tfrm_ctx; } ;
typedef scalar_t__ cryptocop_tfrm_id ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static struct cryptocop_transform_ctx *FUNC_3(struct cryptocop_session *VAR_0, cryptocop_tfrm_id VAR_1)
{
 struct cryptocop_transform_ctx *VAR_2 = VAR_0->tfrm_ctx;

 FUNC_0(FUNC_2("get_transform_ctx, sess=0x%p, tid=%d\n", VAR_0, VAR_1));
 FUNC_1(VAR_0 != ((void*)0));
 while (VAR_2 && VAR_2->init.tid != VAR_1){
  FUNC_0(FUNC_2("tc=0x%p, tc->next=0x%p\n", VAR_2, VAR_2->next));
  VAR_2 = VAR_2->next;
 }
 FUNC_0(FUNC_2("get_transform_ctx, returning tc=0x%p\n", VAR_2));
 return VAR_2;
}
