
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct io_context {scalar_t__ aic; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 () ;
 struct io_context* FUNC_1 (int ,int) ;
 int FUNC_2 (struct io_context*) ;

__attribute__((used)) static struct io_context *FUNC_3(int VAR_1)
{
 struct io_context *VAR_2 = FUNC_1(VAR_0, VAR_1);
 if (VAR_2 && !VAR_2->aic) {
  VAR_2->aic = FUNC_0();
  if (!VAR_2->aic) {
   FUNC_2(VAR_2);
   VAR_2 = ((void*)0);
  }
 }
 return VAR_2;
}
