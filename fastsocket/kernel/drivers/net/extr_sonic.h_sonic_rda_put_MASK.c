
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sonic_local {int dma_bitmode; int rda; } ;
struct net_device {int dummy; } ;
typedef int __u16 ;


 int VAR_0 ;
 struct sonic_local* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,int ,int,int ) ;

__attribute__((used)) static inline void FUNC_2(struct net_device* VAR_1, int VAR_2,
     int VAR_3, __u16 VAR_4)
{
 struct sonic_local *VAR_5 = FUNC_0(VAR_1);
 FUNC_1(VAR_5->rda, VAR_5->dma_bitmode,
        (VAR_2 * VAR_0) + VAR_3, VAR_4);
}
