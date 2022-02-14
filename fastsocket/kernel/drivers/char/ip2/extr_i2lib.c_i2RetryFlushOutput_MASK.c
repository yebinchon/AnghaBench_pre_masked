
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* i2ChanStrPtr ;
struct TYPE_4__ {int flush_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,TYPE_1__*,int ,int,int ) ;
 int FUNC_1 (int ,int ,int,int,int) ;

__attribute__((used)) static int
FUNC_2(i2ChanStrPtr VAR_8)
{
 int VAR_9 = VAR_8->flush_flags;

 FUNC_1 (VAR_0, VAR_3, 14, 1, VAR_9 );

 VAR_8->flush_flags = 0;


 if ( VAR_9 & VAR_6 ) {
  if ( 1 == FUNC_0(VAR_4, VAR_8, 0, 1, VAR_1) ) {
   VAR_9 = VAR_7;
  } else {
   VAR_9 = VAR_6;
  }

  FUNC_1 (VAR_0, VAR_3, 15, 1, VAR_9 );

 }
 if ( VAR_9 & VAR_7 ) {
  if (1 == FUNC_0(VAR_5, VAR_8, 0, 1, VAR_2)) {
   VAR_9 = 0;
  }

  FUNC_1 (VAR_0, VAR_3, 16, 1, VAR_9 );
 }
 VAR_8->flush_flags = VAR_9;

 FUNC_1 (VAR_0, VAR_3, 17, 1, VAR_9 );

 return VAR_9;
}
