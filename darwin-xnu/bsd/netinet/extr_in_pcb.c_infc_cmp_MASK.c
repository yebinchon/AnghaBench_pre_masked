
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inpcb {int inp_flowhash; } ;


 int FUNC_0 (int *,int *,int) ;

__attribute__((used)) static inline int
FUNC_1(const struct inpcb *VAR_0, const struct inpcb *VAR_1)
{
 return (FUNC_0(&(VAR_0->inp_flowhash), &(VAR_1->inp_flowhash),
     sizeof(VAR_0->inp_flowhash)));
}
