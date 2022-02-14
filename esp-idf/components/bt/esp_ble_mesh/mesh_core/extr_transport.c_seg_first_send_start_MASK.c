
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16_t ;
struct seg_tx {int cb_data; TYPE_1__* cb; } ;
struct TYPE_2__ {int (* start ) (int ,int,int ) ;} ;


 int FUNC_0 (int ,int,int ) ;

__attribute__((used)) static void FUNC_1(u16_t VAR_0, int VAR_1, void *VAR_2)
{
    struct seg_tx *VAR_3 = VAR_2;

    if (VAR_3->cb && VAR_3->cb->start) {
        VAR_3->cb->start(VAR_0, VAR_1, VAR_3->cb_data);
    }
}
