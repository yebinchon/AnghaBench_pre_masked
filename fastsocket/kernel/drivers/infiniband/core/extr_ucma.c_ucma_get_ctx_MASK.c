
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucma_file {int dummy; } ;
struct ucma_context {int ref; } ;


 int FUNC_0 (struct ucma_context*) ;
 struct ucma_context* FUNC_1 (int,struct ucma_file*) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static struct ucma_context *FUNC_5(struct ucma_file *VAR_1, int VAR_2)
{
 struct ucma_context *VAR_3;

 FUNC_3(&VAR_0);
 VAR_3 = FUNC_1(VAR_2, VAR_1);
 if (!FUNC_0(VAR_3))
  FUNC_2(&VAR_3->ref);
 FUNC_4(&VAR_0);
 return VAR_3;
}
