
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {size_t size; } ;


 int FUNC_0 (unsigned int,int ) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static size_t FUNC_1(u32 *VAR_1, size_t VAR_2)
{
 unsigned VAR_3;

 if (VAR_2 > VAR_0.size)
  VAR_2 = VAR_0.size;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
  VAR_1[VAR_3] = FUNC_0(VAR_3 * sizeof(u32), ~0);

 return VAR_2;
}
