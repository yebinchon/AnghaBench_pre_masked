
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct us_data {unsigned char* iobuf; } ;


 unsigned char FUNC_0 (unsigned long) ;
 unsigned char VAR_0 ;
 unsigned char FUNC_1 (unsigned long) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (unsigned char*,int ,int) ;
 int FUNC_4 (struct us_data*,unsigned char*,int) ;

__attribute__((used)) static int
FUNC_5(struct us_data *VAR_1, unsigned long VAR_2) {
 unsigned char *VAR_3 = VAR_1->iobuf;
 int VAR_4;

 FUNC_2("sddr09_erase: erase address %lu\n", VAR_2);

 FUNC_3(VAR_3, 0, 12);
 VAR_3[0] = 0xEA;
 VAR_3[1] = VAR_0;
 VAR_3[6] = FUNC_1(VAR_2>>16);
 VAR_3[7] = FUNC_0(VAR_2>>16);
 VAR_3[8] = FUNC_1(VAR_2 & 0xFFFF);
 VAR_3[9] = FUNC_0(VAR_2 & 0xFFFF);

 VAR_4 = FUNC_4(VAR_1, VAR_3, 12);

 if (VAR_4)
  FUNC_2("Result for send_control in sddr09_erase %d\n",
     VAR_4);

 return VAR_4;
}
