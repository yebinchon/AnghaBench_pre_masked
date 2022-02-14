
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int kcs_elem_offset; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_3 ;

uint32_t
FUNC_1(void)
{
 uint32_t VAR_4 = VAR_0 + VAR_3;
 uint32_t VAR_5 = VAR_1[VAR_2 - 1].kcs_elem_offset +
                      FUNC_0(&VAR_1[VAR_2 - 1]);
 uint32_t VAR_6 = 1024;
 VAR_6 += 1024;
 VAR_6 += (VAR_4 * VAR_5);

 return VAR_6;
}
