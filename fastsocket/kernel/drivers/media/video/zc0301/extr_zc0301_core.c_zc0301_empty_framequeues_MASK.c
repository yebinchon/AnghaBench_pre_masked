
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct zc0301_device {TYPE_2__* frame; int outqueue; int inqueue; } ;
struct TYPE_3__ {scalar_t__ bytesused; } ;
struct TYPE_4__ {TYPE_1__ buf; int state; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 size_t VAR_1 ;

__attribute__((used)) static void FUNC_1(struct zc0301_device* VAR_2)
{
 u32 VAR_3;

 FUNC_0(&VAR_2->inqueue);
 FUNC_0(&VAR_2->outqueue);

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  VAR_2->frame[VAR_3].state = VAR_0;
  VAR_2->frame[VAR_3].buf.bytesused = 0;
 }
}
