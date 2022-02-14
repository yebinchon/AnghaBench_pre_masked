
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct io_ctl {int * orig; int * cur; int page; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct io_ctl *VAR_0)
{
 if (VAR_0->cur) {
  FUNC_0(VAR_0->page);
  VAR_0->cur = ((void*)0);
  VAR_0->orig = ((void*)0);
 }
}
