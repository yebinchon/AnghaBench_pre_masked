
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct display {int num_text; int * text_ptr; int ip; int write_pp; } ;


 int FUNC_0 (int ,int ,int *,int ) ;

__attribute__((used)) static void
FUNC_1(struct display *VAR_0)
{

   if (VAR_0->text_ptr != ((void*)0))
      FUNC_0(VAR_0->write_pp, VAR_0->ip, VAR_0->text_ptr, VAR_0->num_text);
}
