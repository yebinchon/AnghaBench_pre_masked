
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_3__ {int (* Skip ) (void*,size_t) ;int (* Look ) (void*,void const**,size_t*) ;} ;
typedef int SRes ;
typedef TYPE_1__ ILookInStream ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,void*,size_t) ;
 int FUNC_2 (void*,void const**,size_t*) ;
 int FUNC_3 (void*,size_t) ;

__attribute__((used)) static SRes FUNC_4(uint64_t VAR_2, ILookInStream *VAR_3, uint8_t *VAR_4)
{
  while (VAR_2 > 0)
  {
    void *VAR_5;
    size_t VAR_6 = (1 << 18);
    if (VAR_6 > VAR_2)
      VAR_6 = (size_t)VAR_2;
    FUNC_0(VAR_3->Look((void *)VAR_3, (const void **)&VAR_5, &VAR_6));
    if (VAR_6 == 0)
      return VAR_0;
    FUNC_1(VAR_4, VAR_5, VAR_6);
    VAR_4 += VAR_6;
    VAR_2 -= VAR_6;
    FUNC_0(VAR_3->Skip((void *)VAR_3, VAR_6));
  }
  return VAR_1;
}
