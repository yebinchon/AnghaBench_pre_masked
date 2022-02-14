
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty {int dummy; } ;
struct knote {scalar_t__ kn_hook; } ;



__attribute__((used)) static struct tty *
FUNC_0(struct knote *VAR_0)
{
 return (struct tty *)VAR_0->kn_hook;
}
