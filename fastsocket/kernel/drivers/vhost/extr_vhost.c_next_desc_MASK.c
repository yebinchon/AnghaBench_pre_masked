
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vring_desc {int flags; unsigned int next; } ;


 int VAR_0 ;
 int FUNC_0 () ;

__attribute__((used)) static unsigned FUNC_1(struct vring_desc *VAR_1)
{
 unsigned int VAR_2;


 if (!(VAR_1->flags & VAR_0))
  return -1U;


 VAR_2 = VAR_1->next;



 FUNC_0();

 return VAR_2;
}
