
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct getdma {int DoneIntEnable; } ;


 int FUNC_0 (struct getdma*,int ,int) ;

__attribute__((used)) static inline void FUNC_1(struct getdma *VAR_0)
{
 FUNC_0(VAR_0, 0, sizeof(struct getdma));
 VAR_0->DoneIntEnable = 1;
}
