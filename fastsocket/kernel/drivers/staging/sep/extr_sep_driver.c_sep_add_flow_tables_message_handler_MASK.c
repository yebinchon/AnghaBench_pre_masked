
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sep_flow_context_t {int message_size_in_bytes; struct sep_driver_add_message_t* message; } ;
struct sep_driver_add_message_t {int message_size_in_bytes; scalar_t__ message_address; int flow_id; } ;
struct sep_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sep_driver_add_message_t*,void*,int) ;
 int FUNC_1 (char*) ;
 struct sep_flow_context_t* FUNC_2 (struct sep_device*,int ) ;

__attribute__((used)) static int FUNC_3(struct sep_device *VAR_2, unsigned long VAR_3)
{
 int VAR_4;
 struct sep_driver_add_message_t VAR_5;
 struct sep_flow_context_t *VAR_6;

 FUNC_1("SEP Driver:--------> sep_add_flow_tables_message_handler start\n");

 VAR_4 = FUNC_0(&VAR_5, (void *) VAR_3, sizeof(struct sep_driver_add_message_t));
 if (VAR_4)
  goto end_function;


 if (VAR_5.message_size_in_bytes > VAR_1) {
  VAR_4 = -VAR_0;
  goto end_function;
 }


 VAR_6 = FUNC_2(VAR_2, VAR_5.flow_id);
 if (VAR_6 == ((void*)0))
  goto end_function;


 VAR_6->message_size_in_bytes = VAR_5.message_size_in_bytes;
 VAR_4 = FUNC_0(VAR_6->message, (void *) VAR_5.message_address, VAR_5.message_size_in_bytes);
end_function:
 FUNC_1("SEP Driver:<-------- sep_add_flow_tables_message_handler end\n");
 return VAR_4;
}
