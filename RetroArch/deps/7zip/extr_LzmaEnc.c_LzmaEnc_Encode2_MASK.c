
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int rc; int nowPos64; scalar_t__ finished; } ;
struct TYPE_8__ {scalar_t__ (* Progress ) (TYPE_1__*,int ,int ) ;} ;
typedef scalar_t__ SRes ;
typedef TYPE_1__ ICompressProgress ;
typedef TYPE_2__ CLzmaEnc ;


 scalar_t__ FUNC_0 (TYPE_2__*,int,int ,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_3 (TYPE_1__*,int ,int ) ;

__attribute__((used)) static SRes FUNC_4(CLzmaEnc *VAR_2, ICompressProgress *VAR_3)
{
  SRes VAR_4 = VAR_1;


  unsigned char VAR_5[0x300];
  VAR_5[0] = 0;
  VAR_5[1] = VAR_5[0];


  for (;;)
  {
    VAR_4 = FUNC_0(VAR_2, 0, 0, 0);
    if (VAR_4 != VAR_1 || VAR_2->finished)
      break;
    if (VAR_3)
    {
      VAR_4 = VAR_3->Progress(VAR_3, VAR_2->nowPos64, FUNC_2(&VAR_2->rc));
      if (VAR_4 != VAR_1)
      {
        VAR_4 = VAR_0;
        break;
      }
    }
  }

  FUNC_1(VAR_2);

  return VAR_4;
}
