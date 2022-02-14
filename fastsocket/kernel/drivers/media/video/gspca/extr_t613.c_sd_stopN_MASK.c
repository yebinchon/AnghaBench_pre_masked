
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sd {size_t sensor; } ;
struct gspca_dev {int dummy; } ;
struct TYPE_2__ {int stream; } ;


 size_t VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct gspca_dev*,int) ;
 int FUNC_2 (struct gspca_dev*,int ,int) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static void FUNC_3(struct gspca_dev *VAR_2)
{
 struct sd *VAR_3 = (struct sd *) VAR_2;

 FUNC_2(VAR_2, VAR_1[VAR_3->sensor].stream,
   sizeof VAR_1[VAR_3->sensor].stream);
 FUNC_2(VAR_2, VAR_1[VAR_3->sensor].stream,
   sizeof VAR_1[VAR_3->sensor].stream);
 if (VAR_3->sensor == VAR_0) {
  FUNC_0(20);
  FUNC_1(VAR_2, 0x0309);
 }
}
