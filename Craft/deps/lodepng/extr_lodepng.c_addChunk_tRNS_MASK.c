
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int size; int data; } ;
typedef TYPE_1__ ucvector ;
struct TYPE_10__ {scalar_t__ colortype; size_t palettesize; int* palette; int key_r; int key_g; int key_b; scalar_t__ key_defined; } ;
typedef TYPE_2__ LodePNGColorMode ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int FUNC_0 (TYPE_1__*,char*,int ,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,unsigned char) ;

__attribute__((used)) static unsigned FUNC_4(ucvector* VAR_3, const LodePNGColorMode* VAR_4)
{
  unsigned VAR_5 = 0;
  size_t VAR_6;
  ucvector VAR_7;
  FUNC_2(&VAR_7);
  if(VAR_4->colortype == VAR_1)
  {
    size_t VAR_8 = VAR_4->palettesize;

    for(VAR_6 = VAR_4->palettesize; VAR_6 > 0; VAR_6--)
    {
      if(VAR_4->palette[4 * (VAR_6 - 1) + 3] == 255) VAR_8--;
      else break;
    }

    for(VAR_6 = 0; VAR_6 < VAR_8; VAR_6++) FUNC_3(&VAR_7, VAR_4->palette[4 * VAR_6 + 3]);
  }
  else if(VAR_4->colortype == VAR_0)
  {
    if(VAR_4->key_defined)
    {
      FUNC_3(&VAR_7, (unsigned char)(VAR_4->key_r / 256));
      FUNC_3(&VAR_7, (unsigned char)(VAR_4->key_r % 256));
    }
  }
  else if(VAR_4->colortype == VAR_2)
  {
    if(VAR_4->key_defined)
    {
      FUNC_3(&VAR_7, (unsigned char)(VAR_4->key_r / 256));
      FUNC_3(&VAR_7, (unsigned char)(VAR_4->key_r % 256));
      FUNC_3(&VAR_7, (unsigned char)(VAR_4->key_g / 256));
      FUNC_3(&VAR_7, (unsigned char)(VAR_4->key_g % 256));
      FUNC_3(&VAR_7, (unsigned char)(VAR_4->key_b / 256));
      FUNC_3(&VAR_7, (unsigned char)(VAR_4->key_b % 256));
    }
  }

  VAR_5 = FUNC_0(VAR_3, "tRNS", VAR_7.data, VAR_7.size);
  FUNC_1(&VAR_7);

  return VAR_5;
}
