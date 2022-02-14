
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ndfc_controller {scalar_t__ ndfcbase; } ;
struct mtd_info {int dummy; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct ndfc_controller VAR_4 ;
 int FUNC_0 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct mtd_info *VAR_5, int VAR_6, unsigned int VAR_7)
{
 struct ndfc_controller *VAR_8 = &VAR_4;

 if (VAR_6 == VAR_1)
  return;

 if (VAR_7 & VAR_0)
  FUNC_0(VAR_6 & 0xFF, VAR_8->ndfcbase + VAR_3);
 else
  FUNC_0(VAR_6 & 0xFF, VAR_8->ndfcbase + VAR_2);
}
