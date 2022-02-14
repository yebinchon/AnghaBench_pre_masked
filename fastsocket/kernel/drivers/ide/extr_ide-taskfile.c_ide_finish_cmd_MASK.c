
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct request {scalar_t__ errors; } ;
struct TYPE_11__ {scalar_t__ nsect; } ;
struct ide_cmd {int tf_flags; TYPE_2__ tf; } ;
struct TYPE_12__ {TYPE_1__* hwif; } ;
typedef TYPE_3__ ide_drive_t ;
struct TYPE_10__ {struct request* rq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct request*) ;
 int FUNC_1 (TYPE_3__*,struct ide_cmd*,scalar_t__,scalar_t__) ;
 int FUNC_2 (TYPE_3__*,int ,int ) ;
 int FUNC_3 (TYPE_3__*) ;
 scalar_t__ FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*,scalar_t__) ;

void FUNC_6(ide_drive_t *VAR_2, struct ide_cmd *VAR_3, u8 VAR_4)
{
 struct request *VAR_5 = VAR_2->hwif->rq;
 u8 VAR_6 = FUNC_4(VAR_2), VAR_7 = VAR_3->tf.nsect;
 u8 VAR_8 = !!(VAR_3->tf_flags & VAR_1);

 FUNC_1(VAR_2, VAR_3, VAR_4, VAR_6);
 VAR_5->errors = VAR_6;

 if (VAR_6 == 0 && VAR_8) {
  FUNC_5(VAR_2, VAR_7);
  FUNC_3(VAR_2);
 }

 FUNC_2(VAR_2, VAR_6 ? -VAR_0 : 0, FUNC_0(VAR_5));
}
