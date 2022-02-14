
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {scalar_t__ base_addr; } ;
struct TYPE_2__ {unsigned char hcr_val; } ;
typedef TYPE_1__ elp_device ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct net_device*) ;
 int FUNC_1 (unsigned char,scalar_t__) ;

__attribute__((used)) static inline void FUNC_2(unsigned char VAR_1, struct net_device *VAR_2)
{
 FUNC_1(VAR_1, VAR_2->base_addr + VAR_0);
 ((elp_device *)(FUNC_0(VAR_2)))->hcr_val = VAR_1;
}
