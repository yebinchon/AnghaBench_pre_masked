
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct us_data {int recv_bulk_pipe; int send_bulk_pipe; } ;
typedef int rezero_msg ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int,int ) ;
 int FUNC_3 (char*,unsigned char const*,int) ;
 int FUNC_4 (struct us_data*,int ,char*,int,int *) ;

__attribute__((used)) static int FUNC_5(struct us_data *VAR_5)
{
 const unsigned char VAR_6[] = {
   0x55, 0x53, 0x42, 0x43, 0x78, 0x56, 0x34, 0x12,
   0x01, 0x00, 0x00, 0x00, 0x80, 0x00, 0x06, 0x01,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
 };
 char *VAR_7;
 int VAR_8;

 FUNC_0("Option MS: %s", "DEVICE MODE SWITCH\n");

 VAR_7 = FUNC_2(VAR_1, VAR_0);
 if (VAR_7 == ((void*)0))
  return VAR_2;

 FUNC_3(VAR_7, VAR_6, sizeof(VAR_6));
 VAR_8 = FUNC_4(VAR_5,
   VAR_5->send_bulk_pipe,
   VAR_7, sizeof(VAR_6), ((void*)0));
 if (VAR_8 != VAR_4) {
  VAR_8 = VAR_3;
  goto out;
 }




 FUNC_4(VAR_5,
   VAR_5->recv_bulk_pipe,
   VAR_7, VAR_1, ((void*)0));


 FUNC_4(VAR_5,
   VAR_5->recv_bulk_pipe,
   VAR_7, 13, ((void*)0));

 VAR_8 = VAR_4;

out:
 FUNC_1(VAR_7);
 return VAR_8;
}
