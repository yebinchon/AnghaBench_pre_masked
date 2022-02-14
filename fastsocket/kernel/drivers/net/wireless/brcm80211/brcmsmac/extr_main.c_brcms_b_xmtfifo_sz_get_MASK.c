
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint ;
struct brcms_hardware {size_t* xmtfifo_sz; } ;


 int VAR_0 ;
 size_t VAR_1 ;

int FUNC_0(struct brcms_hardware *VAR_2, uint VAR_3,
      uint *VAR_4)
{
 if (VAR_3 >= VAR_1)
  return -VAR_0;

 *VAR_4 = VAR_2->xmtfifo_sz[VAR_3];

 return 0;
}
