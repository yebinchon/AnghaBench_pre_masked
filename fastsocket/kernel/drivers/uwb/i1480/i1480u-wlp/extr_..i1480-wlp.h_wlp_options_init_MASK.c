
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int prid; } ;
struct wlp_options {TYPE_1__ def_tx_hdr; int mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*,int) ;

__attribute__((used)) static inline
void FUNC_5(struct wlp_options *VAR_2)
{
 FUNC_1(&VAR_2->mutex);
 FUNC_2(&VAR_2->def_tx_hdr, VAR_0);
 FUNC_4(&VAR_2->def_tx_hdr, 1);

 FUNC_3(&VAR_2->def_tx_hdr, VAR_1);

 VAR_2->def_tx_hdr.prid = FUNC_0(0x0000);

}
