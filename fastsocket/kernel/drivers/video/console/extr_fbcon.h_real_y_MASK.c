
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct display {int vrows; scalar_t__ yscroll; } ;



__attribute__((used)) static inline int FUNC_0(struct display *VAR_0, int VAR_1)
{
 int VAR_2 = VAR_0->vrows;

 VAR_1 += VAR_0->yscroll;
 return VAR_1 < VAR_2 ? VAR_1 : VAR_1 - VAR_2;
}
