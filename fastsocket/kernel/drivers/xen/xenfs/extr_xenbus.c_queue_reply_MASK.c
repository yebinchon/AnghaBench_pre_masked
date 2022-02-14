
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct read_buffer {size_t len; int list; int msg; scalar_t__ cons; } ;
struct list_head {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct read_buffer* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,struct list_head*) ;
 int FUNC_2 (int ,void const*,size_t) ;

__attribute__((used)) static int FUNC_3(struct list_head *VAR_2, const void *VAR_3, size_t VAR_4)
{
 struct read_buffer *VAR_5;

 if (VAR_4 == 0)
  return 0;

 VAR_5 = FUNC_0(sizeof(*VAR_5) + VAR_4, VAR_1);
 if (VAR_5 == ((void*)0))
  return -VAR_0;

 VAR_5->cons = 0;
 VAR_5->len = VAR_4;

 FUNC_2(VAR_5->msg, VAR_3, VAR_4);

 FUNC_1(&VAR_5->list, VAR_2);
 return 0;
}
