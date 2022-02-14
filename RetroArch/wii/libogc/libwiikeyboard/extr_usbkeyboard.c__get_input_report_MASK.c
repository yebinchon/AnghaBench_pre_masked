
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int s32 ;
struct TYPE_3__ {int modifiers; } ;
struct TYPE_4__ {int fd; TYPE_1__ sc_ndata; int ep; } ;


 int FUNC_0 (int,int ,int,int *) ;
 TYPE_2__* VAR_0 ;
 int VAR_1 ;
 int * FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (TYPE_1__*,int *,int) ;

__attribute__((used)) static s32 FUNC_4(void)
{
 u8 *VAR_2 = 0;

 if(!VAR_0 || VAR_0->fd==-1) return -1;
 VAR_2 = FUNC_1(VAR_1, 8);

 if (VAR_2 == ((void*)0))
  return -1;

 s32 VAR_3 = FUNC_0(VAR_0->fd, VAR_0->ep, 8, VAR_2);

 FUNC_3(&VAR_0->sc_ndata, VAR_2, 8);
 FUNC_2(VAR_1, VAR_2);

 VAR_0->sc_ndata.modifiers = (VAR_0->sc_ndata.modifiers << 8) | (VAR_0->sc_ndata.modifiers >> 8);

 return VAR_3;
}
