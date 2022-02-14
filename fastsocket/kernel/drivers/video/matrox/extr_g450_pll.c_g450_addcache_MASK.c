
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct matrox_pll_cache {scalar_t__ valid; TYPE_1__* data; } ;
struct TYPE_4__ {unsigned int mnp_key; unsigned int mnp_value; } ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 unsigned int VAR_0 ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_2(struct matrox_pll_cache* VAR_1, unsigned int VAR_2, unsigned int VAR_3) {
 if (++VAR_1->valid > FUNC_0(VAR_1->data)) {
  VAR_1->valid = FUNC_0(VAR_1->data);
 }
 FUNC_1(VAR_1->data + 1, VAR_1->data, (VAR_1->valid - 1) * sizeof(*VAR_1->data));
 VAR_1->data[0].mnp_key = VAR_2 & VAR_0;
 VAR_1->data[0].mnp_value = VAR_3;
}
