
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ fb_id; } ;
struct TYPE_5__ {int fd; TYPE_1__* orig_crtc; int connector_id; } ;
struct TYPE_4__ {int mode; int y; int x; int buffer_id; int crtc_id; } ;


 TYPE_3__* VAR_0 ;
 TYPE_2__ VAR_1 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int ,int ,int ,int ,int ,int *,int,int *) ;

__attribute__((used)) static void FUNC_2(void)
{


   FUNC_1(VAR_1.fd, VAR_1.orig_crtc->crtc_id,
         VAR_1.orig_crtc->buffer_id,
         VAR_1.orig_crtc->x, VAR_1.orig_crtc->y,
         &VAR_1.connector_id, 1, &VAR_1.orig_crtc->mode);
}
