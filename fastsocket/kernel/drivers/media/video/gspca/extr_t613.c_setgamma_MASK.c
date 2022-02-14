
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {size_t gamma; } ;
struct gspca_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,size_t) ;
 int * VAR_1 ;
 int FUNC_1 (struct gspca_dev*,int,int ,int) ;

__attribute__((used)) static void FUNC_2(struct gspca_dev *VAR_2)
{
 struct sd *VAR_3 = (struct sd *) VAR_2;

 FUNC_0(VAR_0, "Gamma: %d", VAR_3->gamma);
 FUNC_1(VAR_2, 0x90,
  VAR_1[VAR_3->gamma], sizeof VAR_1[0]);
}
