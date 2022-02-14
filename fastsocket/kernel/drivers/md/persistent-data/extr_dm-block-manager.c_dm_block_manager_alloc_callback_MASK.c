
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_buffer {int dummy; } ;
struct buffer_aux {int lock; int * validator; } ;


 int FUNC_0 (int *) ;
 struct buffer_aux* FUNC_1 (struct dm_buffer*) ;

__attribute__((used)) static void FUNC_2(struct dm_buffer *VAR_0)
{
 struct buffer_aux *VAR_1 = FUNC_1(VAR_0);
 VAR_1->validator = ((void*)0);
 FUNC_0(&VAR_1->lock);
}
