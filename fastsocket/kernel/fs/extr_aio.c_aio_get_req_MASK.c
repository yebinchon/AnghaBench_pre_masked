
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kioctx {int dummy; } ;
struct kiocb {int dummy; } ;


 struct kiocb* FUNC_0 (struct kioctx*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static inline struct kiocb *FUNC_3(struct kioctx *VAR_0)
{
 struct kiocb *VAR_1;




 VAR_1 = FUNC_0(VAR_0);
 if (FUNC_2(((void*)0) == VAR_1)) {
  FUNC_1(((void*)0));
  VAR_1 = FUNC_0(VAR_0);
 }
 return VAR_1;
}
