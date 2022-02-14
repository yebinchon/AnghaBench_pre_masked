
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
struct mpsc_port_info {scalar_t__ sdma_base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static uint FUNC_1(struct mpsc_port_info *VAR_2)
{
 return FUNC_0(VAR_2->sdma_base + VAR_0) & VAR_1;
}
