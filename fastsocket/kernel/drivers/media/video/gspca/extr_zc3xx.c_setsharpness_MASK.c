
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int member_0; int member_1; } ;
typedef TYPE_2__ u8 ;
struct sd {TYPE_1__* ctrls; } ;
struct gspca_dev {int dummy; } ;
struct TYPE_4__ {int val; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct gspca_dev*,int) ;
 int FUNC_1 (struct gspca_dev*,TYPE_2__ const,int) ;

__attribute__((used)) static void FUNC_2(struct gspca_dev *VAR_1)
{
 struct sd *VAR_2 = (struct sd *) VAR_1;
 int VAR_3;
 static const u8 VAR_4[][2] = {
  {0x02, 0x03},
  {0x04, 0x07},
  {0x08, 0x0f},
  {0x10, 0x1e}
 };

 VAR_3 = VAR_2->ctrls[VAR_0].val;
 FUNC_1(VAR_1, VAR_4[VAR_3][0], 0x01c6);
 FUNC_0(VAR_1, 0x01c8);
 FUNC_0(VAR_1, 0x01c9);
 FUNC_0(VAR_1, 0x01ca);
 FUNC_1(VAR_1, VAR_4[VAR_3][1], 0x01cb);
}
