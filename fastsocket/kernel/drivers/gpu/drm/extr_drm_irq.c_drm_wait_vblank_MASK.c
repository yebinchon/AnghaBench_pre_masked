
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int sequence; int tval_usec; int tval_sec; } ;
struct TYPE_3__ {int type; unsigned int sequence; } ;
union drm_wait_vblank {TYPE_2__ reply; TYPE_1__ request; } ;
struct timeval {int tv_usec; int tv_sec; } ;
struct drm_file {int dummy; } ;
struct drm_device {unsigned int num_crtcs; unsigned int* last_vblank_wait; int irq_enabled; int * vbl_queue; } ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,int,int) ;
 int VAR_1 ;
 int FUNC_2 (int,int ,int,int) ;
 int VAR_2 ;
 int VAR_3 ;

 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;

 unsigned int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_3 (struct drm_device*,int ) ;
 int FUNC_4 (struct drm_device*) ;
 int FUNC_5 (struct drm_device*,unsigned int,union drm_wait_vblank*,struct drm_file*) ;
 int FUNC_6 (struct drm_device*,unsigned int) ;
 int FUNC_7 (struct drm_device*,unsigned int,struct timeval*) ;
 int FUNC_8 (struct drm_device*,unsigned int) ;
 int FUNC_9 (struct drm_device*,unsigned int) ;

int FUNC_10(struct drm_device *VAR_12, void *VAR_13,
      struct drm_file *VAR_14)
{
 union drm_wait_vblank *VAR_15 = VAR_13;
 int VAR_16;
 unsigned int VAR_17, VAR_18, VAR_19, VAR_20;

 if (FUNC_3(VAR_12, VAR_0))
  if ((!FUNC_4(VAR_12)) || (!VAR_12->irq_enabled))
   return -VAR_3;

 if (VAR_15->request.type & VAR_10)
  return -VAR_3;

 if (VAR_15->request.type &
     ~(VAR_11 | VAR_5 |
       VAR_6)) {
  FUNC_1("Unsupported type value 0x%x, supported mask 0x%x\n",
     VAR_15->request.type,
     (VAR_11 | VAR_5 |
      VAR_6));
  return -VAR_3;
 }

 VAR_17 = VAR_15->request.type & VAR_5;
 VAR_20 = (VAR_15->request.type & VAR_6);
 if (VAR_20)
  VAR_19 = VAR_20 >> VAR_7;
 else
  VAR_19 = VAR_17 & VAR_9 ? 1 : 0;
 if (VAR_19 >= VAR_12->num_crtcs)
  return -VAR_3;

 VAR_16 = FUNC_8(VAR_12, VAR_19);
 if (VAR_16) {
  FUNC_0("failed to acquire vblank counter, %d\n", VAR_16);
  return VAR_16;
 }
 VAR_18 = FUNC_6(VAR_12, VAR_19);

 switch (VAR_15->request.type & VAR_11) {
 case 128:
  VAR_15->request.sequence += VAR_18;
  VAR_15->request.type &= ~128;
 case 129:
  break;
 default:
  VAR_16 = -VAR_3;
  goto done;
 }

 if (VAR_17 & VAR_4) {



  return FUNC_5(VAR_12, VAR_19, VAR_15, VAR_14);
 }

 if ((VAR_17 & VAR_8) &&
     (VAR_18 - VAR_15->request.sequence) <= (1<<23)) {
  VAR_15->request.sequence = VAR_18 + 1;
 }

 FUNC_0("waiting on vblank count %d, crtc %d\n",
    VAR_15->request.sequence, VAR_19);
 VAR_12->last_vblank_wait[VAR_19] = VAR_15->request.sequence;
 FUNC_2(VAR_16, VAR_12->vbl_queue[VAR_19], 3 * VAR_1,
      (((FUNC_6(VAR_12, VAR_19) -
         VAR_15->request.sequence) <= (1 << 23)) ||
       !VAR_12->irq_enabled));

 if (VAR_16 != -VAR_2) {
  struct timeval VAR_21;

  VAR_15->reply.sequence = FUNC_7(VAR_12, VAR_19, &VAR_21);
  VAR_15->reply.tval_sec = VAR_21.tv_sec;
  VAR_15->reply.tval_usec = VAR_21.tv_usec;

  FUNC_0("returning %d to client\n",
     VAR_15->reply.sequence);
 } else {
  FUNC_0("vblank wait interrupted by signal\n");
 }

done:
 FUNC_9(VAR_12, VAR_19);
 return VAR_16;
}
