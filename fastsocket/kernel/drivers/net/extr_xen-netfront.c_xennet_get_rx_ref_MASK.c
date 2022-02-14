
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netfront_info {int * grant_rx_ref; } ;
typedef int grant_ref_t ;
typedef int RING_IDX ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static grant_ref_t FUNC_1(struct netfront_info *VAR_1,
         RING_IDX VAR_2)
{
 int VAR_3 = FUNC_0(VAR_2);
 grant_ref_t VAR_4 = VAR_1->grant_rx_ref[VAR_3];
 VAR_1->grant_rx_ref[VAR_3] = VAR_0;
 return VAR_4;
}
