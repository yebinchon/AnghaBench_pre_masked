
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dentry; } ;
struct file {unsigned long long f_pos; TYPE_1__ f_path; } ;
typedef int (* filldir_t ) (void*,char*,int,unsigned long long,unsigned long long,int ) ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*) ;
 char* FUNC_1 (int ,int ) ;
 int FUNC_2 (char*) ;
 void* FUNC_3 (char*,int*) ;
 char* FUNC_4 (void*,unsigned long long*,unsigned long long*,int*) ;
 int FUNC_5 (void*,char*,int,unsigned long long,unsigned long long,int ) ;

int FUNC_6(struct file *VAR_2, void *VAR_3, filldir_t VAR_4)
{
 void *VAR_5;
 char *VAR_6;
 unsigned long long VAR_7, VAR_8;
 int VAR_9, VAR_10;

 VAR_6 = FUNC_1(VAR_2->f_path.dentry, 0);
 if (VAR_6 == ((void*)0))
  return -VAR_1;
 VAR_5 = FUNC_3(VAR_6, &VAR_9);
 FUNC_2(VAR_6);
 if (VAR_5 == ((void*)0))
  return -VAR_9;
 VAR_7 = VAR_2->f_pos;
 while ((VAR_6 = FUNC_4(VAR_5, &VAR_7, &VAR_8, &VAR_10)) != ((void*)0)) {
  VAR_9 = (*VAR_4)(VAR_3, VAR_6, VAR_10, VAR_2->f_pos,
       VAR_8, VAR_0);
  if (VAR_9) break;
  VAR_2->f_pos = VAR_7;
 }
 FUNC_0(VAR_5);
 return 0;
}
