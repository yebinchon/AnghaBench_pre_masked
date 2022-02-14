
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; unsigned short port; int regname; } ;
typedef TYPE_1__ act2000_card ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned short,int ) ;
 int * FUNC_1 (unsigned short,int ,int ) ;

int
FUNC_2(act2000_card * VAR_4, unsigned short VAR_5)
{
        if (VAR_4->flags & VAR_0) {
                FUNC_0(VAR_4->port, VAR_3);
                VAR_4->flags &= ~VAR_0;
        }
 if (FUNC_1(VAR_5, VAR_1, VAR_4->regname) == ((void*)0))
  return -VAR_2;
 else {
                VAR_4->port = VAR_5;
                VAR_4->flags |= VAR_0;
                return 0;
        }
}
