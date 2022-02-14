
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct TYPE_2__ {int open_mutex; int dirEntNum; int volNumber; int file_handle; int opened; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (char*,int ,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int ) ;

int
FUNC_8(struct inode *VAR_0)
{
 int VAR_1;

 VAR_1 = 0;
 FUNC_5(&FUNC_0(VAR_0)->open_mutex);
 if (FUNC_3(&FUNC_0(VAR_0)->opened) == 1) {
  FUNC_4(&FUNC_0(VAR_0)->opened, 0);
  VAR_1 = FUNC_7(FUNC_1(VAR_0), FUNC_0(VAR_0)->file_handle);

  if (!VAR_1)
   FUNC_2("ncp_make_closed: volnum=%d, dirent=%u, error=%d\n",
    FUNC_0(VAR_0)->volNumber,
    FUNC_0(VAR_0)->dirEntNum, VAR_1);
 }
 FUNC_6(&FUNC_0(VAR_0)->open_mutex);
 return VAR_1;
}
