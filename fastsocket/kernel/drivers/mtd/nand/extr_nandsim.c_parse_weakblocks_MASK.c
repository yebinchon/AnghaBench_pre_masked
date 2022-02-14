
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct weak_block {unsigned int erase_block_no; unsigned int max_erases; int list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 struct weak_block* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;
 unsigned int FUNC_3 (char*,char**,int ) ;
 int VAR_3 ;
 char* VAR_4 ;

__attribute__((used)) static int FUNC_4(void)
{
 char *VAR_5;
 int VAR_6;
 unsigned int VAR_7;
 unsigned int VAR_8;
 struct weak_block *VAR_9;

 if (!VAR_4)
  return 0;
 VAR_5 = VAR_4;
 do {
  VAR_6 = (*VAR_5 == '0' ? 1 : 0);
  VAR_7 = FUNC_3(VAR_5, &VAR_5, 0);
  if (!VAR_6 && !VAR_7) {
   FUNC_0("invalid weakblocks.\n");
   return -VAR_0;
  }
  VAR_8 = 3;
  if (*VAR_5 == ':') {
   VAR_5 += 1;
   VAR_8 = FUNC_3(VAR_5, &VAR_5, 0);
  }
  if (*VAR_5 == ',')
   VAR_5 += 1;
  VAR_9 = FUNC_1(sizeof(*VAR_9), VAR_2);
  if (!VAR_9) {
   FUNC_0("unable to allocate memory.\n");
   return -VAR_1;
  }
  VAR_9->erase_block_no = VAR_7;
  VAR_9->max_erases = VAR_8;
  FUNC_2(&VAR_9->list, &VAR_3);
 } while (*VAR_5);
 return 0;
}
