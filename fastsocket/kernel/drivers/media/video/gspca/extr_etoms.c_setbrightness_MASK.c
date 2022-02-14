
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {int brightness; } ;
struct gspca_dev {int dummy; } ;
typedef int __u8 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct gspca_dev*,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_1)
{
 struct sd *VAR_2 = (struct sd *) VAR_1;
 int VAR_3;
 __u8 VAR_4 = VAR_2->brightness;

 for (VAR_3 = 0; VAR_3 < 4; VAR_3++)
  FUNC_0(VAR_1, VAR_0 + VAR_3, VAR_4);
}
