
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {scalar_t__ sensor; int flags; } ;
struct gspca_dev {int present; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct gspca_dev*,int,int,int) ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_3)
{
 struct sd *VAR_4 = (struct sd *) VAR_3;

 if (!VAR_3->present)
  return;

 if (VAR_4->sensor == VAR_1)
  FUNC_0(VAR_3, 0x89, 0x058c, 0x00ff);
 else if (!(VAR_4->flags & VAR_0))
  FUNC_0(VAR_3, 0x89, 0xffff, 0xffff);

 if (VAR_4->sensor == VAR_2) {
  FUNC_0(VAR_3, 0xa0, 0x26, 0xb300);
  FUNC_0(VAR_3, 0xa0, 0x04, 0xb300);
  FUNC_0(VAR_3, 0xa0, 0x00, 0xb300);
 }
}
