
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iotlb_entry {int da; int pa; int valid; int pgsz; int endian; int elsz; int mixed; } ;
struct cr_regs {int cam; int ram; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_0(struct cr_regs *VAR_7, struct iotlb_entry *VAR_8)
{
 VAR_8->da = VAR_7->cam & VAR_2;
 VAR_8->pa = VAR_7->ram & VAR_6;
 VAR_8->valid = VAR_7->cam & VAR_1;
 VAR_8->pgsz = VAR_7->cam & VAR_0;
 VAR_8->endian = VAR_7->ram & VAR_4;
 VAR_8->elsz = VAR_7->ram & VAR_3;
 VAR_8->mixed = VAR_7->ram & VAR_5;
}
