
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sep_lli_entry_t {int dummy; } ;
struct sep_device {void* shared_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(struct sep_device *VAR_3,
     unsigned long **VAR_4)
{
 int VAR_5 = 0;

 unsigned long *VAR_6;


 void *VAR_7;
 unsigned long *VAR_8;

 unsigned long VAR_9;


 VAR_7 = VAR_3->shared_addr + VAR_0;


 VAR_8 = VAR_7 + VAR_1;


 VAR_9 = VAR_2 * (sizeof(struct sep_lli_entry_t) / sizeof(long)) + 2;


 VAR_6 = VAR_7;


 while (((*VAR_6 & 0x7FFFFFFF) != 0) && VAR_6 < VAR_8)
  VAR_6 += VAR_9;


 if (VAR_6 >= VAR_8)
  VAR_5 = -1;
 else
  *VAR_4 = VAR_6;

 return VAR_5;
}
