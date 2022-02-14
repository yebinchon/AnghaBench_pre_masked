
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct us_data {unsigned char* iobuf; } ;


 int FUNC_0 (int) ;
 unsigned char FUNC_1 (unsigned short) ;
 unsigned char FUNC_2 (unsigned short) ;
 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (struct us_data*,unsigned char*,unsigned short,int ) ;
 int FUNC_4 (struct us_data*,unsigned char*,int) ;
 scalar_t__ FUNC_5 (struct us_data*) ;
 int FUNC_6 (struct us_data*,int ) ;

__attribute__((used)) static int FUNC_7(struct us_data *VAR_7,
    unsigned char *VAR_8,
    unsigned char *VAR_9,
    unsigned short VAR_10)
{
 int VAR_11, VAR_12;
 unsigned char *VAR_13 = VAR_7->iobuf;
 unsigned char *VAR_14 = VAR_7->iobuf;

 FUNC_0(VAR_10 > VAR_6/2);


 VAR_14[0] = 0x40;
 VAR_14[1] = VAR_0 | VAR_1;


 VAR_14[2] = 0;
 VAR_14[3] = 0;
 VAR_14[4] = 0;
 VAR_14[5] = 0;


 VAR_14[6] = FUNC_1(VAR_10*2);
 VAR_14[7] = FUNC_2(VAR_10*2);


 VAR_12 = FUNC_4(VAR_7, VAR_14, 8);
 if (VAR_12 != VAR_5)
  return VAR_3;


 for (VAR_11=0; VAR_11<VAR_10; VAR_11++) {
  VAR_13[VAR_11<<1] = VAR_8[VAR_11];
  VAR_13[1+(VAR_11<<1)] = VAR_9[VAR_11];
 }


 VAR_12 = FUNC_3(VAR_7, VAR_13, VAR_10*2, 0);
 if (VAR_12 != VAR_5)
  return VAR_3;

 if (FUNC_5(VAR_7) == VAR_2)
  return FUNC_6(VAR_7, 0);
 else
  return VAR_4;
}
