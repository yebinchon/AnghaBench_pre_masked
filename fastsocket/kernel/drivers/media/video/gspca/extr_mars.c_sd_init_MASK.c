
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gspca_dev {int ctrl_inac; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct gspca_dev *VAR_2)
{
 VAR_2->ctrl_inac = (1 << VAR_1) | (1 << VAR_0);
 return 0;
}
