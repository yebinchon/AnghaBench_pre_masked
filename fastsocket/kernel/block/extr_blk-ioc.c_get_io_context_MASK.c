
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct io_context {int refcount; } ;
typedef int gfp_t ;


 int FUNC_0 (int *) ;
 struct io_context* FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (int) ;

struct io_context *FUNC_3(gfp_t VAR_0, int VAR_1)
{
 struct io_context *VAR_2 = ((void*)0);





 do {
  VAR_2 = FUNC_1(VAR_0, VAR_1);
  if (FUNC_2(!VAR_2))
   break;
 } while (!FUNC_0(&VAR_2->refcount));

 return VAR_2;
}
