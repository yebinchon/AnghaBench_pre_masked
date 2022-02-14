
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct io_ctl {scalar_t__ cur; scalar_t__ orig; scalar_t__ index; scalar_t__ num_pages; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct io_ctl*,int ) ;
 int FUNC_1 (struct io_ctl*,scalar_t__) ;
 int FUNC_2 (scalar_t__,void*,int ) ;

__attribute__((used)) static int FUNC_3(struct io_ctl *VAR_2, void *VAR_3)
{
 if (!VAR_2->cur)
  return -VAR_0;





 if (VAR_2->cur != VAR_2->orig) {
  FUNC_1(VAR_2, VAR_2->index - 1);
  if (VAR_2->index >= VAR_2->num_pages)
   return -VAR_0;
  FUNC_0(VAR_2, 0);
 }

 FUNC_2(VAR_2->cur, VAR_3, VAR_1);
 FUNC_1(VAR_2, VAR_2->index - 1);
 if (VAR_2->index < VAR_2->num_pages)
  FUNC_0(VAR_2, 0);
 return 0;
}
