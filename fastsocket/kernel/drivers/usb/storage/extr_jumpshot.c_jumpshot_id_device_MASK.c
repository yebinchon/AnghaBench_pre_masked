
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct us_data {unsigned char* iobuf; int send_ctrl_pipe; } ;
struct jumpshot_info {int sectors; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct us_data*,unsigned char*,int) ;
 int FUNC_2 (unsigned char*) ;
 unsigned char* FUNC_3 (int,int ) ;
 int FUNC_4 (struct us_data*,int ,int ,int,int ,int,unsigned char*,int) ;

__attribute__((used)) static int FUNC_5(struct us_data *VAR_4,
         struct jumpshot_info *VAR_5)
{
 unsigned char *VAR_6 = VAR_4->iobuf;
 unsigned char *VAR_7;
 int VAR_8;

 if (!VAR_5)
  return VAR_1;

 VAR_6[0] = 0xE0;
 VAR_6[1] = 0xEC;
 VAR_7 = FUNC_3(512, VAR_0);
 if (!VAR_7)
  return VAR_1;


 VAR_8 = FUNC_4(VAR_4, VAR_4->send_ctrl_pipe,
       0, 0x20, 0, 6, VAR_6, 2);

 if (VAR_8 != VAR_3) {
  FUNC_0("jumpshot_id_device:  Gah! "
     "send_control for read_capacity failed\n");
  VAR_8 = VAR_1;
  goto leave;
 }


 VAR_8 = FUNC_1(VAR_4, VAR_7, 512);
 if (VAR_8 != VAR_3) {
  VAR_8 = VAR_1;
  goto leave;
 }

 VAR_5->sectors = ((u32)(VAR_7[117]) << 24) |
   ((u32)(VAR_7[116]) << 16) |
   ((u32)(VAR_7[115]) << 8) |
   ((u32)(VAR_7[114]) );

 VAR_8 = VAR_2;

 leave:
 FUNC_2(VAR_7);
 return VAR_8;
}
