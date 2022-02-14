
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int substring_t ;
struct pohmelfs_sb {int idx; int trans_retries; int crypto_thread_num; int trans_max_pages; int crypto_fail_unsupported; void* mcache_timeout; void* wait_on_page_timeout; void* drop_scan_timeout; void* trans_scan_timeout; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int*) ;
 int FUNC_1 (char*,int ,int *) ;
 void* FUNC_2 (int) ;
 int VAR_2 ;
 char* FUNC_3 (char**,char*) ;

__attribute__((used)) static int FUNC_4(char *VAR_3, struct pohmelfs_sb *VAR_4, int VAR_5)
{
 char *VAR_6;
 substring_t VAR_7[VAR_1];
 int VAR_8, VAR_9;

 if (!VAR_3)
  return 0;

 while ((VAR_6 = FUNC_3(&VAR_3, ",")) != ((void*)0)) {
  int VAR_10;
  if (!*VAR_6)
   continue;

  VAR_10 = FUNC_1(VAR_6, VAR_2, VAR_7);

  VAR_9 = FUNC_0(&VAR_7[0], &VAR_8);
  if (VAR_9)
   return VAR_9;

  if (VAR_5 && VAR_10 <= 136)
   continue;

  switch (VAR_10) {
   case 133:
    VAR_4->idx = VAR_8;
    break;
   case 129:
    VAR_4->trans_scan_timeout = FUNC_2(VAR_8);
    break;
   case 134:
    VAR_4->drop_scan_timeout = FUNC_2(VAR_8);
    break;
   case 128:
    VAR_4->wait_on_page_timeout = FUNC_2(VAR_8);
    break;
   case 132:
    VAR_4->mcache_timeout = FUNC_2(VAR_8);
    break;
   case 130:
    VAR_4->trans_retries = VAR_8;
    break;
   case 135:
    VAR_4->crypto_thread_num = VAR_8;
    break;
   case 131:
    VAR_4->trans_max_pages = VAR_8;
    break;
   case 136:
    VAR_4->crypto_fail_unsupported = 1;
    break;
   default:
    return -VAR_0;
  }
 }

 return 0;
}
