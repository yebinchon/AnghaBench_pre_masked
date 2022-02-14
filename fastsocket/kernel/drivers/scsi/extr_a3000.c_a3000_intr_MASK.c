
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int irqreturn_t ;
struct TYPE_6__ {unsigned int ISTR; } ;
struct TYPE_5__ {int host_lock; } ;


 TYPE_3__* FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_1 (char*,unsigned int) ;
 int FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (int ,unsigned long) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static irqreturn_t FUNC_5 (int VAR_5, void *VAR_6)
{
 unsigned long VAR_7;
 unsigned int VAR_8 = FUNC_0(VAR_4)->ISTR;

 if (!(VAR_8 & VAR_3))
  return VAR_1;
 if (VAR_8 & VAR_2)
 {
  FUNC_2(VAR_4->host_lock, VAR_7);
  FUNC_4 (VAR_4);
  FUNC_3(VAR_4->host_lock, VAR_7);
  return VAR_0;
 }
 FUNC_1("Non-serviced A3000 SCSI-interrupt? ISTR = %02x\n", VAR_8);
 return VAR_1;
}
