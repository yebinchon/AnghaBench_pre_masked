
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int size; int data; } ;
typedef TYPE_1__ ucvector ;
typedef scalar_t__ LodePNGColorType ;


 unsigned int FUNC_0 (TYPE_1__*,char*,int ,int ) ;
 int FUNC_1 (TYPE_1__*,unsigned int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,unsigned int) ;

__attribute__((used)) static unsigned FUNC_5(ucvector* VAR_0, unsigned VAR_1, unsigned VAR_2,
                              LodePNGColorType VAR_3, unsigned VAR_4, unsigned VAR_5)
{
  unsigned VAR_6 = 0;
  ucvector VAR_7;
  FUNC_3(&VAR_7);

  FUNC_1(&VAR_7, VAR_1);
  FUNC_1(&VAR_7, VAR_2);
  FUNC_4(&VAR_7, (unsigned char)VAR_4);
  FUNC_4(&VAR_7, (unsigned char)VAR_3);
  FUNC_4(&VAR_7, 0);
  FUNC_4(&VAR_7, 0);
  FUNC_4(&VAR_7, VAR_5);

  VAR_6 = FUNC_0(VAR_0, "IHDR", VAR_7.data, VAR_7.size);
  FUNC_2(&VAR_7);

  return VAR_6;
}
