
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_short ;
struct TYPE_4__ {int TupleDataMax; int Attributes; int DesiredTuple; scalar_t__ TupleOffset; int * TupleData; } ;
typedef TYPE_1__ tuple_t ;
struct pcmcia_device {int dummy; } ;
struct comedi_device {int dummy; } ;
typedef int cisdata_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct pcmcia_device*,TYPE_1__*) ;
 scalar_t__ FUNC_2 (struct pcmcia_device*,TYPE_1__*) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_2, struct pcmcia_device *VAR_3)
{
 tuple_t VAR_4;
 u_short VAR_5[128];
 int VAR_6 = 0;

 VAR_4.TupleData = (cisdata_t *) VAR_5;
 VAR_4.TupleOffset = 0;
 VAR_4.TupleDataMax = 255;
 VAR_4.DesiredTuple = VAR_0;
 VAR_4.Attributes = VAR_1;
 if ((FUNC_1(VAR_3, &VAR_4) == 0) &&
     (FUNC_2(VAR_3, &VAR_4) == 0)) {
  VAR_6 = FUNC_0(VAR_5[1]);
 }

 return VAR_6;
}
