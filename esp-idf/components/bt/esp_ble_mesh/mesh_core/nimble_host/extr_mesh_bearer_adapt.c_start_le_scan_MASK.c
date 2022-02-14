
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8_t ;
typedef void* u16_t ;
struct TYPE_5__ {int flags; } ;
struct TYPE_4__ {int passive; void* window; void* itvl; scalar_t__ filter_duplicates; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,TYPE_1__*,int ,int *) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 TYPE_2__ VAR_5 ;
 int VAR_6 ;
 TYPE_1__ VAR_7 ;

__attribute__((used)) static int FUNC_3(u8_t VAR_8, u16_t VAR_9, u16_t VAR_10, u8_t VAR_11)
{

    VAR_7.filter_duplicates = VAR_11;
    VAR_7.itvl = VAR_9;
    VAR_7.window = VAR_10;

    if (VAR_8 == VAR_3) {
        VAR_7.passive = 1;
    } else {
        VAR_7.passive = 0;
    }
    FUNC_0(VAR_4, VAR_0, &VAR_7, VAR_6, ((void*)0));
    return 0;
}
