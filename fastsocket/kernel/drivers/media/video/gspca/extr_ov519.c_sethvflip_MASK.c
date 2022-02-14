
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ streaming; } ;
struct sd {TYPE_1__ gspca_dev; TYPE_2__* ctrls; } ;
struct gspca_dev {int dummy; } ;
struct TYPE_4__ {int val; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (struct sd*,int ,int,int) ;
 int FUNC_1 (struct sd*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct gspca_dev *VAR_6)
{
 struct sd *VAR_7 = (struct sd *) VAR_6;

 if (VAR_7->gspca_dev.streaming)
  FUNC_1(VAR_7, VAR_1, 0x0f);
 FUNC_0(VAR_7, VAR_4,
  VAR_2 * VAR_7->ctrls[VAR_0].val
   | VAR_3 * VAR_7->ctrls[VAR_5].val,
  VAR_2 | VAR_3);
 if (VAR_7->gspca_dev.streaming)
  FUNC_1(VAR_7, VAR_1, 0x00);
}
