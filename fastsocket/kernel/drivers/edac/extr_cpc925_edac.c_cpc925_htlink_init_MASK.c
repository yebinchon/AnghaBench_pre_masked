
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cpc925_dev_info {scalar_t__ vbase; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct cpc925_dev_info *VAR_2)
{
 u32 VAR_3;

 VAR_3 = FUNC_0(VAR_2->vbase + VAR_1);
 if ((VAR_3 & VAR_0) == 0) {
  VAR_3 |= VAR_0;
  FUNC_1(VAR_3, VAR_2->vbase + VAR_1);
 }
}
