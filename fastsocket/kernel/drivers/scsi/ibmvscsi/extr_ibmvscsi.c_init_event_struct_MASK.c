
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int timeout; int format; } ;
struct srp_event_struct {void (* done ) (struct srp_event_struct*) ;TYPE_1__ crq; int * sync_srp; int * cmnd_done; int * cmnd; } ;



__attribute__((used)) static void FUNC_0(struct srp_event_struct *VAR_0,
         void (*VAR_1) (struct srp_event_struct *),
         u8 VAR_2,
         int VAR_3)
{
 VAR_0->cmnd = ((void*)0);
 VAR_0->cmnd_done = ((void*)0);
 VAR_0->sync_srp = ((void*)0);
 VAR_0->crq.format = VAR_2;
 VAR_0->crq.timeout = VAR_3;
 VAR_0->done = VAR_1;
}
