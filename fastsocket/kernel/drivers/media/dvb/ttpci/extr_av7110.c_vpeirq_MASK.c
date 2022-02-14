
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct dvb_demux {int dummy; } ;
struct TYPE_3__ {int nents; int slist; } ;
struct av7110 {int ttbp; TYPE_2__* dev; TYPE_1__ pt; int feeding1; struct dvb_demux demux1; struct dvb_demux demux; scalar_t__ full_ts; scalar_t__ grabbing; } ;
struct TYPE_4__ {int pci; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct dvb_demux*,int *,int) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (char*,int ,int) ;
 int FUNC_3 (TYPE_2__*,int ) ;

__attribute__((used)) static void FUNC_4(unsigned long VAR_4)
{
 struct av7110 *VAR_5 = (struct av7110 *)VAR_4;
 u8 *VAR_6 = (u8 *) (VAR_5->grabbing);
 u32 VAR_7 = VAR_5->ttbp;
 u32 VAR_8 = FUNC_3(VAR_5->dev, VAR_2);
 struct dvb_demux *VAR_9 = VAR_5->full_ts ? &VAR_5->demux : &VAR_5->demux1;


 VAR_8 -= VAR_8 % 188;

 if (VAR_8 >= VAR_3)
  return;

 VAR_5->ttbp = VAR_8;

 if (!VAR_5->feeding1 || (VAR_8 == VAR_7))
  return;


 FUNC_1(VAR_5->dev->pci, VAR_5->pt.slist, VAR_5->pt.nents, VAR_1);
 if (VAR_8 > VAR_7)

  FUNC_0(VAR_9, VAR_6 + VAR_7, (VAR_8 - VAR_7) / 188);
 else {

  FUNC_0(VAR_9, VAR_6 + VAR_7, (VAR_3 - VAR_7) / 188);
  FUNC_0(VAR_9, VAR_6, VAR_8 / 188);
 }
}
