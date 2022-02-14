
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned char* data; size_t size; } ;
typedef TYPE_1__ ucvector ;
typedef int LodePNGCompressSettings ;


 unsigned int FUNC_0 (TYPE_1__*,unsigned char const*,size_t,int const*) ;
 int FUNC_1 (TYPE_1__*,unsigned char*,size_t) ;

unsigned FUNC_2(unsigned char** VAR_0, size_t* VAR_1,
                         const unsigned char* VAR_2, size_t VAR_3,
                         const LodePNGCompressSettings* VAR_4)
{
  unsigned VAR_5;
  ucvector VAR_6;
  FUNC_1(&VAR_6, *VAR_0, *VAR_1);
  VAR_5 = FUNC_0(&VAR_6, VAR_2, VAR_3, VAR_4);
  *VAR_0 = VAR_6.data;
  *VAR_1 = VAR_6.size;
  return VAR_5;
}
