
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int wait_queue_t ;
typedef TYPE_1__* i2eBordStrPtr ;
typedef TYPE_2__* i2ChanStrPtr ;
struct TYPE_12__ {scalar_t__ expires; } ;
struct TYPE_11__ {TYPE_4__ BookmarkTimer; int pBookmarkWait; TYPE_1__* pMyBord; } ;
struct TYPE_10__ {int (* i2eFatalTrap ) (TYPE_1__*) ;scalar_t__ i2eFatal; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,int *) ;
 int VAR_8 ;
 int FUNC_1 (TYPE_4__*) ;
 int VAR_9 ;
 int FUNC_2 (int ,TYPE_2__*,int,int,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int ,int ,int,int,scalar_t__) ;
 scalar_t__ VAR_10 ;
 int FUNC_5 (TYPE_4__*,scalar_t__) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 () ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (TYPE_4__*,int ,unsigned long) ;
 int FUNC_11 (TYPE_1__*) ;
 scalar_t__ FUNC_12 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void
FUNC_13(i2ChanStrPtr VAR_11, int VAR_12)
{
 wait_queue_t VAR_13;
 i2eBordStrPtr VAR_14;

 FUNC_4 (VAR_0, VAR_2, VAR_3, 1, VAR_11->BookmarkTimer.expires);

 VAR_14 = VAR_11->pMyBord;


 if (VAR_14->i2eFatal) {
  if (VAR_14->i2eFatalTrap) {
   (*(VAR_14)->i2eFatalTrap)(VAR_14);
  }
  return;
 }
 if ((VAR_12 > 0) && (VAR_11->BookmarkTimer.expires == 0 )) {

  FUNC_10(&VAR_11->BookmarkTimer, VAR_9,
    (unsigned long)VAR_11);

  FUNC_4 (VAR_0, VAR_2, 1, 1, VAR_11->BookmarkTimer.expires );

  FUNC_5(&VAR_11->BookmarkTimer, VAR_10 + VAR_12);
 }

 FUNC_2( VAR_5, VAR_11, -1, 1, VAR_1 );

 FUNC_3(&VAR_13, VAR_8);
 FUNC_0(&(VAR_11->pBookmarkWait), &VAR_13);
 FUNC_9( VAR_6 );

 FUNC_8( VAR_14 );

 FUNC_7();


 FUNC_9( VAR_7 );
 FUNC_6(&(VAR_11->pBookmarkWait), &VAR_13);


 if ((VAR_12 > 0) && VAR_11->BookmarkTimer.expires &&
                      FUNC_12(VAR_10, VAR_11->BookmarkTimer.expires)) {
  FUNC_1( &(VAR_11->BookmarkTimer) );
  VAR_11->BookmarkTimer.expires = 0;

  FUNC_4 (VAR_0, VAR_2, 3, 1, VAR_11->BookmarkTimer.expires );

 }
 FUNC_4 (VAR_0, VAR_2, VAR_4, 1, VAR_11->BookmarkTimer.expires );
 return;
}
