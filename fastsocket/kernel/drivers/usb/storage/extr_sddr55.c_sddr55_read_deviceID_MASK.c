
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct us_data {unsigned char* iobuf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (unsigned char*,int ,int) ;
 int FUNC_2 (struct us_data*,int ,unsigned char*,int) ;

__attribute__((used)) static int FUNC_3(struct us_data *VAR_5,
  unsigned char *VAR_6,
  unsigned char *VAR_7) {

 int VAR_8;
 unsigned char *VAR_9 = VAR_5->iobuf;
 unsigned char *VAR_10 = VAR_5->iobuf;

 FUNC_1(VAR_9, 0, 8);
 VAR_9[5] = 0xB0;
 VAR_9[7] = 0x84;
 VAR_8 = FUNC_2(VAR_5, VAR_1, VAR_9, 8);

 FUNC_0("Result of send_control for device ID is %d\n",
  VAR_8);

 if (VAR_8 != VAR_4)
  return VAR_2;

 VAR_8 = FUNC_2(VAR_5,
  VAR_0, VAR_10, 4);

 if (VAR_8 != VAR_4)
  return VAR_2;

 *VAR_6 = VAR_10[0];
 *VAR_7 = VAR_10[1];

 if (VAR_10[0] != 0xff) {
      VAR_8 = FUNC_2(VAR_5,
   VAR_0, VAR_10, 2);
 }

 return VAR_3;
}
