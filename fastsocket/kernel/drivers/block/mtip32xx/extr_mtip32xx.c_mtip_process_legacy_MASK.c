
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mtip_port {int * cmd_issue; int flags; struct mtip_cmd* commands; } ;
struct mtip_cmd {int comp_data; int (* comp_func ) (struct mtip_port*,size_t,int ,int ) ;} ;
struct driver_data {struct mtip_port* port; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct mtip_port*,size_t,int ,int ) ;
 scalar_t__ FUNC_2 (int ,int *) ;

__attribute__((used)) static inline void FUNC_3(struct driver_data *VAR_2, u32 VAR_3)
{
 struct mtip_port *VAR_4 = VAR_2->port;
 struct mtip_cmd *VAR_5 = &VAR_4->commands[VAR_1];

 if (FUNC_2(VAR_0, &VAR_4->flags) &&
     (VAR_5 != ((void*)0)) && !(FUNC_0(VAR_4->cmd_issue[VAR_1])
  & (1 << VAR_1))) {
  if (VAR_5->comp_func) {
   VAR_5->comp_func(VAR_4,
    VAR_1,
    VAR_5->comp_data,
    0);
   return;
  }
 }

 return;
}
