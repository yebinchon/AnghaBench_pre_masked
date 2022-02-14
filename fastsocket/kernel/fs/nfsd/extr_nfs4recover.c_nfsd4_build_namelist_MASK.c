
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct name_list {char* name; int list; } ;
struct list_head {int dummy; } ;
typedef int loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct name_list* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,struct list_head*) ;
 int FUNC_2 (char*,char const*,int) ;

__attribute__((used)) static int
FUNC_3(void *VAR_3, const char *VAR_4, int VAR_5,
  loff_t VAR_6, u64 VAR_7, unsigned int VAR_8)
{
 struct list_head *VAR_9 = VAR_3;
 struct name_list *VAR_10;

 if (VAR_5 != VAR_2 - 1)
  return 0;
 VAR_10 = FUNC_0(sizeof(struct name_list), VAR_1);
 if (VAR_10 == ((void*)0))
  return -VAR_0;
 FUNC_2(VAR_10->name, VAR_4, VAR_2 - 1);
 VAR_10->name[VAR_2 - 1] = '\0';
 FUNC_1(&VAR_10->list, VAR_9);
 return 0;
}
