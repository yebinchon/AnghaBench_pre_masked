
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int tv_sec; int tv_usec; } ;
struct TYPE_5__ {int erasesize; } ;
struct TYPE_4__ {int tv_sec; int tv_usec; } ;


 TYPE_3__ VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 TYPE_1__ VAR_3 ;

__attribute__((used)) static long FUNC_0(void)
{
 long VAR_4, VAR_5, VAR_6;

 VAR_4 = (VAR_0.tv_sec - VAR_3.tv_sec) * 1000 +
      (VAR_0.tv_usec - VAR_3.tv_usec) / 1000;
 VAR_5 = VAR_1 * VAR_2->erasesize / 1024;
 VAR_6 = (VAR_5 * 1000) / VAR_4;
 return VAR_6;
}
