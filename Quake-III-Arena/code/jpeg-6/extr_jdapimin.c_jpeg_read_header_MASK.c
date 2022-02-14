
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* j_decompress_ptr ;
typedef int j_common_ptr ;
typedef int boolean ;
struct TYPE_6__ {scalar_t__ global_state; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,int ,scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;



 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;

int
FUNC_4 (j_decompress_ptr VAR_6, boolean VAR_7)
{
  int VAR_8;

  if (VAR_6->global_state != VAR_1 &&
      VAR_6->global_state != VAR_0)
    FUNC_1(VAR_6, VAR_2, VAR_6->global_state);

  VAR_8 = FUNC_3(VAR_6);

  switch (VAR_8) {
  case 129:
    VAR_8 = VAR_4;
    break;
  case 130:
    if (VAR_7)
      FUNC_0(VAR_6, VAR_3);




    FUNC_2((j_common_ptr) VAR_6);
    VAR_8 = VAR_5;
    break;
  case 128:

    break;
  }

  return VAR_8;
}
