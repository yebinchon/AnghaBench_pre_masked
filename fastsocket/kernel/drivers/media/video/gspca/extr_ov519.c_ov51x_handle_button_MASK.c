
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct sd {scalar_t__ snapshot_pressed; int snapshot_needs_reset; int bridge; } ;
struct gspca_dev {int input_dev; } ;





 int VAR_0 ;
 int FUNC_0 (int ,int ,scalar_t__) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct gspca_dev *VAR_1, u8 VAR_2)
{
 struct sd *VAR_3 = (struct sd *) VAR_1;

 if (VAR_3->snapshot_pressed != VAR_2) {




  if (VAR_2)
   VAR_3->snapshot_needs_reset = 1;

  VAR_3->snapshot_pressed = VAR_2;
 } else {



  switch (VAR_3->bridge) {
  case 130:
  case 129:
  case 128:
   if (VAR_2)
    VAR_3->snapshot_needs_reset = 1;
   break;
  }
 }
}
