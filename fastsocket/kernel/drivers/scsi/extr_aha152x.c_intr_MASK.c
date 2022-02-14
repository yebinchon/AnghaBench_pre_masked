
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct Scsi_Host {int dummy; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int service; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 unsigned char FUNC_3 (int ) ;
 TYPE_1__* FUNC_4 (struct Scsi_Host*) ;
 int FUNC_5 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_6 (int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_7 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_8(int VAR_9, void *VAR_10)
{
 struct Scsi_Host *VAR_11 = VAR_10;
 unsigned long VAR_12;
 unsigned char VAR_13, VAR_14;
 VAR_13 = FUNC_3(VAR_6);
 VAR_14 = FUNC_3(VAR_0);
 if ((VAR_13 == 0xFF) && (VAR_14 == 0xFF))
  return VAR_5;

 if( FUNC_6(VAR_1, VAR_3) )
  return VAR_5;



 FUNC_0(VAR_0, VAR_2);

 FUNC_1(VAR_12);
 if( FUNC_4(VAR_11)->service==0 ) {
  FUNC_4(VAR_11)->service=1;


  FUNC_5(&VAR_7, VAR_8);
  FUNC_7(&VAR_7);
 }
 FUNC_2(VAR_12);

 return VAR_4;
}
