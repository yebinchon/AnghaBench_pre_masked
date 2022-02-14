
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pstore {int current_committed; int current_area; scalar_t__ next_free; } ;
struct dm_exception_store {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct pstore*,int ) ;
 scalar_t__ FUNC_2 (struct pstore*,int ) ;
 int FUNC_3 (struct pstore*,int) ;
 struct pstore* FUNC_4 (struct dm_exception_store*) ;

__attribute__((used)) static int FUNC_5(struct dm_exception_store *VAR_1,
       int VAR_2)
{
 int VAR_3, VAR_4;
 struct pstore *VAR_5 = FUNC_4(VAR_1);

 FUNC_0(VAR_2 > VAR_5->current_committed);

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
  FUNC_3(VAR_5, VAR_5->current_committed - 1 - VAR_4);

 VAR_3 = FUNC_1(VAR_5, VAR_0);
 if (VAR_3 < 0)
  return VAR_3;

 VAR_5->current_committed -= VAR_2;
 VAR_5->next_free = FUNC_2(VAR_5, VAR_5->current_area) +
   VAR_5->current_committed + 1;

 return 0;
}
