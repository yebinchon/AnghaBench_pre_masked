
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int present; } ;
struct sd {scalar_t__ bridge; scalar_t__ snapshot_pressed; TYPE_1__ gspca_dev; } ;
struct gspca_dev {int input_dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sd*,int ,int) ;
 int FUNC_3 (struct sd*) ;

__attribute__((used)) static void FUNC_4(struct gspca_dev *VAR_4)
{
 struct sd *VAR_5 = (struct sd *) VAR_4;

 if (!VAR_5->gspca_dev.present)
  return;
 if (VAR_5->bridge == VAR_1)
  FUNC_3(VAR_5);
 if (VAR_5->bridge == VAR_0)
  FUNC_2(VAR_5, VAR_3, 0x23);
}
