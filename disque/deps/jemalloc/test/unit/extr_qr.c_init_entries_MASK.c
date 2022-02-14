
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char id; } ;
typedef TYPE_1__ ring_t ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ) ;

__attribute__((used)) static void
FUNC_1(ring_t *VAR_2)
{
 unsigned VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  FUNC_0(&VAR_2[VAR_3], VAR_1);
  VAR_2[VAR_3].id = 'a' + VAR_3;
 }
}
