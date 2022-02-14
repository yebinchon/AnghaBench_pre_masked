
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int rnum; } ;
typedef TYPE_1__ ccv_array_t ;


 int FUNC_0 (TYPE_1__* const,int) ;

__attribute__((used)) static int FUNC_1(ccv_array_t* const VAR_0, const size_t VAR_1)
{
 int VAR_2 = VAR_0->rnum;
 int VAR_3 = (VAR_1 + 15) / 16;
 FUNC_0(VAR_0, VAR_2 + VAR_3);
 return (VAR_2 << 1) + 1;
}
