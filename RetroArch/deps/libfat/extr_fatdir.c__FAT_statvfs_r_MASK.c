
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct statvfs {int f_flag; unsigned int f_bfree; unsigned int f_bavail; unsigned int f_ffree; unsigned int f_favail; int f_namemax; int f_fsid; void* f_files; void* f_blocks; int f_frsize; int f_bsize; } ;
struct _reent {int _errno; } ;
struct TYPE_6__ {unsigned int numberFreeCluster; void* lastCluster; } ;
struct TYPE_7__ {scalar_t__ filesysType; int lock; scalar_t__ readOnly; int disc; TYPE_1__ fat; int bytesPerCluster; } ;
typedef TYPE_2__ PARTITION ;


 void* VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 unsigned int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*) ;
 TYPE_2__* FUNC_4 (char const*) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int*,char*,int) ;

int FUNC_7 (struct _reent *VAR_6, const char *VAR_7, struct statvfs *VAR_8)
{
 PARTITION* VAR_9 = ((void*)0);
 unsigned int VAR_10;


 VAR_9 = FUNC_4 (VAR_7);
 if (VAR_9 == ((void*)0))
   {
  VAR_6->_errno = VAR_1;
  return -1;
 }

 FUNC_2(&VAR_9->lock);

 if(FUNC_6(&VAR_8->f_flag, "SCAN", 4) == 0)
 {

  FUNC_3(VAR_9);
 }

 if(VAR_9->filesysType == VAR_2)
  VAR_10 = VAR_9->fat.numberFreeCluster;
 else
  VAR_10 = FUNC_1 (VAR_9);


 VAR_8->f_bsize = VAR_9->bytesPerCluster;
 VAR_8->f_frsize = VAR_9->bytesPerCluster;

 VAR_8->f_blocks = VAR_9->fat.lastCluster - VAR_0 + 1;
 VAR_8->f_bfree = VAR_10;
 VAR_8->f_bavail = VAR_10;


 VAR_8->f_files = VAR_9->fat.lastCluster - VAR_0 + 1;
 VAR_8->f_ffree = VAR_10;
 VAR_8->f_favail = VAR_10;


 VAR_8->f_fsid = FUNC_0(VAR_9->disc);


 VAR_8->f_flag = VAR_4
  | (VAR_9->readOnly ? VAR_5 : 0 ) ;

 VAR_8->f_namemax = VAR_3;

 FUNC_5(&VAR_9->lock);
 return 0;
}
