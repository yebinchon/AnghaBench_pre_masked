
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {scalar_t__ vflip; } ;
struct gspca_dev {int dummy; } ;


 int FUNC_0 (struct gspca_dev*,int) ;
 int FUNC_1 (struct gspca_dev*,int,int) ;

__attribute__((used)) static void FUNC_2(struct gspca_dev *VAR_0)
{
 struct sd *VAR_1 = (struct sd *) VAR_0;

 if (VAR_1->vflip == 0)
  FUNC_1(VAR_0, 0x0c,
    FUNC_0(VAR_0, 0x0c) | 0x80);
 else
  FUNC_1(VAR_0, 0x0c,
    FUNC_0(VAR_0, 0x0c) & ~0x80);
}
