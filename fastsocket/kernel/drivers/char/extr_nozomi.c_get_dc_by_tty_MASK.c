
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {size_t index; } ;
struct nozomi {int dummy; } ;


 size_t VAR_0 ;
 struct nozomi** VAR_1 ;

__attribute__((used)) static inline struct nozomi *FUNC_0(const struct tty_struct *VAR_2)
{
 return VAR_2 ? VAR_1[VAR_2->index / VAR_0] : ((void*)0);
}
