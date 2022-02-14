
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* i2ChanStrPtr ;
struct TYPE_4__ {scalar_t__ flush_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int ,TYPE_1__*,int ,int,int ) ;
 int FUNC_1 (int ,int ,int,int,...) ;

__attribute__((used)) static inline void
FUNC_2(i2ChanStrPtr VAR_8)
{

 FUNC_1 (VAR_0, VAR_3, 1, 1, VAR_8->flush_flags );

 if (VAR_8->flush_flags)
  return;

 if ( 1 != FUNC_0(VAR_4, VAR_8, 0, 1, VAR_1) ) {
  VAR_8->flush_flags = VAR_6;

  FUNC_1 (VAR_0, VAR_3, 2, 0 );

 } else if ( 1 != FUNC_0(VAR_5, VAR_8, 0, 1, VAR_2) ) {
  VAR_8->flush_flags = VAR_7;

  FUNC_1 (VAR_0, VAR_3, 3, 0 );
 }
}
