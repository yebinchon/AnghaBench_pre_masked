
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct inotify_event {int mask; scalar_t__ wd; scalar_t__ len; } ;
struct TYPE_10__ {scalar_t__ data; } ;
typedef TYPE_4__ path_change_data_t ;
struct TYPE_11__ {int flags; TYPE_3__* path_list; TYPE_1__* wd_list; int fd; } ;
typedef TYPE_5__ inotify_data_t ;
typedef int buffer ;
struct TYPE_9__ {TYPE_2__* elems; } ;
struct TYPE_8__ {char* data; } ;
struct TYPE_7__ {unsigned int count; scalar_t__* data; } ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (char const*,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,int) ;

__attribute__((used)) static bool FUNC_6(path_change_data_t *VAR_1)
{
   return 0;
}
