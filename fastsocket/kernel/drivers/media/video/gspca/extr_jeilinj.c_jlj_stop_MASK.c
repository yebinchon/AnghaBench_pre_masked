
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int member_0; int member_1; } ;
struct jlj_command {int instruction; int member_1; TYPE_1__ member_0; } ;
struct gspca_dev {int dummy; } ;


 int FUNC_0 (struct jlj_command*) ;
 int FUNC_1 (struct gspca_dev*,int ) ;

__attribute__((used)) static int FUNC_2(struct gspca_dev *VAR_0)
{
 int VAR_1;
 int VAR_2;
 struct jlj_command VAR_3[] = {
  {{0x71, 0x00}, 0},
  {{0x70, 0x09}, 0},
  {{0x71, 0x80}, 0},
  {{0x70, 0x05}, 0}
 };
 for (VAR_1 = 0; VAR_1 < FUNC_0(VAR_3); VAR_1++) {
  VAR_2 = FUNC_1(VAR_0, VAR_3[VAR_1].instruction);
  if (VAR_2 < 0)
   return VAR_2;
 }
 return VAR_2;
}
