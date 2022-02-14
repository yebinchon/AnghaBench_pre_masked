
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
 int FUNC_0 (int,int ,int ,int ,int ,int ,int *) ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static s32 FUNC_1(u8 VAR_3)
{
 if(!VAR_2 || VAR_2->fd==-1) return -1;
 return FUNC_0(VAR_2->fd, VAR_0, VAR_1, VAR_3, VAR_2->interface, 0, ((void*)0));
}
