
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ndfc_controller {scalar_t__ ndfcbase; } ;
struct mtd_info {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 struct ndfc_controller VAR_2 ;

__attribute__((used)) static int FUNC_1(struct mtd_info *VAR_3)
{
 struct ndfc_controller *VAR_4 = &VAR_2;

 return FUNC_0(VAR_4->ndfcbase + VAR_0) & VAR_1;
}
