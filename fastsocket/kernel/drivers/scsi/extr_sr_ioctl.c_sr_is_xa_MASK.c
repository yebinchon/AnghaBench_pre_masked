
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int name; } ;
struct TYPE_7__ {TYPE_1__ cdi; scalar_t__ ms_offset; } ;
typedef TYPE_2__ Scsi_CD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (unsigned char*) ;
 unsigned char* FUNC_2 (int,int) ;
 int FUNC_3 (char*,int ,int) ;
 scalar_t__ FUNC_4 (TYPE_2__*,scalar_t__,int ,unsigned char*) ;
 int VAR_3 ;

int FUNC_5(Scsi_CD *VAR_4)
{
 unsigned char *VAR_5;
 int VAR_6;

 if (!VAR_3)
  return 0;

 VAR_5 = FUNC_2(2048, VAR_2 | FUNC_0(VAR_4));
 if (!VAR_5)
  return -VAR_1;
 if (0 == FUNC_4(VAR_4, VAR_4->ms_offset + 16,
    VAR_0, VAR_5)) {
  VAR_6 = (VAR_5[3] == 0x02) ? 1 : 0;
 } else {

  VAR_6 = -1;
 }
 FUNC_1(VAR_5);



 return VAR_6;
}
