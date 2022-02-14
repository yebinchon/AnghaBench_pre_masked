
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gspca_dev {int dummy; } ;
typedef scalar_t__ __u16 ;


 int FUNC_0 (struct gspca_dev*,scalar_t__ const,scalar_t__ const) ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_0,
       const __u16 (*VAR_1)[2])
{
 while ((*VAR_1)[0]) {
  FUNC_0(VAR_0, (*VAR_1)[1], (*VAR_1)[0]);
  VAR_1++;
 }
}
