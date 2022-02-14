
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct urb {int status; } ;
struct scatterlist {int length; } ;
struct TYPE_5__ {size_t fragment; TYPE_1__* srb; int data_pipe; } ;
struct TYPE_4__ {int result; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,size_t,int) ;
 int FUNC_1 () ;
 TYPE_3__* VAR_3 ;
 void FUNC_2 (struct urb*) ;
 int FUNC_3 (struct urb*,int ,int ,int ,void (*) (struct urb*)) ;
 int FUNC_4 (struct urb*) ;
 int FUNC_5 (TYPE_1__*) ;
 struct scatterlist* FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (struct scatterlist*) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static void FUNC_9 (struct urb* VAR_4)
{
 struct scatterlist * VAR_5;
 int VAR_6 = VAR_4->status;
 FUNC_1();

 FUNC_0("Processing fragment %d of %d\n", VAR_3->fragment,
                                           FUNC_5(VAR_3->srb));

 if (FUNC_8(VAR_6)) {
                VAR_3->srb->result = (VAR_6 == -VAR_2 ? VAR_0 : VAR_1)<<16;
  FUNC_4(VAR_4);
        }

 VAR_5 = FUNC_6(VAR_3->srb);
 VAR_3->fragment++;
 FUNC_3(VAR_4,
      VAR_3->data_pipe,
      FUNC_7(&VAR_5[VAR_3->fragment]),
      VAR_5[VAR_3->fragment].length,
      VAR_3->fragment + 1 == FUNC_5(VAR_3->srb) ?
      FUNC_2 : FUNC_9);
 return;
}
