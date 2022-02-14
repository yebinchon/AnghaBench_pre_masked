
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mpsc_port_info {scalar_t__ sdma_base; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 () ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct mpsc_port_info *VAR_1, u32 VAR_2)
{
 u32 VAR_3;

 VAR_3 = FUNC_0(VAR_1->sdma_base + VAR_0);
 if (VAR_2)
  VAR_3 |= VAR_2;
 else
  VAR_3 = 0;
 FUNC_1();
 FUNC_2(VAR_3, VAR_1->sdma_base + VAR_0);
 FUNC_1();
}
