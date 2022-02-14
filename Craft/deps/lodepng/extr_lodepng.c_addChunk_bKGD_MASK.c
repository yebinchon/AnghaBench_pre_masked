
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int size; int data; } ;
typedef TYPE_2__ ucvector ;
struct TYPE_10__ {scalar_t__ colortype; } ;
struct TYPE_12__ {int background_r; int background_g; int background_b; TYPE_1__ color; } ;
typedef TYPE_3__ LodePNGInfo ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned int FUNC_0 (TYPE_2__*,char*,int ,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,unsigned char) ;

__attribute__((used)) static unsigned FUNC_4(ucvector* VAR_5, const LodePNGInfo* VAR_6)
{
  unsigned VAR_7 = 0;
  ucvector VAR_8;
  FUNC_2(&VAR_8);
  if(VAR_6->color.colortype == VAR_0 || VAR_6->color.colortype == VAR_1)
  {
    FUNC_3(&VAR_8, (unsigned char)(VAR_6->background_r / 256));
    FUNC_3(&VAR_8, (unsigned char)(VAR_6->background_r % 256));
  }
  else if(VAR_6->color.colortype == VAR_3 || VAR_6->color.colortype == VAR_4)
  {
    FUNC_3(&VAR_8, (unsigned char)(VAR_6->background_r / 256));
    FUNC_3(&VAR_8, (unsigned char)(VAR_6->background_r % 256));
    FUNC_3(&VAR_8, (unsigned char)(VAR_6->background_g / 256));
    FUNC_3(&VAR_8, (unsigned char)(VAR_6->background_g % 256));
    FUNC_3(&VAR_8, (unsigned char)(VAR_6->background_b / 256));
    FUNC_3(&VAR_8, (unsigned char)(VAR_6->background_b % 256));
  }
  else if(VAR_6->color.colortype == VAR_2)
  {
    FUNC_3(&VAR_8, (unsigned char)(VAR_6->background_r % 256));
  }

  VAR_7 = FUNC_0(VAR_5, "bKGD", VAR_8.data, VAR_8.size);
  FUNC_1(&VAR_8);

  return VAR_7;
}
