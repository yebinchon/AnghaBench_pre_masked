
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_size; } ;
struct carlfw_file {int name; int len; int * data; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char const*,char const*) ;
 int FUNC_4 (int *,int ,int,int *) ;
 int FUNC_5 (int ,struct stat*) ;
 int * FUNC_6 (int ) ;
 int FUNC_7 (char const*) ;

__attribute__((used)) static int FUNC_8(struct carlfw_file *VAR_2, const char *VAR_3, const char *VAR_4)
{
 struct stat VAR_5;
 FILE *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_3(VAR_3, VAR_4);
 if (VAR_6 == ((void*)0))
  return VAR_1 ? -VAR_1 : -1;

 VAR_7 = FUNC_5(FUNC_2(VAR_6), &VAR_5);
 if (VAR_7)
  return VAR_1 ? -VAR_1 : -1;

 VAR_2->len = VAR_5.st_size;
 VAR_2->data = FUNC_6(VAR_2->len);
 if (VAR_2->data == ((void*)0))
  return -VAR_0;

 VAR_7 = FUNC_4(VAR_2->data, VAR_2->len, 1, VAR_6);
 if (VAR_7 != 1)
  return -FUNC_1(VAR_6);

 VAR_2->name = FUNC_7(VAR_3);
 FUNC_0(VAR_6);

 if (!VAR_2->name)
  return -VAR_0;

 return 0;
}
