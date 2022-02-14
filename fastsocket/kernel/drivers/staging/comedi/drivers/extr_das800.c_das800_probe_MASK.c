
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {int spinlock; scalar_t__ iobase; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int VAR_11 ;

__attribute__((used)) static int FUNC_5(struct comedi_device *VAR_12)
{
 int VAR_13;
 unsigned long VAR_14;
 int VAR_15;


 FUNC_3(&VAR_12->spinlock, VAR_14);
 FUNC_1(VAR_2, VAR_12->iobase + VAR_0);
 VAR_13 = FUNC_0(VAR_12->iobase + VAR_1) & 0x3;
 FUNC_4(&VAR_12->spinlock, VAR_14);

 VAR_15 = VAR_11 - VAR_8;

 switch (VAR_13) {
 case 0x0:
  if (VAR_15 == VAR_7) {
   FUNC_2(" Board model: DAS-800\n");
   return VAR_15;
  }
  if (VAR_15 == VAR_3) {
   FUNC_2(" Board model: CIO-DAS800\n");
   return VAR_15;
  }
  FUNC_2(" Board model (probed): DAS-800\n");
  return VAR_7;
  break;
 case 0x2:
  if (VAR_15 == VAR_9) {
   FUNC_2(" Board model: DAS-801\n");
   return VAR_15;
  }
  if (VAR_15 == VAR_4) {
   FUNC_2(" Board model: CIO-DAS801\n");
   return VAR_15;
  }
  FUNC_2(" Board model (probed): DAS-801\n");
  return VAR_9;
  break;
 case 0x3:
  if (VAR_15 == VAR_10) {
   FUNC_2(" Board model: DAS-802\n");
   return VAR_15;
  }
  if (VAR_15 == VAR_5) {
   FUNC_2(" Board model: CIO-DAS802\n");
   return VAR_15;
  }
  if (VAR_15 == VAR_6) {
   FUNC_2(" Board model: CIO-DAS802/16\n");
   return VAR_15;
  }
  FUNC_2(" Board model (probed): DAS-802\n");
  return VAR_10;
  break;
 default:
  FUNC_2(" Board model: probe returned 0x%x (unknown)\n",
         VAR_13);
  return VAR_15;
  break;
 }
 return -1;
}
