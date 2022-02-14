
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bcom_task {scalar_t__ index; scalar_t__ outdex; } ;



__attribute__((used)) static inline int
FUNC_0(struct bcom_task *VAR_0)
{
 return VAR_0->index == VAR_0->outdex;
}
