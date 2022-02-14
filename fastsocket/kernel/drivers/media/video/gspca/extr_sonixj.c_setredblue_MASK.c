
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sd {TYPE_1__* ctrls; } ;
struct gspca_dev {int dummy; } ;
struct TYPE_2__ {int val; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct gspca_dev*,int,int ) ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_2)
{
 struct sd *VAR_3 = (struct sd *) VAR_2;

 FUNC_0(VAR_2, 0x05, VAR_3->ctrls[VAR_1].val);

 FUNC_0(VAR_2, 0x06, VAR_3->ctrls[VAR_0].val);
}
