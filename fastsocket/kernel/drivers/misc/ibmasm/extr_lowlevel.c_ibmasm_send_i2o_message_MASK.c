
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct service_processor {int base_address; struct command* current_command; } ;
struct i2o_message {int data; int header; } ;
struct i2o_header {int dummy; } ;
struct command {TYPE_1__* buffer; } ;
struct TYPE_4__ {int message_size; } ;


 unsigned int FUNC_0 (TYPE_1__*) ;
 struct i2o_message* FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 TYPE_1__ VAR_0 ;
 int FUNC_3 (int *,TYPE_1__*,unsigned int) ;
 int FUNC_4 (unsigned int) ;
 int FUNC_5 (int ,int ) ;

int FUNC_6(struct service_processor *VAR_1)
{
 u32 VAR_2;
 unsigned int VAR_3;
 struct i2o_message *VAR_4;
 struct command *VAR_5 = VAR_1->current_command;

 VAR_2 = FUNC_2(VAR_1->base_address);
 if (!VAR_2)
  return 1;

 VAR_3 = FUNC_0(VAR_5->buffer);
 VAR_0.message_size = FUNC_4(VAR_3);

 VAR_4 = FUNC_1(VAR_1->base_address, VAR_2);

 FUNC_3(&VAR_4->header, &VAR_0, sizeof(struct i2o_header));
 FUNC_3(&VAR_4->data, VAR_5->buffer, VAR_3);

 FUNC_5(VAR_1->base_address, VAR_2);

 return 0;
}
