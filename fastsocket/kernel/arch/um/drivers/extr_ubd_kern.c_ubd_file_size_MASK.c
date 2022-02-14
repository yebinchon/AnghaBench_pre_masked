
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* file; } ;
struct ubd {char* file; TYPE_1__ cow; } ;
typedef int __u64 ;


 int FUNC_0 (char*,int *) ;

__attribute__((used)) static inline int FUNC_1(struct ubd *VAR_0, __u64 *VAR_1)
{
 char *VAR_2;

 VAR_2 = VAR_0->cow.file ? VAR_0->cow.file : VAR_0->file;
 return FUNC_0(VAR_2, VAR_1);
}
