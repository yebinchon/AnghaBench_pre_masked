
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vring_desc {int flags; unsigned int next; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*,unsigned int) ;
 int FUNC_1 () ;

__attribute__((used)) static unsigned FUNC_2(struct vring_desc *VAR_1,
     unsigned int VAR_2, unsigned int VAR_3)
{
 unsigned int VAR_4;


 if (!(VAR_1[VAR_2].flags & VAR_0))
  return VAR_3;


 VAR_4 = VAR_1[VAR_2].next;

 FUNC_1();

 if (VAR_4 >= VAR_3)
  FUNC_0(1, "Desc next is %u", VAR_4);

 return VAR_4;
}
