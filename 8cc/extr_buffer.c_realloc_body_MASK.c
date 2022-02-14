
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nalloc; char* body; int len; } ;
typedef TYPE_1__ Buffer ;


 char* FUNC_0 (int) ;
 int FUNC_1 (char*,char*,int ) ;

__attribute__((used)) static void FUNC_2(Buffer *VAR_0) {
    int VAR_1 = VAR_0->nalloc * 2;
    char *VAR_2 = FUNC_0(VAR_1);
    FUNC_1(VAR_2, VAR_0->body, VAR_0->len);
    VAR_0->body = VAR_2;
    VAR_0->nalloc = VAR_1;
}
