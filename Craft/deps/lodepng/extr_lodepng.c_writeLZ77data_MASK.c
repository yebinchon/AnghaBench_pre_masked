
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t size; unsigned int* data; } ;
typedef TYPE_1__ uivector ;
typedef int ucvector ;
typedef int HuffmanTree ;


 unsigned int* VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int const*,unsigned int) ;
 int FUNC_1 (int const*,unsigned int) ;
 unsigned int* VAR_2 ;
 int FUNC_2 (size_t*,int *,unsigned int,unsigned int) ;
 int FUNC_3 (size_t*,int *,int ,int ) ;

__attribute__((used)) static void FUNC_4(size_t* VAR_3, ucvector* VAR_4, const uivector* VAR_5,
                          const HuffmanTree* VAR_6, const HuffmanTree* VAR_7)
{
  size_t VAR_8 = 0;
  for(VAR_8 = 0; VAR_8 < VAR_5->size; VAR_8++)
  {
    unsigned VAR_9 = VAR_5->data[VAR_8];
    FUNC_3(VAR_3, VAR_4, FUNC_0(VAR_6, VAR_9), FUNC_1(VAR_6, VAR_9));
    if(VAR_9 > 256)
    {
      unsigned VAR_10 = VAR_9 - VAR_1;
      unsigned VAR_11 = VAR_2[VAR_10];
      unsigned VAR_12 = VAR_5->data[++VAR_8];

      unsigned VAR_13 = VAR_5->data[++VAR_8];

      unsigned VAR_14 = VAR_13;
      unsigned VAR_15 = VAR_0[VAR_14];
      unsigned VAR_16 = VAR_5->data[++VAR_8];

      FUNC_2(VAR_3, VAR_4, VAR_12, VAR_11);
      FUNC_3(VAR_3, VAR_4, FUNC_0(VAR_7, VAR_13),
                       FUNC_1(VAR_7, VAR_13));
      FUNC_2(VAR_3, VAR_4, VAR_16, VAR_15);
    }
  }
}
