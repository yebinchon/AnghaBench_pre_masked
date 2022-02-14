
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gspca_dev {int dummy; } ;
typedef int __u16 ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct gspca_dev*,int,int,int) ;

__attribute__((used)) static int FUNC_2(struct gspca_dev *VAR_1,
   __u16 VAR_2, __u16 VAR_3, __u16 VAR_4)
{
 int VAR_5, VAR_6 = 20;

 while (--VAR_6 > 0) {
  VAR_5 = FUNC_1(VAR_1, VAR_2, VAR_3, 1);
  if (VAR_5 == VAR_4)
   return 0;
  FUNC_0(50);
 }
 return -VAR_0;
}
