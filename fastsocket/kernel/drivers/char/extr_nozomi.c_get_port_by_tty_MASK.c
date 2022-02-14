
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {size_t index; } ;
struct port {int dummy; } ;
struct nozomi {struct port* port; } ;


 size_t VAR_0 ;
 struct nozomi* FUNC_0 (struct tty_struct const*) ;

__attribute__((used)) static inline struct port *FUNC_1(const struct tty_struct *VAR_1)
{
 struct nozomi *VAR_2 = FUNC_0(VAR_1);
 return VAR_2 ? &VAR_2->port[VAR_1->index % VAR_0] : ((void*)0);
}
