
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uivector ;
typedef int ucvector ;
struct TYPE_3__ {int lazymatching; int nicematch; int minmatch; int windowsize; scalar_t__ use_lz77; } ;
typedef TYPE_1__ LodePNGCompressSettings ;
typedef int HuffmanTree ;
typedef int Hash ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned char const) ;
 int FUNC_2 (int *,unsigned char const) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (size_t*,int *,int) ;
 int FUNC_5 (size_t*,int *,int ,int ) ;
 unsigned int FUNC_6 (int *,int *,unsigned char const*,size_t,size_t,int ,int ,int ,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (size_t*,int *,int *,int *,int *) ;

__attribute__((used)) static unsigned FUNC_12(ucvector* VAR_0, size_t* VAR_1, Hash* VAR_2,
                             const unsigned char* VAR_3,
                             size_t VAR_4, size_t VAR_5,
                             const LodePNGCompressSettings* VAR_6, int VAR_7)
{
  HuffmanTree VAR_8;
  HuffmanTree VAR_9;

  unsigned VAR_10 = VAR_7;
  unsigned VAR_11 = 0;
  size_t VAR_12;

  FUNC_3(&VAR_8);
  FUNC_3(&VAR_9);

  FUNC_8(&VAR_8);
  FUNC_7(&VAR_9);

  FUNC_4(VAR_1, VAR_0, VAR_10);
  FUNC_4(VAR_1, VAR_0, 1);
  FUNC_4(VAR_1, VAR_0, 0);

  if(VAR_6->use_lz77)
  {
    uivector VAR_13;
    FUNC_10(&VAR_13);
    VAR_11 = FUNC_6(&VAR_13, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6->windowsize,
                       VAR_6->minmatch, VAR_6->nicematch, VAR_6->lazymatching);
    if(!VAR_11) FUNC_11(VAR_1, VAR_0, &VAR_13, &VAR_8, &VAR_9);
    FUNC_9(&VAR_13);
  }
  else
  {
    for(VAR_12 = VAR_4; VAR_12 < VAR_5; VAR_12++)
    {
      FUNC_5(VAR_1, VAR_0, FUNC_1(&VAR_8, VAR_3[VAR_12]), FUNC_2(&VAR_8, VAR_3[VAR_12]));
    }
  }

  if(!VAR_11) FUNC_5(VAR_1, VAR_0, FUNC_1(&VAR_8, 256), FUNC_2(&VAR_8, 256));


  FUNC_0(&VAR_8);
  FUNC_0(&VAR_9);

  return VAR_11;
}
