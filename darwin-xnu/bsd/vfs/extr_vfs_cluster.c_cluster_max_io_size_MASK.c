
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef TYPE_1__* mount_t ;
struct TYPE_3__ {int mnt_segreadcnt; int mnt_maxreadcnt; int mnt_segwritecnt; int mnt_maxwritecnt; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int) ;

uint32_t
FUNC_1(mount_t VAR_5, int VAR_6)
{
 uint32_t VAR_7;
 uint32_t VAR_8;
 uint32_t VAR_9;

 switch(VAR_6) {

 case 129:
  VAR_8 = VAR_5->mnt_segreadcnt;
  VAR_9 = VAR_5->mnt_maxreadcnt;
  break;
 case 128:
  VAR_8 = VAR_5->mnt_segwritecnt;
  VAR_9 = VAR_5->mnt_maxwritecnt;
  break;
 default:
  VAR_8 = FUNC_0(VAR_5->mnt_segreadcnt, VAR_5->mnt_segwritecnt);
  VAR_9 = FUNC_0(VAR_5->mnt_maxreadcnt, VAR_5->mnt_maxwritecnt);
  break;
 }
 if (VAR_8 > (VAR_0 >> VAR_3)) {



               VAR_8 = VAR_0 >> VAR_3;
       }
       VAR_7 = FUNC_0((VAR_8 * VAR_4), VAR_9);

       if (VAR_7 < VAR_1) {



        VAR_7 = VAR_1;
       } else {



        VAR_7 &= ~VAR_2;
       }
       return (VAR_7);
}
