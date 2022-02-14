
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int tv_nsec; int tv_sec; } ;
struct TYPE_3__ {int tv_nsec; int tv_sec; } ;
struct iattr {unsigned int ia_valid; TYPE_2__ ia_mtime; TYPE_1__ ia_atime; int ia_size; int ia_gid; int ia_uid; int ia_mode; } ;
struct fuse_setattr_in {int valid; int mtimensec; int mtime; int atimensec; int atime; int size; int gid; int uid; int mode; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_0 (unsigned int) ;

__attribute__((used)) static void FUNC_1(struct iattr *VAR_16, struct fuse_setattr_in *VAR_17)
{
 unsigned VAR_18 = VAR_16->ia_valid;

 if (VAR_18 & VAR_3)
  VAR_17->valid |= VAR_11, VAR_17->mode = VAR_16->ia_mode;
 if (VAR_18 & VAR_7)
  VAR_17->valid |= VAR_15, VAR_17->uid = VAR_16->ia_uid;
 if (VAR_18 & VAR_2)
  VAR_17->valid |= VAR_10, VAR_17->gid = VAR_16->ia_gid;
 if (VAR_18 & VAR_6)
  VAR_17->valid |= VAR_14, VAR_17->size = VAR_16->ia_size;
 if (VAR_18 & VAR_0) {
  VAR_17->valid |= VAR_8;
  VAR_17->atime = VAR_16->ia_atime.tv_sec;
  VAR_17->atimensec = VAR_16->ia_atime.tv_nsec;
  if (!(VAR_18 & VAR_1))
   VAR_17->valid |= VAR_9;
 }
 if ((VAR_18 & VAR_4) && FUNC_0(VAR_18)) {
  VAR_17->valid |= VAR_12;
  VAR_17->mtime = VAR_16->ia_mtime.tv_sec;
  VAR_17->mtimensec = VAR_16->ia_mtime.tv_nsec;
  if (!(VAR_18 & VAR_5))
   VAR_17->valid |= VAR_13;
 }
}
