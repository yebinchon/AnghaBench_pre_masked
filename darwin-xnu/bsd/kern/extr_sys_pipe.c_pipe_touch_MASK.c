
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct timespec {int tv_nsec; int tv_sec; } ;
struct TYPE_5__ {int tv_nsec; int tv_sec; } ;
struct TYPE_4__ {int tv_nsec; int tv_sec; } ;
struct TYPE_6__ {int tv_nsec; int tv_sec; } ;
struct pipe {TYPE_2__ st_ctimespec; TYPE_1__ st_mtimespec; TYPE_3__ st_atimespec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct timespec*) ;

__attribute__((used)) static void
FUNC_1(struct pipe *VAR_3, int VAR_4)
{
 struct timespec VAR_5;

 FUNC_0(&VAR_5);

 if (VAR_4 & VAR_0) {
  VAR_3->st_atimespec.tv_sec = VAR_5.tv_sec;
  VAR_3->st_atimespec.tv_nsec = VAR_5.tv_nsec;
 }

 if (VAR_4 & VAR_2) {
  VAR_3->st_mtimespec.tv_sec = VAR_5.tv_sec;
  VAR_3->st_mtimespec.tv_nsec = VAR_5.tv_nsec;
 }

 if (VAR_4 & VAR_1) {
  VAR_3->st_ctimespec.tv_sec = VAR_5.tv_sec;
  VAR_3->st_ctimespec.tv_nsec = VAR_5.tv_nsec;
 }
}
