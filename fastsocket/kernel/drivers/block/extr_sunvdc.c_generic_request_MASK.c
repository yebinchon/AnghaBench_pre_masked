
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct vio_dring_state {int prod; } ;
struct vio_disk_vtoc {int dummy; } ;
struct vio_disk_geom {int dummy; } ;
struct vio_disk_devid {int dummy; } ;
struct TYPE_3__ {int state; int ack; } ;
struct vio_disk_desc {int operation; int size; int ncookies; TYPE_1__ hdr; scalar_t__ offset; int status; scalar_t__ slice; int req_id; int cookies; } ;
struct vio_completion {int err; int com; int waiting_for; } ;
struct TYPE_4__ {int lock; struct vio_completion* cmp; int lp; struct vio_dring_state* drings; } ;
struct vdc_port {int operations; TYPE_2__ vio; int req_id; int ring_cookies; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 size_t VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (struct vdc_port*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (void*) ;
 void* FUNC_3 (int,int ) ;
 int FUNC_4 (int ,void*,int,int ,int ,unsigned int) ;
 int FUNC_5 (void*,void*,int) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 struct vio_disk_desc* FUNC_8 (struct vio_dring_state*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 () ;

__attribute__((used)) static int FUNC_11(struct vdc_port *VAR_15, u8 VAR_16, void *VAR_17, int VAR_18)
{
 struct vio_dring_state *VAR_19;
 struct vio_completion VAR_20;
 struct vio_disk_desc *VAR_21;
 unsigned int VAR_22;
 unsigned long VAR_23;
 int VAR_24, VAR_25;
 void *VAR_26;

 if (!(((u64)1 << ((u64)VAR_16 - 1)) & VAR_15->operations))
  return -VAR_2;

 switch (VAR_16) {
 case 140:
 case 139:
 default:
  return -VAR_0;

 case 138:
  VAR_24 = 0;
  VAR_22 = 0;
  break;

 case 133:
  VAR_24 = sizeof(u32);
  VAR_22 = VAR_9;
  break;

 case 128:
  VAR_24 = sizeof(u32);
  VAR_22 = VAR_6;
  break;

 case 134:
  VAR_24 = sizeof(struct vio_disk_vtoc);
  VAR_22 = VAR_9;
  break;

 case 129:
  VAR_24 = sizeof(struct vio_disk_vtoc);
  VAR_22 = VAR_6;
  break;

 case 136:
  VAR_24 = sizeof(struct vio_disk_geom);
  VAR_22 = VAR_9;
  break;

 case 131:
  VAR_24 = sizeof(struct vio_disk_geom);
  VAR_22 = VAR_6;
  break;

 case 132:
  VAR_24 = 16;
  VAR_22 = VAR_7;
  break;

 case 137:
  VAR_24 = sizeof(struct vio_disk_devid);
  VAR_22 = VAR_9;
  break;

 case 135:
 case 130:
  return -VAR_2;
  break;
 };

 VAR_22 |= VAR_8 | VAR_4 | VAR_5;

 VAR_24 = (VAR_24 + 7) & ~7;
 VAR_26 = FUNC_3(VAR_24, VAR_3);
 if (!VAR_26)
  return -VAR_1;

 if (VAR_18 > VAR_24)
  VAR_18 = VAR_24;

 if (VAR_22 & VAR_6)
  FUNC_5(VAR_26, VAR_17, VAR_18);

 FUNC_6(&VAR_15->vio.lock, VAR_23);

 VAR_19 = &VAR_15->vio.drings[VAR_13];




 VAR_21 = FUNC_8(VAR_19);

 VAR_25 = FUNC_4(VAR_15->vio.lp, VAR_26, VAR_24,
        VAR_21->cookies, VAR_15->ring_cookies,
        VAR_22);
 if (VAR_25 < 0) {
  FUNC_7(&VAR_15->vio.lock, VAR_23);
  FUNC_2(VAR_26);
  return VAR_25;
 }

 FUNC_1(&VAR_20.com);
 VAR_20.waiting_for = VAR_14;
 VAR_15->vio.cmp = &VAR_20;

 VAR_21->hdr.ack = VAR_11;
 VAR_21->req_id = VAR_15->req_id;
 VAR_21->operation = VAR_16;
 VAR_21->slice = 0;
 VAR_21->status = ~0;
 VAR_21->offset = 0;
 VAR_21->size = VAR_24;
 VAR_21->ncookies = VAR_25;




 FUNC_10();
 VAR_21->hdr.state = VAR_12;

 VAR_25 = FUNC_0(VAR_15);
 if (VAR_25 >= 0) {
  VAR_15->req_id++;
  VAR_19->prod = (VAR_19->prod + 1) & (VAR_10 - 1);
  FUNC_7(&VAR_15->vio.lock, VAR_23);

  FUNC_9(&VAR_20.com);
  VAR_25 = VAR_20.err;
 } else {
  VAR_15->vio.cmp = ((void*)0);
  FUNC_7(&VAR_15->vio.lock, VAR_23);
 }

 if (VAR_22 & VAR_9)
  FUNC_5(VAR_17, VAR_26, VAR_18);

 FUNC_2(VAR_26);

 return VAR_25;
}
