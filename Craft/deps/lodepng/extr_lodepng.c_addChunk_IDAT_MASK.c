
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int size; int data; } ;
typedef TYPE_1__ ucvector ;
typedef int LodePNGCompressSettings ;


 unsigned int FUNC_0 (TYPE_1__*,char*,int ,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 unsigned int FUNC_3 (int *,int *,unsigned char const*,size_t,int *) ;

__attribute__((used)) static unsigned FUNC_4(ucvector* VAR_0, const unsigned char* VAR_1, size_t VAR_2,
                              LodePNGCompressSettings* VAR_3)
{
  ucvector VAR_4;
  unsigned VAR_5 = 0;


  FUNC_2(&VAR_4);
  VAR_5 = FUNC_3(&VAR_4.data, &VAR_4.size, VAR_1, VAR_2, VAR_3);
  if(!VAR_5) VAR_5 = FUNC_0(VAR_0, "IDAT", VAR_4.data, VAR_4.size);
  FUNC_1(&VAR_4);

  return VAR_5;
}
