
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tape390_kekl {int label; void* type_on_tape; void* type; } ;
struct tape3592_kekl {int flags; int label; } ;


 int FUNC_0 (int ,int) ;
 void* VAR_0 ;
 void* VAR_1 ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (struct tape390_kekl*,int ,int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct tape3592_kekl *VAR_2,
       struct tape390_kekl *VAR_3)
{
 FUNC_2(VAR_3, 0, sizeof(*VAR_3));
 if(VAR_2->flags & 0x40)
  VAR_3->type = VAR_0;
 else
  VAR_3->type = VAR_1;
 if(VAR_2->flags & 0x80)
  VAR_3->type_on_tape = VAR_0;
 else
  VAR_3->type_on_tape = VAR_1;
 FUNC_1(VAR_3->label, VAR_2->label, sizeof(VAR_2->label));
 FUNC_0(VAR_3->label, sizeof(VAR_2->label));
 FUNC_3(VAR_3->label);
}
