
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct cx231xx {int dummy; } ;


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
 int FUNC_0 (struct cx231xx*,int ,int*) ;
 int FUNC_1 (struct cx231xx*,int ,int) ;
 int FUNC_2 (struct cx231xx*) ;

__attribute__((used)) static int FUNC_3(struct cx231xx *VAR_10, u16 VAR_11, u32 *VAR_12)
{

 u32 VAR_13;
 u32 VAR_14 = 0;
 int VAR_15 = 0;

 VAR_13 = 0x82 | VAR_3 | ((VAR_11 & 0x00FF) << 8);
 VAR_13 = VAR_13 << 10;
 FUNC_1(VAR_10, VAR_1, VAR_13);
 VAR_13 = VAR_13 | ((0x05) << 10);
 FUNC_1(VAR_10, VAR_1, VAR_13);


 VAR_13 = 0x82 | VAR_4 | (VAR_11 & 0xFF00);
 VAR_13 = VAR_13 << 10;
 FUNC_1(VAR_10, VAR_1, VAR_13);
 VAR_13 = VAR_13 | ((0x05) << 10);
 FUNC_1(VAR_10, VAR_1, VAR_13);


 VAR_13 = 0x82 | VAR_9 | VAR_2;
 VAR_13 = VAR_13 << 10;
 FUNC_1(VAR_10, VAR_1, VAR_13);
 VAR_13 = VAR_13 | ((0x05) << 10);
 FUNC_1(VAR_10, VAR_1, VAR_13);



 VAR_15 = FUNC_2(VAR_10);




 VAR_13 = (0x82 | VAR_5) << 10;
 FUNC_1(VAR_10, VAR_0, VAR_13);
 VAR_13 = ((0x81 | VAR_5) << 10);
 FUNC_1(VAR_10, VAR_0, VAR_13);
 FUNC_0(VAR_10, VAR_0, &VAR_13);
 VAR_14 |= ((VAR_13 & 0x03FC0000) >> 18);
 FUNC_1(VAR_10, VAR_0, (0x87 << 10));


 VAR_13 = (0x82 | VAR_6) << 10;
 FUNC_1(VAR_10, VAR_0, VAR_13);
 VAR_13 = ((0x81 | VAR_6) << 10);
 FUNC_1(VAR_10, VAR_0, VAR_13);
 FUNC_0(VAR_10, VAR_0, &VAR_13);

 VAR_14 |= ((VAR_13 & 0x03FC0000) >> 10);
 FUNC_1(VAR_10, VAR_0, (0x87 << 10));


 VAR_13 = (0x82 | VAR_7) << 10;
 FUNC_1(VAR_10, VAR_0, VAR_13);
 VAR_13 = ((0x81 | VAR_7) << 10);
 FUNC_1(VAR_10, VAR_0, VAR_13);
 FUNC_0(VAR_10, VAR_0, &VAR_13);
 VAR_14 |= ((VAR_13 & 0x03FC0000) >> 2);
 FUNC_1(VAR_10, VAR_0, (0x87 << 10));


 VAR_13 = (0x82 | VAR_8) << 10;
 FUNC_1(VAR_10, VAR_0, VAR_13);
 VAR_13 = ((0x81 | VAR_8) << 10);
 FUNC_1(VAR_10, VAR_0, VAR_13);
 FUNC_0(VAR_10, VAR_0, &VAR_13);
 VAR_14 |= ((VAR_13 & 0x03FC0000) << 6);
 FUNC_1(VAR_10, VAR_0, (0x87 << 10));

 *VAR_12 = VAR_14;


 return VAR_15;
}
