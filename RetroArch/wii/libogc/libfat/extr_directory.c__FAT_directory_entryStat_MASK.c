
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct stat {int st_mode; int st_nlink; int st_uid; int st_gid; int st_size; int st_blksize; int st_blocks; scalar_t__* st_spare4; scalar_t__ st_spare3; void* st_ctime; scalar_t__ st_spare2; void* st_mtime; scalar_t__ st_spare1; void* st_atime; int st_dev; int st_rdev; scalar_t__ st_ino; } ;
typedef scalar_t__ ino_t ;
struct TYPE_9__ {int entryData; } ;
struct TYPE_8__ {int bytesPerSector; int disc; } ;
typedef TYPE_1__ PARTITION ;
typedef TYPE_2__ DIR_ENTRY ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ) ;
 void* FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;

void FUNC_7 (PARTITION* VAR_14, DIR_ENTRY* VAR_15, struct stat *VAR_16) {


 VAR_16->st_dev = FUNC_3(VAR_14->disc);
   VAR_16->st_ino = (ino_t)(FUNC_0(VAR_14, VAR_15->entryData));
 VAR_16->st_mode = (FUNC_1(VAR_15) ? VAR_6 : VAR_7) |
  (VAR_10 | VAR_8 | VAR_9) |
  (FUNC_2 (VAR_15) ? (VAR_13 | VAR_11 | VAR_12) : 0);
 VAR_16->st_nlink = 1;
 VAR_16->st_uid = 1;
 VAR_16->st_gid = 2;
 VAR_16->st_rdev = VAR_16->st_dev;
 VAR_16->st_size = FUNC_6 (VAR_15->entryData, VAR_3);
 VAR_16->st_atime = FUNC_4 (
  0,
  FUNC_5 (VAR_15->entryData, VAR_0)
 );
 VAR_16->st_spare1 = 0;
 VAR_16->st_mtime = FUNC_4 (
  FUNC_5 (VAR_15->entryData, VAR_5),
  FUNC_5 (VAR_15->entryData, VAR_4)
 );
 VAR_16->st_spare2 = 0;
 VAR_16->st_ctime = FUNC_4 (
  FUNC_5 (VAR_15->entryData, VAR_2),
  FUNC_5 (VAR_15->entryData, VAR_1)
 );
 VAR_16->st_spare3 = 0;
 VAR_16->st_blksize = VAR_14->bytesPerSector;
 VAR_16->st_blocks = (VAR_16->st_size + VAR_14->bytesPerSector - 1) / VAR_14->bytesPerSector;
 VAR_16->st_spare4[0] = 0;
 VAR_16->st_spare4[1] = 0;
}
