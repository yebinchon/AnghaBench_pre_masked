
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int esp_err_t ;
struct TYPE_3__ {int rx_eof; } ;
struct TYPE_4__ {TYPE_1__ slc0_int_clr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,int ) ;
 TYPE_2__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;

__attribute__((used)) static esp_err_t FUNC_4(void)
{
    FUNC_0(FUNC_1() == VAR_3,
        "already started", VAR_0);
    VAR_2.slc0_int_clr.rx_eof = 1;
    FUNC_3(VAR_4);
    FUNC_2();
    return VAR_1;
}
