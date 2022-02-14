
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct us_data {unsigned char* iobuf; } ;


 unsigned char VAR_0 ;
 int FUNC_0 (struct us_data*,unsigned char*,int) ;

__attribute__((used)) static int FUNC_1(struct us_data *VAR_1,
          unsigned char VAR_2,
          unsigned char VAR_3,
          unsigned char VAR_4,
          unsigned char VAR_5,
          unsigned char VAR_6,
          unsigned char VAR_7)
{
 unsigned char *VAR_8 = VAR_1->iobuf;

 VAR_8[0] = 0x40;
 VAR_8[1] = VAR_0;





 VAR_8[2] = VAR_3;







 VAR_8[3] = VAR_2;






 VAR_8[4] = VAR_5;





 VAR_8[5] = VAR_4;







 VAR_8[6] = VAR_7;
 VAR_8[7] = VAR_6;

 return FUNC_0(VAR_1, VAR_8, 8);
}
