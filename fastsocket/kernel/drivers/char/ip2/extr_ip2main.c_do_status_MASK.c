
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct work_struct {int dummy; } ;
typedef TYPE_4__* i2ChanStrPtr ;
struct TYPE_16__ {unsigned char real_raw; TYPE_3__* termios; TYPE_2__* ldisc; int read_wait; } ;
struct TYPE_15__ {int flags; TYPE_5__* pTTY; int open_wait; scalar_t__ wopen; int delta_msr_wait; } ;
struct TYPE_14__ {int c_cflag; } ;
struct TYPE_12__ {int (* receive_buf ) (TYPE_5__*,unsigned char*,char*,int) ;} ;
struct TYPE_13__ {TYPE_1__ ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_0 (TYPE_5__*) ;
 scalar_t__ FUNC_1 (TYPE_5__*) ;
 int VAR_13 ;
 char VAR_14 ;
 char VAR_15 ;
 char VAR_16 ;
 char VAR_17 ;
 char VAR_18 ;
 TYPE_4__* FUNC_2 (struct work_struct*,int ,int ) ;
 int VAR_19 ;
 int FUNC_3 (TYPE_4__*,int) ;
 int FUNC_4 (int ,int ,int,int,...) ;
 int FUNC_5 (int ,TYPE_5__*,int) ;
 int FUNC_6 (TYPE_5__*,unsigned char*,char*,int) ;
 unsigned char VAR_20 ;
 int VAR_21 ;
 int FUNC_7 (TYPE_5__*) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct work_struct *VAR_22)
{
 i2ChanStrPtr VAR_23 = FUNC_2(VAR_22, VAR_19, VAR_21);
 int VAR_24;

 VAR_24 = FUNC_3( VAR_23, (VAR_3|VAR_11|VAR_9|VAR_10) );

 FUNC_4 (VAR_1, VAR_12, 21, 1, VAR_24 );

 if (VAR_23->pTTY && (VAR_24 & (VAR_3|VAR_11|VAR_9|VAR_10)) ) {
  if ( (VAR_24 & VAR_3) ) {

   if (FUNC_1(VAR_23->pTTY))
    goto skip_this;
   if (FUNC_0(VAR_23->pTTY)) {
    FUNC_5(VAR_13, VAR_23->pTTY, 1);
    goto skip_this;
   }
   FUNC_8(&VAR_23->pTTY->read_wait);
  }
 }
skip_this:

 if ( VAR_24 & (VAR_6 | VAR_7 | VAR_5 | VAR_8) ) {
  FUNC_8(&VAR_23->delta_msr_wait);

  if ( (VAR_23->flags & VAR_0) && (VAR_24 & VAR_6) ) {
   if ( VAR_24 & VAR_4 ) {
    if ( VAR_23->wopen ) {
     FUNC_8 ( &VAR_23->open_wait );
    }
   } else {
    if (VAR_23->pTTY && (!(VAR_23->pTTY->termios->c_cflag & VAR_2)) ) {
     FUNC_7( VAR_23->pTTY );
    }
   }
  }
 }

 FUNC_4 (VAR_1, VAR_12, 26, 0 );
}
