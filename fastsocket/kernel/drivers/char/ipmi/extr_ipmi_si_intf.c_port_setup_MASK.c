
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int addr_data; int regspacing; int regsize; int outputb; int inputb; } ;
struct smi_info {int io_size; TYPE_1__ io; int dev; int io_cleanup; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (unsigned int,int ) ;
 int * FUNC_2 (unsigned int,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct smi_info *VAR_11)
{
 unsigned int VAR_12 = VAR_11->io.addr_data;
 int VAR_13;

 if (!VAR_12)
  return -VAR_3;

 VAR_11->io_cleanup = VAR_4;





 switch (VAR_11->io.regsize) {
 case 1:
  VAR_11->io.inputb = VAR_5;
  VAR_11->io.outputb = VAR_8;
  break;
 case 2:
  VAR_11->io.inputb = VAR_7;
  VAR_11->io.outputb = VAR_10;
  break;
 case 4:
  VAR_11->io.inputb = VAR_6;
  VAR_11->io.outputb = VAR_9;
  break;
 default:
  FUNC_0(VAR_11->dev, "Invalid register size: %d\n",
    VAR_11->io.regsize);
  return -VAR_1;
 }







 for (VAR_13 = 0; VAR_13 < VAR_11->io_size; VAR_13++) {
  if (FUNC_2(VAR_12 + VAR_13 * VAR_11->io.regspacing,
       VAR_11->io.regsize, VAR_0) == ((void*)0)) {

   while (VAR_13--) {
    FUNC_1(VAR_12 + VAR_13 * VAR_11->io.regspacing,
            VAR_11->io.regsize);
   }
   return -VAR_2;
  }
 }
 return 0;
}
