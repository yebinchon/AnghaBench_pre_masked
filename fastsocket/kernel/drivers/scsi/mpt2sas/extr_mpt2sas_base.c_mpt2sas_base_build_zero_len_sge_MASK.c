
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct MPT2SAS_ADAPTER {int (* base_add_sg_single ) (void*,int ,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (void*,int ,int) ;

void
FUNC_1(struct MPT2SAS_ADAPTER *VAR_5, void *VAR_6)
{
 u32 VAR_7 = (u32)((VAR_2 |
     VAR_0 | VAR_1 |
     VAR_4) <<
     VAR_3);
 VAR_5->base_add_sg_single(VAR_6, VAR_7, -1);
}
