
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pb; scalar_t__ outstanding_count; } ;
typedef TYPE_1__ CABACContext ;


 int FUNC_0 (int *,int,int) ;

__attribute__((used)) static inline void FUNC_1(CABACContext *VAR_0, int VAR_1){
    FUNC_0(&VAR_0->pb, 1, VAR_1);
    for(;VAR_0->outstanding_count; VAR_0->outstanding_count--){
        FUNC_0(&VAR_0->pb, 1, 1-VAR_1);
    }
}
