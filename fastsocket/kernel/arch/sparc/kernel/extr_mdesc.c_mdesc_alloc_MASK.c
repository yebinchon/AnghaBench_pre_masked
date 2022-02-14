
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mdesc_mem_ops {struct mdesc_handle* (* alloc ) (unsigned int) ;} ;
struct mdesc_handle {struct mdesc_mem_ops* mops; } ;


 struct mdesc_handle* FUNC_0 (unsigned int) ;

__attribute__((used)) static struct mdesc_handle *FUNC_1(unsigned int VAR_0,
     struct mdesc_mem_ops *VAR_1)
{
 struct mdesc_handle *VAR_2 = VAR_1->alloc(VAR_0);

 if (VAR_2)
  VAR_2->mops = VAR_1;

 return VAR_2;
}
