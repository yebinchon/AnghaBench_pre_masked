
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct dirent {int d_namlen; int d_reclen; int d_ino; int d_name; } ;
struct _wdirent {int d_reclen; int d_ino; int d_name; } ;
struct TYPE_4__ {struct dirent entry; int wdir; } ;
typedef TYPE_1__ HB_DIR ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int,int ,int,int *,int *) ;
 struct _wdirent* FUNC_1 (int ) ;
 struct dirent* FUNC_2 (TYPE_1__*) ;

struct dirent * FUNC_3(HB_DIR *VAR_1)
{
    return FUNC_2(VAR_1);

}
