
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16_t ;
struct seg_tx {int retransmit; } ;


 int FUNC_0 (struct seg_tx*) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void FUNC_2(u16_t VAR_0, int VAR_1, void *VAR_2)
{
    struct seg_tx *VAR_3 = VAR_2;





    if (VAR_1) {
        FUNC_1(&VAR_3->retransmit,
                              FUNC_0(VAR_3));
    }
}
