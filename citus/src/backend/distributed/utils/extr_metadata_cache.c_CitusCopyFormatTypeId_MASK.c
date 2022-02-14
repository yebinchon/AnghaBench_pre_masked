
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ copyFormatTypeId; } ;
typedef scalar_t__ Oid ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,int ,int ) ;
 scalar_t__ VAR_1 ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 int VAR_4 ;

Oid
FUNC_2(void)
{
 if (VAR_2.copyFormatTypeId == VAR_1)
 {
  char *VAR_5 = "citus_copy_format";
  VAR_2.copyFormatTypeId = FUNC_0(VAR_4,
                  VAR_0,
                  FUNC_1(VAR_5),
                  VAR_3);
 }

 return VAR_2.copyFormatTypeId;
}
