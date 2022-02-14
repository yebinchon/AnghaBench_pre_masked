
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct netbuf {TYPE_1__* p; TYPE_1__* ptr; } ;
struct TYPE_3__ {int tot_len; int len; void* payload; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(struct netbuf *VAR_2, const void *VAR_3,u32 VAR_4)
{
 if(VAR_2->p!=((void*)0)) FUNC_1(VAR_2->p);
 VAR_2->p = FUNC_0(VAR_1,0,VAR_0);
 VAR_2->p->payload = (void*)VAR_3;
 VAR_2->p->len = VAR_2->p->tot_len = VAR_4;
 VAR_2->ptr = VAR_2->p;
}
