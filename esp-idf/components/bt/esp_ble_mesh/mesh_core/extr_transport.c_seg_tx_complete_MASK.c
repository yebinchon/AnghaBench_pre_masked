
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seg_tx {int cb_data; TYPE_1__* cb; } ;
struct TYPE_2__ {int (* end ) (int,int ) ;} ;


 int FUNC_0 (struct seg_tx*) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static inline void FUNC_2(struct seg_tx *VAR_0, int VAR_1)
{
    if (VAR_0->cb && VAR_0->cb->end) {
        VAR_0->cb->end(VAR_1, VAR_0->cb_data);
    }

    FUNC_0(VAR_0);
}
