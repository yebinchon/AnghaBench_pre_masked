
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slabinfo {scalar_t__ objects; scalar_t__ slabs; } ;


 int FUNC_0 (struct slabinfo*,char*,int) ;

__attribute__((used)) static int FUNC_1(struct slabinfo *VAR_0)
{
 if (VAR_0->objects > 0)
  return 0;





 if (VAR_0->slabs != 0)
  FUNC_0(VAR_0, "shrink", 1);

 return 1;
}
