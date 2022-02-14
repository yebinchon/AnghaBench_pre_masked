
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct a2232status {int dummy; } ;
struct a2232memory {struct a2232status volatile* Status; } ;


 struct a2232memory* FUNC_0 (unsigned int) ;

__attribute__((used)) static inline volatile struct a2232status *FUNC_1(unsigned int VAR_0,
           unsigned int VAR_1)
{
 volatile struct a2232memory *VAR_2 = FUNC_0(VAR_0);
 return &(VAR_2->Status[VAR_1]);
}
