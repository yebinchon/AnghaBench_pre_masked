
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int z_streamp ;
typedef scalar_t__ uInt ;
struct inflate_codes_state {int dummy; } ;
typedef int inflate_huft ;
struct TYPE_4__ {int * dtree; int * ltree; void* dbits; void* lbits; int mode; } ;
typedef TYPE_1__ inflate_codes_statef ;
typedef void* Byte ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,int,int) ;
 TYPE_1__* VAR_1 ;

inflate_codes_statef *FUNC_2(uInt VAR_2, uInt VAR_3, inflate_huft *VAR_4, inflate_huft *VAR_5, z_streamp VAR_6)
{
  inflate_codes_statef *VAR_7;

  if ((VAR_7 = (inflate_codes_statef *)
       FUNC_1(VAR_6,1,sizeof(struct inflate_codes_state))) != VAR_1)
  {
    VAR_7->mode = VAR_0;
    VAR_7->lbits = (Byte)VAR_2;
    VAR_7->dbits = (Byte)VAR_3;
    VAR_7->ltree = VAR_4;
    VAR_7->dtree = VAR_5;
    FUNC_0(("inflate:       codes new\n"));
  }
  return VAR_7;
}
