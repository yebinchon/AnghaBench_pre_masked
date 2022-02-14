
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int s32 ;
struct TYPE_2__ {int fd; int interface; int leds; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ,int ,int,int ,int,int *) ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;
 int * FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *,int *,int) ;

__attribute__((used)) static s32 FUNC_4(void)
{
 u8 *VAR_5 = 0;
 if(!VAR_3 || VAR_3->fd==-1) return -1;
 VAR_5 = FUNC_1(VAR_4, 1);

 if (VAR_5 == ((void*)0))
  return -1;

 FUNC_3(VAR_5, &VAR_3->leds, 1);
 s32 VAR_6 = FUNC_0(VAR_3->fd, VAR_1, VAR_2, VAR_0 << 8, VAR_3->interface, 1, VAR_5);

 FUNC_2(VAR_4, VAR_5);

 return VAR_6;
}
