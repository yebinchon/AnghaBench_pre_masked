
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stack_frame {struct stack_frame* next_frame; int return_address; } ;
typedef int bufhead ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct stack_frame*,struct stack_frame*,int) ;
 int FUNC_1 (int ,struct stack_frame*,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static struct stack_frame *FUNC_3(struct stack_frame *VAR_1)
{
 struct stack_frame VAR_2[2];


 if (!FUNC_1(VAR_0, VAR_1, sizeof(VAR_2)))
  return ((void*)0);
 if (FUNC_0(VAR_2, VAR_1, sizeof(VAR_2)))
  return ((void*)0);

 FUNC_2(VAR_2[0].return_address);



 if (VAR_1 >= VAR_2[0].next_frame)
  return ((void*)0);

 return VAR_2[0].next_frame;
}
