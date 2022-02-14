
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_3__ {int vid_mode; } ;
struct TYPE_4__ {TYPE_1__ hdr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_2__ VAR_6 ;
 int FUNC_0 (int,int*) ;
 int FUNC_1 () ;

int FUNC_2(u16 VAR_7)
{
 int VAR_8;
 u16 VAR_9;


 if (VAR_7 == VAR_4)
  return 0;
 else if (VAR_7 == VAR_1)
  VAR_7 = VAR_2;
 else if (VAR_7 == VAR_0)
  VAR_7 = VAR_3;

 VAR_8 = FUNC_0(VAR_7, &VAR_9);
 if (VAR_8)
  return VAR_8;

 if (VAR_7 & VAR_5)
  FUNC_1();




 VAR_6.hdr.vid_mode = VAR_9;

 return 0;
}
