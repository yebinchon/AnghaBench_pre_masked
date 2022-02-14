
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct service_processor {int dummy; } ;
struct dot_command_header {int command_size; int data_size; scalar_t__ reserved; scalar_t__ status; int type; } ;
struct command {int* buffer; scalar_t__ status; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct command*) ;
 int FUNC_1 (struct service_processor*,struct command*) ;
 struct command* FUNC_2 (struct service_processor*,int ) ;
 int FUNC_3 (struct command*,int ) ;
 int VAR_6 ;
 int FUNC_4 (int*,int ) ;

int FUNC_5(struct service_processor *VAR_7)
{
 struct command *VAR_8;
 struct dot_command_header *VAR_9;
 u8 *VAR_10;
 u8 *VAR_11;
 int VAR_12 = 0;

 VAR_8 = FUNC_2(VAR_7, VAR_5);
 if (VAR_8 == ((void*)0))
  return -VAR_1;

 VAR_9 = (struct dot_command_header *)VAR_8->buffer;
 VAR_9->type = VAR_6;
 VAR_9->command_size = 4;
 VAR_9->data_size = 16;
 VAR_9->status = 0;
 VAR_9->reserved = 0;

 VAR_10 = VAR_8->buffer + sizeof(struct dot_command_header);
 VAR_10[0] = 0x4;
 VAR_10[1] = 0x3;
 VAR_10[2] = 0x5;
 VAR_10[3] = 0xa;

 VAR_11 = VAR_10 + VAR_9->command_size;
 VAR_11[0] = 0;
 FUNC_4(VAR_11, VAR_4);
 VAR_11[10] = 0;
 VAR_11[15] = 0;

 FUNC_1(VAR_7, VAR_8);
 FUNC_3(VAR_8, VAR_3);

 if (VAR_8->status != VAR_2)
  VAR_12 = -VAR_0;

 FUNC_0(VAR_8);

 return VAR_12;
}
