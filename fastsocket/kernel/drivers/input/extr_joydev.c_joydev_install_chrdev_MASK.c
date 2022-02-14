
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct joydev {size_t minor; } ;


 struct joydev** VAR_0 ;

__attribute__((used)) static int FUNC_0(struct joydev *VAR_1)
{
 VAR_0[VAR_1->minor] = VAR_1;
 return 0;
}
