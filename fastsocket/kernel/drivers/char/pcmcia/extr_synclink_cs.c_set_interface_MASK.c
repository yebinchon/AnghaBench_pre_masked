
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int if_mode; int lock; int device_name; } ;
typedef TYPE_1__ MGSLPC_INFO ;


 scalar_t__ VAR_0 ;



 int VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (TYPE_1__*,int ,unsigned char) ;

__attribute__((used)) static int FUNC_5(MGSLPC_INFO * VAR_6, int VAR_7)
{
  unsigned long VAR_8;
 unsigned char VAR_9;
 if (VAR_5 >= VAR_0)
  FUNC_0("set_interface(%s,%d)\n", VAR_6->device_name, VAR_7);
 FUNC_2(&VAR_6->lock,VAR_8);
 VAR_6->if_mode = VAR_7;

 VAR_9 = FUNC_1(VAR_6, VAR_1) & 0x0f;
 switch (VAR_6->if_mode)
 {
 case 130: VAR_9 |= VAR_2; break;
 case 128: VAR_9 |= VAR_4; break;
 case 129: VAR_9 |= VAR_3; break;
 }
 FUNC_4(VAR_6, VAR_1, VAR_9);

 FUNC_3(&VAR_6->lock,VAR_8);
 return 0;
}
