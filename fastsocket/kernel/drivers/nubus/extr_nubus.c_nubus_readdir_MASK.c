
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nubus_dirent {int type; int data; int mask; int base; } ;
struct nubus_dir {int done; int mask; int ptr; } ;


 int FUNC_0 (int *,int,int ) ;

int FUNC_1(struct nubus_dir *VAR_0, struct nubus_dirent *VAR_1)
{
 u32 VAR_2;
 if (VAR_0->done)
  return -1;


 VAR_1->base = VAR_0->ptr;


 VAR_2 = FUNC_0(&VAR_0->ptr, 4, VAR_0->mask);


 if((VAR_2&0xff000000) == 0xff000000)
 {

  VAR_0->done = 1;
  return -1;
 }


 VAR_1->type = VAR_2 >> 24;

 VAR_1->data = VAR_2 & 0xffffff;
 VAR_1->mask = VAR_0->mask;
 return 0;
}
