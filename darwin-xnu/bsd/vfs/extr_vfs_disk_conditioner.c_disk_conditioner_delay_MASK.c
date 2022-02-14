
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_1__* vnode_t ;
typedef double uint64_t ;
struct timeval {double tv_sec; scalar_t__ tv_usec; } ;
struct TYPE_11__ {double access_time_usec; int read_throughput_mbps; int write_throughput_mbps; int is_ssd; int enabled; } ;
struct _disk_conditioner_info_t {scalar_t__ last_blkno; struct timeval last_io_timestamp; TYPE_3__ dcinfo; } ;
typedef TYPE_2__* mount_t ;
typedef TYPE_3__ disk_conditioner_info ;
typedef scalar_t__ daddr64_t ;
typedef TYPE_4__* buf_t ;
struct TYPE_12__ {scalar_t__ b_blkno; scalar_t__ b_bcount; int b_flags; } ;
struct TYPE_10__ {struct _disk_conditioner_info_t* mnt_disk_conditioner_info; } ;
struct TYPE_9__ {TYPE_2__* v_mount; } ;


 double FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 double VAR_1 ;
 double VAR_2 ;
 double VAR_3 ;
 TYPE_1__* FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (double) ;
 int FUNC_3 (struct timeval*) ;
 int FUNC_4 (struct timeval*,struct timeval*) ;
 double FUNC_5 (double) ;

void
FUNC_6(buf_t VAR_4, int VAR_5, int VAR_6, uint64_t VAR_7)
{
 mount_t VAR_8;
 uint64_t VAR_9;
 daddr64_t VAR_10;
 daddr64_t VAR_11;
 double VAR_12;
 struct _disk_conditioner_info_t *VAR_13 = ((void*)0);
 disk_conditioner_info *VAR_14 = ((void*)0);
 struct timeval VAR_15;
 struct timeval VAR_16;
 vnode_t VAR_17;

 VAR_17 = FUNC_1(VAR_4);
 if (!VAR_17) {
  return;
 }

 VAR_8 = VAR_17->v_mount;
 if (!VAR_8) {
  return;
 }

 VAR_13 = VAR_8->mnt_disk_conditioner_info;
 if (!VAR_13 || !VAR_13->dcinfo.enabled) {
  return;
 }
 VAR_14 = &(VAR_13->dcinfo);

 if (!VAR_14->is_ssd) {

  VAR_11 = VAR_13->last_blkno;
  VAR_10 = VAR_4->b_blkno > VAR_11 ? VAR_4->b_blkno - VAR_11 : VAR_11 - VAR_4->b_blkno;
  VAR_13->last_blkno = VAR_4->b_blkno + VAR_4->b_bcount;
 } else {
  VAR_10 = FUNC_0(VAR_8);
 }


 VAR_12 = FUNC_5((double)VAR_10 / FUNC_0(VAR_8));

 VAR_9 = (uint64_t)(((uint64_t)VAR_5 * VAR_14->access_time_usec) * VAR_12);

 if (VAR_14->read_throughput_mbps && (VAR_4->b_flags & VAR_0)) {
  VAR_9 += (uint64_t)(VAR_6 / ((double)(VAR_14->read_throughput_mbps * 1024 * 1024 / 8) / VAR_3));
 } else if (VAR_14->write_throughput_mbps && !(VAR_4->b_flags & VAR_0)) {
  VAR_9 += (uint64_t)(VAR_6 / ((double)(VAR_14->write_throughput_mbps * 1024 * 1024 / 8) / VAR_3));
 }


 if (!VAR_14->is_ssd) {
  FUNC_3(&VAR_15);
  FUNC_4(&VAR_15, &VAR_13->last_io_timestamp);

  if (VAR_15.tv_sec > VAR_1 && VAR_13->last_io_timestamp.tv_sec != 0) {
   VAR_9 += VAR_2 * VAR_3;
  }
 }

 if (VAR_9 <= VAR_7) {
  FUNC_3(&VAR_13->last_io_timestamp);
  return;
 }

 VAR_9 -= VAR_7;

 while (VAR_9) {
  FUNC_3(&VAR_16);
  FUNC_2(VAR_9);
  FUNC_3(&VAR_15);
  FUNC_4(&VAR_15, &VAR_16);
  if (VAR_15.tv_sec * VAR_3 < VAR_9) {
   VAR_9 -= VAR_15.tv_sec * VAR_3;
  } else {
   break;
  }
  if ((uint64_t)VAR_15.tv_usec < VAR_9) {
   VAR_9 -= VAR_15.tv_usec;
  } else {
   break;
  }
 }

 FUNC_3(&VAR_13->last_io_timestamp);
}
