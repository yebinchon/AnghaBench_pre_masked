
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct ser_cardstate {int dummy; } ;
struct TYPE_6__ {TYPE_3__* ser; } ;
struct cardstate {int write_tasklet; TYPE_1__ hw; int minor_index; } ;
struct TYPE_9__ {int release; } ;
struct TYPE_7__ {TYPE_5__ dev; int id; int name; } ;
struct TYPE_8__ {TYPE_2__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_5__*,struct cardstate*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_3__*) ;
 TYPE_3__* FUNC_2 (int,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (int *,int *,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct cardstate *VAR_4)
{
 int VAR_5;

 if (!(VAR_4->hw.ser = FUNC_2(sizeof(struct ser_cardstate), VAR_0))) {
  FUNC_4("out of memory\n");
  return 0;
 }

 VAR_4->hw.ser->dev.name = VAR_1;
 VAR_4->hw.ser->dev.id = VAR_4->minor_index;
 VAR_4->hw.ser->dev.dev.release = VAR_2;
 if ((VAR_5 = FUNC_3(&VAR_4->hw.ser->dev)) != 0) {
  FUNC_4("error %d registering platform device\n", VAR_5);
  FUNC_1(VAR_4->hw.ser);
  VAR_4->hw.ser = ((void*)0);
  return 0;
 }
 FUNC_0(&VAR_4->hw.ser->dev.dev, VAR_4);

 FUNC_5(&VAR_4->write_tasklet,
              &VAR_3, (unsigned long) VAR_4);
 return 1;
}
