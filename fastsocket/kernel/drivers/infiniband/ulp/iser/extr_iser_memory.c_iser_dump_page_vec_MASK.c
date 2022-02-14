
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iser_page_vec {int length; unsigned long data_size; scalar_t__* pages; } ;


 int FUNC_0 (char*,int,unsigned long) ;

__attribute__((used)) static void FUNC_1(struct iser_page_vec *VAR_0)
{
 int VAR_1;

 FUNC_0("page vec length %d data size %d\n",
   VAR_0->length, VAR_0->data_size);
 for (VAR_1 = 0; VAR_1 < VAR_0->length; VAR_1++)
  FUNC_0("%d %lx\n",VAR_1,(unsigned long)VAR_0->pages[VAR_1]);
}
