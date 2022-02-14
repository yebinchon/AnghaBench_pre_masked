
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u8 ;
struct TYPE_4__ {int command; } ;
struct ide_cmd {int tf_flags; TYPE_1__ tf; int protocol; } ;
struct TYPE_5__ {scalar_t__ mult_count; } ;
typedef TYPE_2__ ide_drive_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;

__attribute__((used)) static void FUNC_0(ide_drive_t *VAR_6, struct ide_cmd *VAR_7, u8 VAR_8)
{
 u8 VAR_9, VAR_10, VAR_11;

 VAR_10 = (VAR_7->tf_flags & VAR_2) ? 2 : 0;
 VAR_11 = (VAR_7->tf_flags & VAR_4) ? 1 : 0;

 if (VAR_8) {
  VAR_7->protocol = VAR_0;
  VAR_9 = 8;
 } else {
  VAR_7->protocol = VAR_1;
  if (VAR_6->mult_count) {
   VAR_7->tf_flags |= VAR_3;
   VAR_9 = 0;
  } else
   VAR_9 = 4;
 }

 VAR_7->tf.command = VAR_5[VAR_9 + VAR_10 + VAR_11];
}
