
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct io_ctl {scalar_t__ cur; scalar_t__ orig; scalar_t__ index; scalar_t__ num_pages; } ;


 int FUNC_0 (struct io_ctl*,int) ;
 int FUNC_1 (struct io_ctl*,scalar_t__) ;
 int FUNC_2 (struct io_ctl*) ;

__attribute__((used)) static void FUNC_3(struct io_ctl *VAR_0)
{




 if (VAR_0->cur != VAR_0->orig)
  FUNC_1(VAR_0, VAR_0->index - 1);
 else
  FUNC_2(VAR_0);

 while (VAR_0->index < VAR_0->num_pages) {
  FUNC_0(VAR_0, 1);
  FUNC_1(VAR_0, VAR_0->index - 1);
 }
}
