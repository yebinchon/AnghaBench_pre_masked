
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int error_count; int warning_count; } ;
typedef TYPE_1__ display ;



__attribute__((used)) static int
FUNC_0(const display *VAR_0, int VAR_1)
{
   return VAR_0->error_count + (VAR_1 ? VAR_0->warning_count : 0);
}
