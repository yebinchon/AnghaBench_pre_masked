
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int __u8 ;
struct TYPE_3__ {int* c; } ;
typedef TYPE_1__ MetricomAddress ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(MetricomAddress * VAR_0, __u8 * VAR_1)
{
 if (!FUNC_0(VAR_1))
  return (1);
 VAR_0->c[0] = 0;
 VAR_0->c[1] = 0;
 VAR_0->c[2] = FUNC_1(VAR_1[0]) << 4 | FUNC_1(VAR_1[1]);
 VAR_0->c[3] = FUNC_1(VAR_1[2]) << 4 | FUNC_1(VAR_1[3]);
 VAR_0->c[4] = FUNC_1(VAR_1[5]) << 4 | FUNC_1(VAR_1[6]);
 VAR_0->c[5] = FUNC_1(VAR_1[7]) << 4 | FUNC_1(VAR_1[8]);
 return (0);
}
