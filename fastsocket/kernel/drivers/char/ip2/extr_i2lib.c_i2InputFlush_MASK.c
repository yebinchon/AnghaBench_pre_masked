
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_2__* i2ChanStrPtr ;
struct TYPE_6__ {int asof; } ;
struct TYPE_7__ {int Ibuf_stuff; int Ibuf_strip; int sinceLastFlow; int whenSendFlow; int Ibuf_spinlock; int pMyBord; TYPE_1__ infl; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,int ,int,int,...) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int
FUNC_5(i2ChanStrPtr VAR_4)
{
 int VAR_5;
 unsigned long VAR_6;


 if ( !FUNC_1 ( VAR_4 ) )
  return -1;

 FUNC_2 (VAR_0, VAR_2, 10, 0);

 FUNC_3(&VAR_4->Ibuf_spinlock, VAR_6);
 VAR_5 = VAR_4->Ibuf_stuff - VAR_4->Ibuf_strip;


 if (VAR_5 < 0) {
  VAR_5 += VAR_1;
 }


 VAR_4->Ibuf_strip = VAR_4->Ibuf_stuff;






 VAR_4->infl.asof += VAR_5;

 if ( (VAR_4->sinceLastFlow += VAR_5) >= VAR_4->whenSendFlow )
 {
  VAR_4->sinceLastFlow -= VAR_4->whenSendFlow;
  FUNC_4(&VAR_4->Ibuf_spinlock, VAR_6);
  FUNC_0(VAR_4->pMyBord, VAR_4, VAR_3);
 } else {
  FUNC_4(&VAR_4->Ibuf_spinlock, VAR_6);
 }

 FUNC_2 (VAR_0, VAR_2, 19, 1, VAR_5);

 return VAR_5;
}
