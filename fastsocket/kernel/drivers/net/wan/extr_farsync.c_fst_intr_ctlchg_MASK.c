
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fst_port_info {size_t index; scalar_t__ hwif; } ;
struct fst_card_info {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct fst_card_info*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct fst_port_info*) ;
 int * VAR_5 ;

__attribute__((used)) static void
FUNC_6(struct fst_card_info *VAR_6, struct fst_port_info *VAR_7)
{
 int VAR_8;

 VAR_8 = FUNC_0(VAR_6, VAR_5[VAR_7->index]);

 if (VAR_8 & (((VAR_7->hwif == VAR_3) || (VAR_7->hwif == VAR_4))
         ? VAR_2 : VAR_1)) {
  if (!FUNC_3(FUNC_5(VAR_7))) {
   FUNC_1(VAR_0, "DCD active\n");
   FUNC_4(FUNC_5(VAR_7));
  }
 } else {
  if (FUNC_3(FUNC_5(VAR_7))) {
   FUNC_1(VAR_0, "DCD lost\n");
   FUNC_2(FUNC_5(VAR_7));
  }
 }
}
