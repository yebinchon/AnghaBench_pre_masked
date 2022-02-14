
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hwicap_drvdata {scalar_t__ base_address; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static inline u32 FUNC_1(struct hwicap_drvdata *VAR_2)
{
 u32 VAR_3 = FUNC_0(VAR_2->base_address + VAR_1);
 return (VAR_3 & VAR_0) ? 0 : 1;
}
