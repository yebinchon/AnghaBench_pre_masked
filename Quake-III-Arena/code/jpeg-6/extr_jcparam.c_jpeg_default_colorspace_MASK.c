
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* j_compress_ptr ;
struct TYPE_5__ {int in_color_space; } ;


 int FUNC_0 (TYPE_1__*,int ) ;






 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,int const) ;

void
FUNC_2 (j_compress_ptr VAR_1)
{
  switch (VAR_1->in_color_space) {
  case 132:
    FUNC_1(VAR_1, 132);
    break;
  case 131:
    FUNC_1(VAR_1, 128);
    break;
  case 128:
    FUNC_1(VAR_1, 128);
    break;
  case 133:
    FUNC_1(VAR_1, 133);
    break;
  case 129:
    FUNC_1(VAR_1, 129);
    break;
  case 130:
    FUNC_1(VAR_1, 130);
    break;
  default:
    FUNC_0(VAR_1, VAR_0);
  }
}
