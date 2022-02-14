
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ndfc_controller {scalar_t__ ndfcbase; scalar_t__ chip_select; } ;
struct mtd_info {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 struct ndfc_controller VAR_3 ;
 int FUNC_2 (scalar_t__,int ) ;

__attribute__((used)) static void FUNC_3(struct mtd_info *VAR_4, int VAR_5)
{
 uint32_t VAR_6;
 struct ndfc_controller *VAR_7 = &VAR_3;

 VAR_6 = FUNC_1(VAR_7->ndfcbase + VAR_0);
 if (VAR_5 >= 0) {
  VAR_6 &= ~VAR_1;
  VAR_6 |= FUNC_0(VAR_5 + VAR_7->chip_select);
 } else
  VAR_6 |= VAR_2;
 FUNC_2(VAR_7->ndfcbase + VAR_0, VAR_6);
}
