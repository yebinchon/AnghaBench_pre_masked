
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gspca_dev {int dummy; } ;
typedef int __u8 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct gspca_dev*,scalar_t__,int const) ;

__attribute__((used)) static int FUNC_1(struct gspca_dev *VAR_4,
   __u8 VAR_5,
   const __u8 *VAR_6,
   int VAR_7, __u8 VAR_8)
{

 __u8 VAR_9;


 FUNC_0(VAR_4, VAR_0, 0x40);


 VAR_9 = ((VAR_7 & 0x07) << 4) | (VAR_8 & 0x03);
 FUNC_0(VAR_4, VAR_1, VAR_9);

 FUNC_0(VAR_4, VAR_3, VAR_5);
 while (--VAR_7 >= 0)
  FUNC_0(VAR_4, VAR_2 + VAR_7, VAR_6[VAR_7]);
 return 0;
}
