
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ interlace_method; int color; } ;
typedef TYPE_1__ LodePNGInfo ;


 int FUNC_0 (unsigned char*,unsigned char*,unsigned int,unsigned int,unsigned int) ;
 int FUNC_1 (unsigned int*,unsigned int*,size_t*,size_t*,size_t*,unsigned int,unsigned int,unsigned int) ;
 int FUNC_2 (int ) ;
 unsigned int FUNC_3 (int *) ;
 int FUNC_4 (unsigned char*,unsigned char*,unsigned int,unsigned int,unsigned int) ;
 int FUNC_5 (unsigned char*,unsigned char*,unsigned int,unsigned int,unsigned int) ;

__attribute__((used)) static unsigned FUNC_6(unsigned char* VAR_0, unsigned char* VAR_1,
                                     unsigned VAR_2, unsigned VAR_3, const LodePNGInfo* VAR_4)
{







  unsigned VAR_5 = FUNC_3(&VAR_4->color);
  if(VAR_5 == 0) return 31;

  if(VAR_4->interlace_method == 0)
  {
    if(VAR_5 < 8 && VAR_2 * VAR_5 != ((VAR_2 * VAR_5 + 7) / 8) * 8)
    {
      FUNC_2(FUNC_5(VAR_1, VAR_1, VAR_2, VAR_3, VAR_5));
      FUNC_4(VAR_0, VAR_1, VAR_2 * VAR_5, ((VAR_2 * VAR_5 + 7) / 8) * 8, VAR_3);
    }

    else FUNC_2(FUNC_5(VAR_0, VAR_1, VAR_2, VAR_3, VAR_5));
  }
  else
  {
    unsigned VAR_6[7], VAR_7[7]; size_t VAR_8[8], VAR_9[8], VAR_10[8];
    unsigned VAR_11;

    FUNC_1(VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_2, VAR_3, VAR_5);

    for(VAR_11 = 0; VAR_11 < 7; VAR_11++)
    {
      FUNC_2(FUNC_5(&VAR_1[VAR_9[VAR_11]], &VAR_1[VAR_8[VAR_11]], VAR_6[VAR_11], VAR_7[VAR_11], VAR_5));


      if(VAR_5 < 8)
      {


        FUNC_4(&VAR_1[VAR_10[VAR_11]], &VAR_1[VAR_9[VAR_11]], VAR_6[VAR_11] * VAR_5,
                          ((VAR_6[VAR_11] * VAR_5 + 7) / 8) * 8, VAR_7[VAR_11]);
      }
    }

    FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_5);
  }

  return 0;
}
