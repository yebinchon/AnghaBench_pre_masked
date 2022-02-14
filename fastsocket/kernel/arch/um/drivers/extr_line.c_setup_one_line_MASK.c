
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct line {int init_pri; int valid; char* init_str; int count_lock; int * tty; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,char*) ;

__attribute__((used)) static int FUNC_3(struct line *VAR_1, int VAR_2, char *VAR_3, int VAR_4,
     char **VAR_5)
{
 struct line *VAR_6 = &VAR_1[VAR_2];
 int VAR_7 = -VAR_0;

 FUNC_0(&VAR_6->count_lock);

 if (VAR_6->tty != ((void*)0)) {
  *VAR_5 = "Device is already open";
  goto out;
 }

 if (VAR_6->init_pri <= VAR_4) {
  VAR_6->init_pri = VAR_4;
  if (!FUNC_2(VAR_3, "none"))
   VAR_6->valid = 0;
  else {
   VAR_6->init_str = VAR_3;
   VAR_6->valid = 1;
  }
 }
 VAR_7 = 0;
out:
 FUNC_1(&VAR_6->count_lock);
 return VAR_7;
}
