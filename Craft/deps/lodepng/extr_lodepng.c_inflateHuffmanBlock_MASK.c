
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t size; unsigned char* data; } ;
typedef TYPE_1__ ucvector ;
typedef int HuffmanTree ;


 unsigned int* VAR_0 ;
 unsigned int* VAR_1 ;
 int FUNC_0 (int) ;
 unsigned int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 unsigned int VAR_3 ;
 size_t* VAR_4 ;
 unsigned int* VAR_5 ;
 unsigned int FUNC_3 (int *,int *,unsigned char const*,size_t*,size_t) ;
 int FUNC_4 (int *,int *) ;
 unsigned int FUNC_5 (unsigned char const*,size_t*,int *,size_t) ;
 scalar_t__ FUNC_6 (size_t*,unsigned char const*,unsigned int) ;
 int FUNC_7 (TYPE_1__*,size_t) ;

__attribute__((used)) static unsigned FUNC_8(ucvector* VAR_6, const unsigned char* VAR_7, size_t* VAR_8,
                                    size_t* VAR_9, size_t VAR_10, unsigned VAR_11)
{
  unsigned VAR_12 = 0;
  HuffmanTree VAR_13;
  HuffmanTree VAR_14;
  size_t VAR_15 = VAR_10 * 8;

  FUNC_2(&VAR_13);
  FUNC_2(&VAR_14);

  if(VAR_11 == 1) FUNC_4(&VAR_13, &VAR_14);
  else if(VAR_11 == 2) VAR_12 = FUNC_3(&VAR_13, &VAR_14, VAR_7, VAR_8, VAR_10);

  while(!VAR_12)
  {

    unsigned VAR_16 = FUNC_5(VAR_7, VAR_8, &VAR_13, VAR_15);
    if(VAR_16 <= 255)
    {
      if((*VAR_9) >= VAR_6->size)
      {

        if(!FUNC_7(VAR_6, ((*VAR_9) + 1) * 2)) FUNC_0(83 );
      }
      VAR_6->data[(*VAR_9)] = (unsigned char)(VAR_16);
      (*VAR_9)++;
    }
    else if(VAR_16 >= VAR_2 && VAR_16 <= VAR_3)
    {
      unsigned VAR_17, VAR_18;
      unsigned VAR_19, VAR_20;
      size_t VAR_21, VAR_22, VAR_23, VAR_24;


      VAR_24 = VAR_4[VAR_16 - VAR_2];


      VAR_19 = VAR_5[VAR_16 - VAR_2];
      if(*VAR_8 >= VAR_15) FUNC_0(51);
      VAR_24 += FUNC_6(VAR_8, VAR_7, VAR_19);


      VAR_17 = FUNC_5(VAR_7, VAR_8, &VAR_14, VAR_15);
      if(VAR_17 > 29)
      {
        if(VAR_16 == (unsigned)(-1))
        {


          VAR_12 = (*VAR_8) > VAR_10 * 8 ? 10 : 11;
        }
        else VAR_12 = 18;
        break;
      }
      VAR_18 = VAR_0[VAR_17];


      VAR_20 = VAR_1[VAR_17];
      if(*VAR_8 >= VAR_15) FUNC_0(51);

      VAR_18 += FUNC_6(VAR_8, VAR_7, VAR_20);


      VAR_21 = (*VAR_9);
      if(VAR_18 > VAR_21) FUNC_0(52);
      VAR_23 = VAR_21 - VAR_18;
      if((*VAR_9) + VAR_24 >= VAR_6->size)
      {

        if(!FUNC_7(VAR_6, ((*VAR_9) + VAR_24) * 2)) FUNC_0(83 );
      }

      for(VAR_22 = 0; VAR_22 < VAR_24; VAR_22++)
      {
        VAR_6->data[(*VAR_9)] = VAR_6->data[VAR_23];
        (*VAR_9)++;
        VAR_23++;
        if(VAR_23 >= VAR_21) VAR_23 = VAR_21 - VAR_18;
      }
    }
    else if(VAR_16 == 256)
    {
      break;
    }
    else
    {


      VAR_12 = (*VAR_8) > VAR_10 * 8 ? 10 : 11;
      break;
    }
  }

  FUNC_1(&VAR_13);
  FUNC_1(&VAR_14);

  return VAR_12;
}
