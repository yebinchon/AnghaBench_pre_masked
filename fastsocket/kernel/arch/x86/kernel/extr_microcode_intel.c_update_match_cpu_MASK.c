
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpu_signature {int pf; int sig; } ;


 int FUNC_0 (int,int ,int,int ) ;

__attribute__((used)) static inline int FUNC_1(struct cpu_signature *VAR_0, int VAR_1, int VAR_2)
{
 return (!FUNC_0(VAR_1, VAR_0->sig, VAR_2, VAR_0->pf)) ? 0 : 1;
}
