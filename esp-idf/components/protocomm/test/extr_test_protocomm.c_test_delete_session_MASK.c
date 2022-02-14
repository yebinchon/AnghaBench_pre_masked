
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int session_t ;
typedef scalar_t__ esp_err_t ;
struct TYPE_2__ {scalar_t__ (* cleanup ) (int ) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 TYPE_1__* VAR_4 ;

__attribute__((used)) static esp_err_t FUNC_1(session_t *VAR_5)
{
    if (!VAR_4) {
        return VAR_0;
    }

    if (VAR_4->cleanup && (VAR_4->cleanup(VAR_3) != VAR_2)) {
        return VAR_1;
    }
    return VAR_2;
}
