
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string {unsigned long size; } ;
struct list_head {int dummy; } ;


 int FUNC_0 (struct list_head*,struct string*) ;

__attribute__((used)) static inline void
FUNC_1(struct list_head *VAR_0, void *VAR_1, unsigned long VAR_2)
{
 struct string *VAR_3;

 VAR_3 = (struct string *) VAR_1;
 VAR_3->size = VAR_2 - sizeof(struct string);
 FUNC_0(VAR_0, VAR_3);
}
