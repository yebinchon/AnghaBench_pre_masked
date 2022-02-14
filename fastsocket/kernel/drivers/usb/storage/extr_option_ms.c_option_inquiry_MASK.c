
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct us_data {int recv_bulk_pipe; int send_bulk_pipe; } ;
typedef int inquiry_msg ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int,int ) ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (char*,unsigned char const*,int) ;
 int FUNC_5 (struct us_data*,int ,char*,int,int *) ;

__attribute__((used)) static int FUNC_6(struct us_data *VAR_4)
{
 const unsigned char VAR_5[] = {
   0x55, 0x53, 0x42, 0x43, 0x12, 0x34, 0x56, 0x78,
   0x24, 0x00, 0x00, 0x00, 0x80, 0x00, 0x06, 0x12,
   0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
 };
 char *VAR_6;
 int VAR_7;

 FUNC_0("Option MS: %s", "device inquiry for vendor name\n");

 VAR_6 = FUNC_2(0x24, VAR_0);
 if (VAR_6 == ((void*)0))
  return VAR_1;

 FUNC_4(VAR_6, VAR_5, sizeof(VAR_5));
 VAR_7 = FUNC_5(VAR_4,
   VAR_4->send_bulk_pipe,
   VAR_6, sizeof(VAR_5), ((void*)0));
 if (VAR_7 != VAR_3) {
  VAR_7 = VAR_2;
  goto out;
 }

 VAR_7 = FUNC_5(VAR_4,
   VAR_4->recv_bulk_pipe,
   VAR_6, 0x24, ((void*)0));
 if (VAR_7 != VAR_3) {
  VAR_7 = VAR_2;
  goto out;
 }

 VAR_7 = FUNC_3(VAR_6+8, "Option", 6);

 if (VAR_7 != 0)
  VAR_7 = FUNC_3(VAR_6+8, "ZCOPTION", 8);


 FUNC_5(VAR_4,
   VAR_4->recv_bulk_pipe,
   VAR_6, 13, ((void*)0));

out:
 FUNC_1(VAR_6);
 return VAR_7;
}
