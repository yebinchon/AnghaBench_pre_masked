
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qdio_q {size_t first_to_check; TYPE_2__** sbal; int nr; scalar_t__ is_input_q; int irq_ptr; int qdio_error; } ;
struct TYPE_4__ {TYPE_1__* element; } ;
struct TYPE_3__ {int sflags; } ;


 int FUNC_0 (int ,int ,char*,size_t) ;
 int FUNC_1 (char*,size_t,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct qdio_q*) ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 int FUNC_3 (struct qdio_q*,int ) ;
 int FUNC_4 (struct qdio_q*,size_t,unsigned char,int) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_5(struct qdio_q *VAR_5, int VAR_6)
{
 unsigned char VAR_7 = (VAR_5->is_input_q) ? VAR_2 :
     VAR_3;

 VAR_5->qdio_error |= VAR_1;


 if ((!VAR_5->is_input_q &&
     (VAR_5->sbal[VAR_5->first_to_check]->element[15].sflags) == 0x10)) {
  FUNC_3(VAR_5, VAR_4);
  FUNC_0(VAR_0, VAR_5->irq_ptr, "OUTFULL FTC:%02x",
         VAR_5->first_to_check);
  goto set;
 }

 FUNC_1("%4x BUF ERROR", FUNC_2(VAR_5));
 FUNC_1((VAR_5->is_input_q) ? "IN:%2d" : "OUT:%2d", VAR_5->nr);
 FUNC_1("FTC:%3d C:%3d", VAR_5->first_to_check, VAR_6);
 FUNC_1("F14:%2x F15:%2x",
    VAR_5->sbal[VAR_5->first_to_check]->element[14].sflags,
    VAR_5->sbal[VAR_5->first_to_check]->element[15].sflags);

set:




 FUNC_4(VAR_5, VAR_5->first_to_check, VAR_7, VAR_6);
}
