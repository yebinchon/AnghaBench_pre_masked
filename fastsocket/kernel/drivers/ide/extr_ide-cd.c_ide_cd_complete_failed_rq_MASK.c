
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {int sense_len; scalar_t__ sense; int bio; scalar_t__ special; } ;
typedef int ide_drive_t ;


 int FUNC_0 () ;
 int VAR_0 ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (struct request*) ;
 int FUNC_3 (int *,struct request*) ;
 scalar_t__ FUNC_4 (int *,struct request*,int ,int ) ;
 int FUNC_5 (scalar_t__,void*,int) ;

__attribute__((used)) static void FUNC_6(ide_drive_t *VAR_1, struct request *VAR_2)
{






 struct request *VAR_3 = (struct request *)VAR_2->special;
 void *VAR_4 = FUNC_1(VAR_2->bio);

 if (VAR_3) {
  if (VAR_3->sense) {





   FUNC_5(VAR_3->sense, VAR_4, 18);
   VAR_3->sense_len = VAR_2->sense_len;
  }
  FUNC_3(VAR_1, VAR_3);

  if (FUNC_4(VAR_1, VAR_3, -VAR_0, FUNC_2(VAR_3)))
   FUNC_0();
 } else
  FUNC_3(VAR_1, ((void*)0));
}
