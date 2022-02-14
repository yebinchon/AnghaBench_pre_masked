
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ndfc_controller {scalar_t__ ndfcbase; } ;
struct mtd_info {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 struct ndfc_controller VAR_2 ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 () ;

__attribute__((used)) static void FUNC_3(struct mtd_info *VAR_3, int VAR_4)
{
 uint32_t VAR_5;
 struct ndfc_controller *VAR_6 = &VAR_2;

 VAR_5 = FUNC_0(VAR_6->ndfcbase + VAR_0);
 VAR_5 |= VAR_1;
 FUNC_1(VAR_6->ndfcbase + VAR_0, VAR_5);
 FUNC_2();
}
