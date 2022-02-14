
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ cdda_type; int cdda_stream; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int,int ) ;

void FUNC_2(int VAR_5, int VAR_6, int VAR_7)
{
  if (VAR_2->cdda_type == VAR_0)
  {
    int VAR_8 = 0;

    if (VAR_6)
      VAR_8 = VAR_6 * 1024 / VAR_7;

    FUNC_0(VAR_2->cdda_stream, VAR_8);
    return;
  }

  FUNC_1(VAR_2->cdda_stream, (VAR_5 + VAR_6) * 2352, VAR_4);
  if (VAR_2->cdda_type == VAR_1)
  {

    FUNC_1(VAR_2->cdda_stream, 44, VAR_3);
  }
}
