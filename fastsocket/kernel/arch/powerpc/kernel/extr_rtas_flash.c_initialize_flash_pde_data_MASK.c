
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc_dir_entry {int * data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_0 (size_t,int ) ;
 int FUNC_1 (struct proc_dir_entry*) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static int FUNC_3(const char *VAR_5,
         size_t VAR_6,
         struct proc_dir_entry *VAR_7)
{
 int *VAR_8;
 int VAR_9;

 VAR_7->data = FUNC_0(VAR_6, VAR_3);
 if (VAR_7->data == ((void*)0)) {
  FUNC_1(VAR_7);
  return -VAR_0;
 }





 VAR_8 = (int *) VAR_7->data;
 VAR_9 = FUNC_2(VAR_5);
 if (VAR_9 == VAR_4)
  *VAR_8 = VAR_1;
 else
  *VAR_8 = VAR_2;

 return 0;
}
