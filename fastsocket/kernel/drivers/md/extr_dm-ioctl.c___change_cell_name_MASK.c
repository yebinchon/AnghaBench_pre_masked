
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hash_cell {char* name; int name_list; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static char *FUNC_5(struct hash_cell *VAR_2, char *VAR_3)
{
 char *VAR_4;




 FUNC_2(&VAR_2->name_list);
 VAR_4 = VAR_2->name;

 FUNC_3(&VAR_1);
 VAR_2->name = VAR_3;
 FUNC_4(&VAR_1);

 FUNC_1(&VAR_2->name_list, VAR_0 + FUNC_0(VAR_3));

 return VAR_4;
}
