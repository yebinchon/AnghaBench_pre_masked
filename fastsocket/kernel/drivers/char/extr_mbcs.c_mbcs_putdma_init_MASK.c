
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct putdma {int DoneIntEnable; } ;


 int FUNC_0 (struct putdma*,int ,int) ;

__attribute__((used)) static inline void FUNC_1(struct putdma *VAR_0)
{
 FUNC_0(VAR_0, 0, sizeof(struct putdma));
 VAR_0->DoneIntEnable = 1;
}
