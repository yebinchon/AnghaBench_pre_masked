
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {long long offset; scalar_t__ external; long long default_offset; struct file* file; } ;
struct mddev {scalar_t__ major_version; int thread; int flags; int external; TYPE_2__* pers; TYPE_1__ bitmap_info; scalar_t__ bitmap; scalar_t__ sync_thread; scalar_t__ recovery; } ;
struct file {int dummy; } ;
typedef int ssize_t ;
struct TYPE_4__ {int (* quiesce ) (struct mddev*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mddev*) ;
 int FUNC_1 (struct mddev*) ;
 int FUNC_2 (struct mddev*) ;
 int FUNC_3 (struct file*) ;
 int FUNC_4 (char const*,int,long long*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct file*) ;
 int FUNC_7 (int ,int *) ;
 scalar_t__ FUNC_8 (char const*,char*,int) ;
 int FUNC_9 (struct mddev*,int) ;
 int FUNC_10 (struct mddev*,int) ;
 int FUNC_11 (struct mddev*,int) ;
 int FUNC_12 (struct mddev*,int) ;

__attribute__((used)) static ssize_t
FUNC_13(struct mddev *VAR_3, const char *VAR_4, size_t VAR_5)
{

 if (VAR_3->pers) {
  if (!VAR_3->pers->quiesce)
   return -VAR_0;
  if (VAR_3->recovery || VAR_3->sync_thread)
   return -VAR_0;
 }

 if (VAR_3->bitmap || VAR_3->bitmap_info.file ||
     VAR_3->bitmap_info.offset) {

  if (FUNC_8(VAR_4, "none", 4) != 0)
   return -VAR_0;
  if (VAR_3->pers) {
   VAR_3->pers->quiesce(VAR_3, 1);
   FUNC_1(VAR_3);
   VAR_3->pers->quiesce(VAR_3, 0);
  }
  VAR_3->bitmap_info.offset = 0;
  if (VAR_3->bitmap_info.file) {
   struct file *VAR_6 = VAR_3->bitmap_info.file;
   VAR_3->bitmap_info.file = ((void*)0);
   FUNC_6(VAR_6);
   FUNC_3(VAR_6);
  }
 } else {

  long long VAR_7;
  if (FUNC_8(VAR_4, "none", 4) == 0)
                           ;
  else if (FUNC_8(VAR_4, "file:", 5) == 0) {

   return -VAR_1;
  } else {
   int VAR_8;
   if (VAR_4[0] == '+')
    VAR_8 = FUNC_4(VAR_4+1, 10, &VAR_7);
   else
    VAR_8 = FUNC_4(VAR_4, 10, &VAR_7);
   if (VAR_8)
    return VAR_8;
   if (VAR_7 == 0)
    return -VAR_1;
   if (VAR_3->bitmap_info.external == 0 &&
       VAR_3->major_version == 0 &&
       VAR_7 != VAR_3->bitmap_info.default_offset)
    return -VAR_1;
   VAR_3->bitmap_info.offset = VAR_7;
   if (VAR_3->pers) {
    VAR_3->pers->quiesce(VAR_3, 1);
    VAR_8 = FUNC_0(VAR_3);
    if (!VAR_8)
     VAR_8 = FUNC_2(VAR_3);
    if (VAR_8) {
     FUNC_1(VAR_3);
     VAR_3->bitmap_info.offset = 0;
    }
    VAR_3->pers->quiesce(VAR_3, 0);
    if (VAR_8)
     return VAR_8;
   }
  }
 }
 if (!VAR_3->external) {



  FUNC_7(VAR_2, &VAR_3->flags);
  FUNC_5(VAR_3->thread);
 }
 return VAR_5;
}
