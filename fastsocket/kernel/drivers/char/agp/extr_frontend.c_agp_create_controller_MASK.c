
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct agp_controller {int pid; } ;
typedef int pid_t ;


 int VAR_0 ;
 struct agp_controller* FUNC_0 (int,int ) ;

__attribute__((used)) static struct agp_controller *FUNC_1(pid_t VAR_1)
{
 struct agp_controller *VAR_2;

 VAR_2 = FUNC_0(sizeof(struct agp_controller), VAR_0);
 if (VAR_2 == ((void*)0))
  return ((void*)0);

 VAR_2->pid = VAR_1;
 return VAR_2;
}
