
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct work_struct {int dummy; } ;
typedef TYPE_1__* i2ChanStrPtr ;
struct TYPE_5__ {scalar_t__ Ibuf_stuff; scalar_t__ Ibuf_strip; int Ibuf_spinlock; int throttled; int * pTTY; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (struct work_struct*,int ,int ) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,int ,int,int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_6(struct work_struct *VAR_4)
{
 i2ChanStrPtr VAR_5 = FUNC_0(VAR_4, VAR_2, VAR_3);
 unsigned long VAR_6;

 FUNC_3(VAR_0, VAR_1, 21, 0 );


 if ( VAR_5->pTTY != ((void*)0) ) {
  FUNC_4(&VAR_5->Ibuf_spinlock, VAR_6);
  if (!VAR_5->throttled && (VAR_5->Ibuf_stuff != VAR_5->Ibuf_strip)) {
   FUNC_5(&VAR_5->Ibuf_spinlock, VAR_6);
   FUNC_1( VAR_5 );
  } else
   FUNC_5(&VAR_5->Ibuf_spinlock, VAR_6);
 } else {
  FUNC_3(VAR_0, VAR_1, 22, 0 );

  FUNC_2( VAR_5 );
 }
}
