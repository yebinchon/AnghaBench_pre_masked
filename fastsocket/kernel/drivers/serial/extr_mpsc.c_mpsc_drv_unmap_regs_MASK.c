
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpsc_port_info {scalar_t__ brg_base_p; scalar_t__ sdma_base_p; scalar_t__ mpsc_base_p; int * brg_base; int * sdma_base; int * mpsc_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__,int ) ;

__attribute__((used)) static void FUNC_2(struct mpsc_port_info *VAR_3)
{
 if (!VAR_3->mpsc_base) {
  FUNC_0(VAR_3->mpsc_base);
  FUNC_1(VAR_3->mpsc_base_p, VAR_1);
 }
 if (!VAR_3->sdma_base) {
  FUNC_0(VAR_3->sdma_base);
  FUNC_1(VAR_3->sdma_base_p, VAR_2);
 }
 if (!VAR_3->brg_base) {
  FUNC_0(VAR_3->brg_base);
  FUNC_1(VAR_3->brg_base_p, VAR_0);
 }

 VAR_3->mpsc_base = ((void*)0);
 VAR_3->sdma_base = ((void*)0);
 VAR_3->brg_base = ((void*)0);

 VAR_3->mpsc_base_p = 0;
 VAR_3->sdma_base_p = 0;
 VAR_3->brg_base_p = 0;
}
