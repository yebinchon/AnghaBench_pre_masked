
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {int size; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ,int ) ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static int FUNC_1(u16 VAR_2, u32 VAR_3)
{

 VAR_2 /= sizeof(u32);

 if (VAR_2 >= VAR_1.size)
  return -VAR_0;


 VAR_2 *= sizeof(u32);

 FUNC_0(VAR_2, ~0, VAR_3);
 return 0;
}
