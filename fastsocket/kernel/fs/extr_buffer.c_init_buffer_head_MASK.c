
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buffer_head {int b_assoc_buffers; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct buffer_head*,int ,int) ;

__attribute__((used)) static void
FUNC_2(void *VAR_0)
{
 struct buffer_head *VAR_1 = VAR_0;

 FUNC_1(VAR_1, 0, sizeof(*VAR_1));
 FUNC_0(&VAR_1->b_assoc_buffers);
}
