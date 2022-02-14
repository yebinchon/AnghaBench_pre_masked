
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sd {TYPE_1__* ctrls; } ;
struct gspca_dev {int dummy; } ;
struct TYPE_2__ {int val; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct gspca_dev*,int,int*,int) ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_2)
{
 struct sd *VAR_3 = (struct sd *) VAR_2;
 u8 VAR_4;
 u8 VAR_5[6];

 VAR_4 = VAR_3->ctrls[VAR_0].val * 0x30 / (VAR_1 + 1)
    + 0x10;
 VAR_5[0] = (VAR_4 + 1) / 2;
 VAR_5[1] = 0;
 VAR_5[2] = VAR_4;
 VAR_5[3] = 0;
 VAR_5[4] = (VAR_4 + 1) / 5;
 VAR_5[5] = 0;
 FUNC_0(VAR_2, 0x84, VAR_5, sizeof VAR_5);
}
