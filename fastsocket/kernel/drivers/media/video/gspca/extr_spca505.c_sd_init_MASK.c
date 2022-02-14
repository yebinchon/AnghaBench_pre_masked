
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {scalar_t__ subtype; } ;
struct gspca_dev {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct gspca_dev*,int ) ;

__attribute__((used)) static int FUNC_1(struct gspca_dev *VAR_4)
{
 struct sd *VAR_5 = (struct sd *) VAR_4;

 if (FUNC_0(VAR_4,
    VAR_5->subtype == VAR_1
    ? VAR_3
    : VAR_2))
  return -VAR_0;
 return 0;
}
