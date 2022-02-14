
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_capability {int capabilities; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static inline int FUNC_0(struct v4l2_capability *VAR_4)
{
    if (VAR_4->capabilities & (VAR_1 | VAR_3) &&
        VAR_4->capabilities & VAR_0)
        return 1;

    if (VAR_4->capabilities & VAR_2)
        return 1;

    return 0;
}
