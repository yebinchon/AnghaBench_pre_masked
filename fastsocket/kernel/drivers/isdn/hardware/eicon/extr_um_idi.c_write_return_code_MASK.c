
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int RcCh; } ;
struct TYPE_12__ {int rc; TYPE_4__ e; int status; TYPE_1__* adapter; } ;
typedef TYPE_5__ divas_um_idi_entity_t ;
struct TYPE_9__ {int RcCh; int Rc; } ;
struct TYPE_10__ {TYPE_2__ rc; } ;
struct TYPE_13__ {scalar_t__ data_length; TYPE_3__ hdr; int type; } ;
typedef TYPE_6__ diva_um_idi_ind_hdr_t ;
typedef int byte ;
struct TYPE_8__ {int adapter_nr; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(divas_um_idi_entity_t * VAR_2, byte VAR_3)
{
 diva_um_idi_ind_hdr_t *VAR_4;

 if (!(VAR_4 =
      (diva_um_idi_ind_hdr_t *) FUNC_2(&VAR_2->rc)))
 {
  FUNC_0(("A: A(%d) E(%08x) rc(%02x) lost",
    VAR_2->adapter->adapter_nr, VAR_2, VAR_3));
  VAR_2->status &= ~VAR_1;
  return (-1);
 }

 VAR_4->type = VAR_0;
 VAR_4->hdr.rc.Rc = VAR_3;
 VAR_4->hdr.rc.RcCh = VAR_2->e.RcCh;
 VAR_4->data_length = 0;
 FUNC_1(&VAR_2->rc, sizeof(*VAR_4));

 return (0);
}
