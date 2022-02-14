
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct count {scalar_t__ y; int x; } ;



__attribute__((used)) static int FUNC_0(struct count *VAR_0, struct count *VAR_1) {
 if (VAR_0->y == VAR_1->y)
  return VAR_0->x - VAR_1->x;
 return VAR_0->y - VAR_1->y;
}
