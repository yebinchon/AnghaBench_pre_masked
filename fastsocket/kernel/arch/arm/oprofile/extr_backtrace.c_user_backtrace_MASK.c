
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct frame_tail {struct frame_tail* fp; int lr; } ;
typedef int buftail ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct frame_tail*,struct frame_tail*,int) ;
 int FUNC_1 (int ,struct frame_tail*,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static struct frame_tail* FUNC_3(struct frame_tail *VAR_1)
{
 struct frame_tail VAR_2[2];


 if (!FUNC_1(VAR_0, VAR_1, sizeof(VAR_2)))
  return ((void*)0);
 if (FUNC_0(VAR_2, VAR_1, sizeof(VAR_2)))
  return ((void*)0);

 FUNC_2(VAR_2[0].lr);



 if (VAR_1 >= VAR_2[0].fp)
  return ((void*)0);

 return VAR_2[0].fp-1;
}
