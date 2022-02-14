
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct transient_c {scalar_t__ next_free; } ;
struct dm_exception_store {struct transient_c* context; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct transient_c* FUNC_0 (int,int ) ;

__attribute__((used)) static int FUNC_1(struct dm_exception_store *VAR_2,
    unsigned VAR_3, char **VAR_4)
{
 struct transient_c *VAR_5;

 VAR_5 = FUNC_0(sizeof(struct transient_c), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_5->next_free = 0;
 VAR_2->context = VAR_5;

 return 0;
}
