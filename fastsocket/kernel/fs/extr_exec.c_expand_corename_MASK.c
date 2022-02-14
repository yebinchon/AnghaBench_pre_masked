
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct core_name {char* corename; int size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*,int,int ) ;

__attribute__((used)) static int FUNC_3(struct core_name *VAR_4)
{
 char *VAR_5 = VAR_4->corename;

 VAR_4->size = VAR_0 * FUNC_0(&VAR_3);
 VAR_4->corename = FUNC_2(VAR_5, VAR_4->size, VAR_2);

 if (!VAR_4->corename) {
  FUNC_1(VAR_5);
  return -VAR_1;
 }

 return 0;
}
