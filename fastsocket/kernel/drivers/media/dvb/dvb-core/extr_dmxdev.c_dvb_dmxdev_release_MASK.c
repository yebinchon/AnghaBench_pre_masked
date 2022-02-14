
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dmxdev {int exit; TYPE_1__* demux; int * filter; TYPE_2__* dvr_dvbdev; TYPE_2__* dvbdev; } ;
struct TYPE_4__ {int users; int wait_queue; } ;
struct TYPE_3__ {int (* close ) (TYPE_1__*) ;} ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int) ;

void FUNC_4(struct dmxdev *VAR_0)
{
 VAR_0->exit=1;
 if (VAR_0->dvbdev->users > 1) {
  FUNC_3(VAR_0->dvbdev->wait_queue,
    VAR_0->dvbdev->users==1);
 }
 if (VAR_0->dvr_dvbdev->users > 1) {
  FUNC_3(VAR_0->dvr_dvbdev->wait_queue,
    VAR_0->dvr_dvbdev->users==1);
 }

 FUNC_0(VAR_0->dvbdev);
 FUNC_0(VAR_0->dvr_dvbdev);

 FUNC_2(VAR_0->filter);
 VAR_0->filter = ((void*)0);
 VAR_0->demux->close(VAR_0->demux);
}
