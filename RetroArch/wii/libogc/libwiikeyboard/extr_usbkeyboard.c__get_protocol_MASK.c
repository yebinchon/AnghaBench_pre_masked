
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int s32 ;
struct TYPE_2__ {int fd; int interface; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ,int ,int ,int ,int,int*) ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int* FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int*) ;

__attribute__((used)) static s32 FUNC_3(void)
{
 s32 VAR_4;
 u8 *VAR_5 = 0;

 if(!VAR_2 || VAR_2->fd==-1) return -1;

 VAR_5 = FUNC_1(VAR_3, 1);

 if (VAR_5 == ((void*)0))
  return -1;

 FUNC_0(VAR_2->fd, VAR_0, VAR_1, 0, VAR_2->interface, 1, VAR_5);

 VAR_4 = *VAR_5;
 FUNC_2(VAR_3, VAR_5);

 return VAR_4;
}
