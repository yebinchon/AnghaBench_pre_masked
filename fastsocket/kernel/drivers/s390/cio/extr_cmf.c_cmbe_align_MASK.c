
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmbe {int dummy; } ;



__attribute__((used)) static inline struct cmbe *FUNC_0(struct cmbe *VAR_0)
{
 unsigned long VAR_1;
 VAR_1 = ((unsigned long)VAR_0 + sizeof (struct cmbe) - sizeof(long)) &
     ~(sizeof (struct cmbe) - sizeof(long));
 return (struct cmbe*)VAR_1;
}
