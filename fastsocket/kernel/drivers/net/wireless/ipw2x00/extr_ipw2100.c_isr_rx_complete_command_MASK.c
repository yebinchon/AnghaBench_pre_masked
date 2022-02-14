
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipw2100_priv {int wait_command_queue; int status; } ;
struct ipw2100_cmd_header {size_t host_command_reg; } ;


 size_t FUNC_0 (int *) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_1 (char*,int ,size_t) ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct ipw2100_priv *VAR_5,
        struct ipw2100_cmd_header *VAR_6)
{







 if (VAR_6->host_command_reg == VAR_1)
  VAR_5->status |= VAR_3;

 if (VAR_6->host_command_reg == VAR_0)
  VAR_5->status &= ~VAR_3;

 VAR_5->status &= ~VAR_2;

 FUNC_2(&VAR_5->wait_command_queue);
}
