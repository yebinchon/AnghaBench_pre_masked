
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long addr_data; int regsize; int regspacing; int * addr; int outputb; int inputb; } ;
struct smi_info {int io_size; TYPE_1__ io; int dev; int io_cleanup; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int * FUNC_1 (unsigned long,int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (unsigned long,int) ;
 int * FUNC_3 (unsigned long,int,int ) ;

__attribute__((used)) static int FUNC_4(struct smi_info *VAR_13)
{
 unsigned long VAR_14 = VAR_13->io.addr_data;
 int VAR_15;

 if (!VAR_14)
  return -VAR_3;

 VAR_13->io_cleanup = VAR_10;





 switch (VAR_13->io.regsize) {
 case 1:
  VAR_13->io.inputb = VAR_4;
  VAR_13->io.outputb = VAR_7;
  break;
 case 2:
  VAR_13->io.inputb = VAR_6;
  VAR_13->io.outputb = VAR_9;
  break;
 case 4:
  VAR_13->io.inputb = VAR_5;
  VAR_13->io.outputb = VAR_8;
  break;






 default:
  FUNC_0(VAR_13->dev, "Invalid register size: %d\n",
    VAR_13->io.regsize);
  return -VAR_1;
 }
 VAR_15 = ((VAR_13->io_size * VAR_13->io.regspacing)
     - (VAR_13->io.regspacing - VAR_13->io.regsize));

 if (FUNC_3(VAR_14, VAR_15, VAR_0) == ((void*)0))
  return -VAR_2;

 VAR_13->io.addr = FUNC_1(VAR_14, VAR_15);
 if (VAR_13->io.addr == ((void*)0)) {
  FUNC_2(VAR_14, VAR_15);
  return -VAR_2;
 }
 return 0;
}
