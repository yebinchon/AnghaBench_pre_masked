
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sd {scalar_t__ do_ctrl; } ;
struct TYPE_2__ {scalar_t__ bulk_nurbs; } ;
struct gspca_dev {TYPE_1__ cam; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct gspca_dev*,int ,int *,int) ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_3,
   u8 *VAR_4,
   int VAR_5)
{
 struct sd *VAR_6 = (struct sd *) VAR_3;

 if (VAR_6->do_ctrl)
  VAR_3->cam.bulk_nurbs = 0;
 FUNC_0(VAR_3, VAR_0, ((void*)0), 0);
 FUNC_0(VAR_3, VAR_1, VAR_4, VAR_5 - 8);
 FUNC_0(VAR_3, VAR_2, ((void*)0), 0);
}
