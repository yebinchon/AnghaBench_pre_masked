
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct us_data {unsigned char* iobuf; int send_bulk_pipe; } ;


 int VAR_0 ;
 unsigned char FUNC_0 (int) ;
 unsigned char VAR_1 ;
 unsigned char FUNC_1 (int) ;
 int VAR_2 ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (struct us_data*,unsigned char*,int) ;
 int FUNC_4 (struct us_data*,int ,unsigned char*,int,int,int *) ;

__attribute__((used)) static int
FUNC_5(struct us_data *VAR_3,
       unsigned long VAR_4, unsigned long VAR_5,
       int VAR_6, int VAR_7, unsigned char *VAR_8, int VAR_9) {

 unsigned char *VAR_10 = VAR_3->iobuf;
 int VAR_11;

 VAR_10[0] = 0xE9;
 VAR_10[1] = VAR_1;

 VAR_10[2] = FUNC_1(VAR_4>>16);
 VAR_10[3] = FUNC_0(VAR_4>>16);
 VAR_10[4] = FUNC_1(VAR_4 & 0xFFFF);
 VAR_10[5] = FUNC_0(VAR_4 & 0xFFFF);

 VAR_10[6] = FUNC_1(VAR_5>>16);
 VAR_10[7] = FUNC_0(VAR_5>>16);
 VAR_10[8] = FUNC_1(VAR_5 & 0xFFFF);
 VAR_10[9] = FUNC_0(VAR_5 & 0xFFFF);

 VAR_10[10] = FUNC_1(VAR_6);
 VAR_10[11] = FUNC_0(VAR_6);

 VAR_11 = FUNC_3(VAR_3, VAR_10, 12);

 if (VAR_11) {
  FUNC_2("Result for send_control in sddr09_writeX %d\n",
     VAR_11);
  return VAR_11;
 }

 VAR_11 = FUNC_4(VAR_3, VAR_3->send_bulk_pipe,
           VAR_8, VAR_7, VAR_9, ((void*)0));

 if (VAR_11 != VAR_2) {
  FUNC_2("Result for bulk_transfer in sddr09_writeX %d\n",
     VAR_11);
  return -VAR_0;
 }
 return 0;
}
