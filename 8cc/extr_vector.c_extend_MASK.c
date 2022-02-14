
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int len; int nalloc; void* body; } ;
typedef TYPE_1__ Vector ;


 int VAR_0 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (void*,void*,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(Vector *VAR_1, int VAR_2) {
    if (VAR_1->len + VAR_2 <= VAR_1->nalloc)
        return;
    int VAR_3 = FUNC_1(FUNC_3(VAR_1->len + VAR_2), VAR_0);
    void *VAR_4 = FUNC_0(sizeof(void *) * VAR_3);
    FUNC_2(VAR_4, VAR_1->body, sizeof(void *) * VAR_1->len);
    VAR_1->body = VAR_4;
    VAR_1->nalloc = VAR_3;
}
