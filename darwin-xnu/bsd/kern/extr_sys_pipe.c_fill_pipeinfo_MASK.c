
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* uint64_t ;
struct vinfo_stat {int vst_mode; int vst_blksize; int vst_size; int vst_blocks; int vst_nlink; int vst_ctimensec; int vst_ctime; int vst_mtimensec; int vst_mtime; int vst_atimensec; int vst_atime; int vst_gid; int vst_uid; } ;
struct timespec {int tv_nsec; int tv_sec; } ;
struct pipe_info {int pipe_status; void* pipe_peerhandle; void* pipe_handle; struct vinfo_stat pipe_stat; } ;
struct TYPE_2__ {scalar_t__ buffer; int cnt; } ;
struct pipe {int pipe_state; struct pipe* pipe_peer; TYPE_1__ pipe_buffer; } ;


 int VAR_0 ;
 int FUNC_0 (struct pipe*) ;
 int FUNC_1 (struct pipe*) ;
 int VAR_1 ;
 int FUNC_2 (struct pipe*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (uintptr_t) ;
 int FUNC_4 (struct vinfo_stat*,int) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (int ,struct pipe*) ;
 int FUNC_9 (struct timespec*) ;

int
FUNC_10(struct pipe * VAR_7, struct pipe_info * VAR_8)
{



 struct timespec VAR_9;
 struct vinfo_stat * VAR_10;
 int VAR_11 = 0;
 int VAR_12;

 if (VAR_7 == ((void*)0))
         return (VAR_0);
 FUNC_1(VAR_7);
 if (VAR_7->pipe_buffer.buffer == 0) {



         if (VAR_7->pipe_peer) {



          VAR_11 = FUNC_0(VAR_7->pipe_peer);
   VAR_12 = VAR_7->pipe_peer->pipe_buffer.cnt;
  } else {
   VAR_12 = 0;
  }
 } else {
         VAR_11 = FUNC_0(VAR_7);
  VAR_12 = VAR_7->pipe_buffer.cnt;
 }




 if (VAR_11 == 0)
  VAR_11 = VAR_1;

 VAR_10 = &VAR_8->pipe_stat;

 FUNC_4(VAR_10, sizeof(*VAR_10));
 VAR_10->vst_mode = VAR_2 | VAR_4 | VAR_6 | VAR_3 | VAR_5;
 VAR_10->vst_blksize = VAR_11;
 VAR_10->vst_size = VAR_12;
 if (VAR_10->vst_blksize != 0)
  VAR_10->vst_blocks = (VAR_10->vst_size + VAR_10->vst_blksize - 1) / VAR_10->vst_blksize;
 VAR_10->vst_nlink = 1;

 VAR_10->vst_uid = FUNC_7();
 VAR_10->vst_gid = FUNC_6();

 FUNC_9(&VAR_9);
 VAR_10->vst_atime = VAR_9.tv_sec;
 VAR_10->vst_atimensec = VAR_9.tv_nsec;

 VAR_10->vst_mtime = VAR_9.tv_sec;
 VAR_10->vst_mtimensec = VAR_9.tv_nsec;

 VAR_10->vst_ctime = VAR_9.tv_sec;
 VAR_10->vst_ctimensec = VAR_9.tv_nsec;






 VAR_8->pipe_handle = (uint64_t)FUNC_3((uintptr_t)VAR_7);
 VAR_8->pipe_peerhandle = (uint64_t)FUNC_3((uintptr_t)(VAR_7->pipe_peer));
 VAR_8->pipe_status = VAR_7->pipe_state;

 FUNC_2(VAR_7);

 return (0);
}
