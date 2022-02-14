
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int size; int data; } ;
typedef TYPE_1__ ucvector ;
struct TYPE_11__ {int phys_unit; int phys_y; int phys_x; } ;
typedef TYPE_2__ LodePNGInfo ;


 unsigned int FUNC_0 (TYPE_1__*,char*,int ,int ) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int ) ;

__attribute__((used)) static unsigned FUNC_5(ucvector* VAR_0, const LodePNGInfo* VAR_1)
{
  unsigned VAR_2 = 0;
  ucvector VAR_3;
  FUNC_3(&VAR_3);

  FUNC_1(&VAR_3, VAR_1->phys_x);
  FUNC_1(&VAR_3, VAR_1->phys_y);
  FUNC_4(&VAR_3, VAR_1->phys_unit);

  VAR_2 = FUNC_0(VAR_0, "pHYs", VAR_3.data, VAR_3.size);
  FUNC_2(&VAR_3);

  return VAR_2;
}
