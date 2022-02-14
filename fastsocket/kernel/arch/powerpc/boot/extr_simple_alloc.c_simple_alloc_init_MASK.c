
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct alloc_info {int dummy; } ;
struct TYPE_2__ {int realloc; int free; int malloc; } ;


 unsigned long FUNC_0 (unsigned long,int) ;
 int VAR_0 ;
 struct alloc_info* VAR_1 ;
 int FUNC_1 (struct alloc_info*,int ,unsigned long) ;
 unsigned long VAR_2 ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned long VAR_7 ;
 int VAR_8 ;

void *FUNC_2(char *VAR_9, unsigned long VAR_10,
   unsigned long VAR_11, unsigned long VAR_12)
{
 unsigned long VAR_13, VAR_14;

 VAR_10 = FUNC_0(VAR_10, VAR_11);
 VAR_0 = VAR_11;
 VAR_8 = VAR_12;

 VAR_14 = VAR_8 * sizeof(struct alloc_info);

 VAR_1 = (struct alloc_info *)FUNC_0((unsigned long)VAR_9, 8);
 FUNC_1(VAR_1, 0, VAR_14);

 VAR_13 = FUNC_0((unsigned long)VAR_1 + VAR_14, VAR_0);

 VAR_2 = VAR_13;
 VAR_7 = VAR_10;

 VAR_3.malloc = VAR_5;
 VAR_3.free = VAR_4;
 VAR_3.realloc = VAR_6;

 return (void *)(VAR_13 + VAR_10);
}
