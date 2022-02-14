
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {scalar_t__ non_blocking; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__** VAR_2 ;
 int FUNC_0 (int,int*,int,int) ;

__attribute__((used)) static int FUNC_1(int VAR_3)
{
    uint8_t VAR_4;
    int VAR_5 = VAR_2[VAR_3]->non_blocking ? 0 : VAR_1;
    int VAR_6 = FUNC_0(VAR_3, &VAR_4, 1, VAR_5);
    if (VAR_6 <= 0) {
        return VAR_0;
    }
    return VAR_4;
}
