
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_2__* i2ChanStrPtr ;
struct TYPE_3__ {scalar_t__ expires; } ;
struct TYPE_4__ {int pBookmarkWait; TYPE_1__ BookmarkTimer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int,int,scalar_t__) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(unsigned long VAR_2)
{
 i2ChanStrPtr VAR_3 = (i2ChanStrPtr)VAR_2;

 FUNC_0 (VAR_0, VAR_1, 10, 1, VAR_3->BookmarkTimer.expires );

 VAR_3->BookmarkTimer.expires = 0;
 FUNC_1( &VAR_3->pBookmarkWait );
}
