
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dc390_srb {int TagNumber; } ;
struct dc390_dcb {int TagMask; } ;


 int VAR_0 ;

__attribute__((used)) static void __inline__
FUNC_0 (struct dc390_dcb* VAR_1, struct dc390_srb* VAR_2)
{
 if (VAR_2->TagNumber != VAR_0) {
  VAR_1->TagMask &= ~(1 << VAR_2->TagNumber);
  VAR_2->TagNumber = VAR_0;
 }
}
