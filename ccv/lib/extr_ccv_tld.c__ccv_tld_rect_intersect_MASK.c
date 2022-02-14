
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int width; int height; scalar_t__ y; scalar_t__ x; } ;
typedef TYPE_1__ ccv_rect_t ;


 int FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;

__attribute__((used)) static inline float FUNC_2(const ccv_rect_t VAR_0, const ccv_rect_t VAR_1)
{
 int VAR_2 = FUNC_0(0, FUNC_1(VAR_0 + VAR_0, VAR_1 + VAR_1) - FUNC_0(VAR_0, VAR_1)) * FUNC_0(0, FUNC_1(VAR_0 + VAR_0, VAR_1 + VAR_1) - FUNC_0(VAR_0, VAR_1));
 return (float)VAR_2 / (VAR_0 * VAR_0 + VAR_1 * VAR_1 - VAR_2);
}
