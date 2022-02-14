
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t word ;
struct TYPE_9__ {scalar_t__ data_pending; size_t data_out; scalar_t__ data_ack_pending; scalar_t__ data_ack_out; TYPE_2__* DBuffer; } ;
struct TYPE_8__ {scalar_t__ Id; scalar_t__ data_sent_ptr; scalar_t__ appl; int data_sent; TYPE_1__* adapter; } ;
struct TYPE_7__ {scalar_t__ P; } ;
struct TYPE_6__ {scalar_t__* ncci_plci; TYPE_4__* ncci; } ;
typedef TYPE_3__ PLCI ;
typedef TYPE_4__ NCCI ;


 size_t VAR_0 ;
 int FUNC_0 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_1 (PLCI *VAR_1, word VAR_2)
{
  NCCI *VAR_3;

  if (VAR_2 && (VAR_1->adapter->ncci_plci[VAR_2] == VAR_1->Id))
  {
    VAR_3 = &(VAR_1->adapter->ncci[VAR_2]);
    if (VAR_1->appl)
    {
      while (VAR_3->data_pending != 0)
      {
        if (!VAR_1->data_sent || (VAR_3->DBuffer[VAR_3->data_out].P != VAR_1->data_sent_ptr))
          FUNC_0 (VAR_1->appl, VAR_3->DBuffer[VAR_3->data_out].P);
        (VAR_3->data_out)++;
        if (VAR_3->data_out == VAR_0)
          VAR_3->data_out = 0;
        (VAR_3->data_pending)--;
      }
    }
    VAR_3->data_out = 0;
    VAR_3->data_pending = 0;
    VAR_3->data_ack_out = 0;
    VAR_3->data_ack_pending = 0;
  }
}
