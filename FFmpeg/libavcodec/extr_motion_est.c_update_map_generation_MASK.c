
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int map_generation; int map; } ;
typedef TYPE_1__ MotionEstContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static inline unsigned FUNC_1(MotionEstContext *VAR_2)
{
    VAR_2->map_generation+= 1<<(VAR_0*2);
    if(VAR_2->map_generation==0){
        VAR_2->map_generation= 1<<(VAR_0*2);
        FUNC_0(VAR_2->map, 0, sizeof(uint32_t)*VAR_1);
    }
    return VAR_2->map_generation;
}
