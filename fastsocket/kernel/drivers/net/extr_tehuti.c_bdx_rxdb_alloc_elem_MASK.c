
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rxdb {size_t top; int* stack; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static inline int FUNC_1(struct rxdb *VAR_0)
{
 FUNC_0(VAR_0->top <= 0);
 return VAR_0->stack[--(VAR_0->top)];
}
