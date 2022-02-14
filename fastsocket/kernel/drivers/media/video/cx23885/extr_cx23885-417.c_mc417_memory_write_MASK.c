
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cx23885_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct cx23885_dev*) ;

int FUNC_2(struct cx23885_dev *VAR_14, u32 VAR_15, u32 VAR_16)
{
 u32 VAR_17;




 FUNC_0(VAR_4, VAR_2);


 VAR_17 = VAR_1 | VAR_2 | VAR_9 |
  (VAR_16 & 0x000000FF);
 FUNC_0(VAR_5, VAR_17);


 VAR_17 |= VAR_0 | VAR_3;
 FUNC_0(VAR_5, VAR_17);


 VAR_17 = VAR_1 | VAR_2 | VAR_10 |
  ((VAR_16 >> 8) & 0x000000FF);
 FUNC_0(VAR_5, VAR_17);
 VAR_17 |= VAR_0 | VAR_3;
 FUNC_0(VAR_5, VAR_17);


 VAR_17 = VAR_1 | VAR_2 | VAR_11 |
  ((VAR_16 >> 16) & 0x000000FF);
 FUNC_0(VAR_5, VAR_17);
 VAR_17 |= VAR_0 | VAR_3;
 FUNC_0(VAR_5, VAR_17);


 VAR_17 = VAR_1 | VAR_2 | VAR_12 |
  ((VAR_16 >> 24) & 0x000000FF);
 FUNC_0(VAR_5, VAR_17);
 VAR_17 |= VAR_0 | VAR_3;
 FUNC_0(VAR_5, VAR_17);


 VAR_17 = VAR_1 | VAR_2 | VAR_8 |
  VAR_13 | ((VAR_15 >> 16) & 0x3F);
 FUNC_0(VAR_5, VAR_17);
 VAR_17 |= VAR_0 | VAR_3;
 FUNC_0(VAR_5, VAR_17);


 VAR_17 = VAR_1 | VAR_2 | VAR_7 |
  ((VAR_15 >> 8) & 0xFF);
 FUNC_0(VAR_5, VAR_17);
 VAR_17 |= VAR_0 | VAR_3;
 FUNC_0(VAR_5, VAR_17);


 VAR_17 = VAR_1 | VAR_2 | VAR_6 |
  (VAR_15 & 0xFF);
 FUNC_0(VAR_5, VAR_17);
 VAR_17 |= VAR_0 | VAR_3;
 FUNC_0(VAR_5, VAR_17);


 return FUNC_1(VAR_14);
}
