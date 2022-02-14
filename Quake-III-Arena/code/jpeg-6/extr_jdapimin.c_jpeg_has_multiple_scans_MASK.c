
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_2__* j_decompress_ptr ;
typedef int boolean ;
struct TYPE_6__ {scalar_t__ global_state; TYPE_1__* inputctl; } ;
struct TYPE_5__ {int has_multiple_scans; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_2__*,int ,scalar_t__) ;
 int VAR_2 ;

boolean
FUNC_1 (j_decompress_ptr VAR_3)
{

  if (VAR_3->global_state < VAR_0 ||
      VAR_3->global_state > VAR_1)
    FUNC_0(VAR_3, VAR_2, VAR_3->global_state);
  return VAR_3->inputctl->has_multiple_scans;
}
