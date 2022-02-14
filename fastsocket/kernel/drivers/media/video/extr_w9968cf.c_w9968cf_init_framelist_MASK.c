
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct w9968cf_device {size_t nbuffers; TYPE_1__* frame; int ** requested_frame; } ;
struct TYPE_2__ {int status; scalar_t__ queued; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct w9968cf_device* VAR_1)
{
 u8 VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->nbuffers; VAR_2++) {
  VAR_1->requested_frame[VAR_2] = ((void*)0);
  VAR_1->frame[VAR_2].queued = 0;
  VAR_1->frame[VAR_2].status = VAR_0;
 }
}
