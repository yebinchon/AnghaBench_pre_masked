
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ word ;
struct TYPE_15__ {int count; } ;
struct TYPE_14__ {int complete; int RNum; int RNR; TYPE_4__* R; int IndCh; int Id; int RLength; } ;
struct TYPE_16__ {int status; TYPE_6__ rc; TYPE_5__ e; int data; TYPE_1__* adapter; } ;
typedef TYPE_7__ divas_um_idi_entity_t ;
struct TYPE_11__ {int IndCh; int Ind; } ;
struct TYPE_12__ {TYPE_2__ ind; } ;
struct TYPE_17__ {scalar_t__ data_length; TYPE_3__ hdr; int type; } ;
typedef TYPE_8__ diva_um_idi_ind_hdr_t ;
typedef int byte ;
struct TYPE_13__ {scalar_t__ PLength; int * P; } ;
struct TYPE_10__ {int adapter_nr; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(divas_um_idi_entity_t * VAR_2, byte VAR_3)
{
 int VAR_4 = 0;

 if (VAR_2->e.complete != 0x02) {
  diva_um_idi_ind_hdr_t *VAR_5 =
      (diva_um_idi_ind_hdr_t *)
      FUNC_3(&VAR_2->data);
  if (VAR_5) {
   VAR_2->e.RNum = 1;
   VAR_2->e.R->P = (byte *) & VAR_5[1];
   VAR_2->e.R->PLength =
       (word) (FUNC_2(&VAR_2->data) -
        sizeof(*VAR_5));
   FUNC_0(("A(%d) E(%08x) ind_1(%02x-%02x-%02x)-[%d-%d]",
     VAR_2->adapter->adapter_nr, VAR_2, VAR_2->e.Id, VAR_3,
     VAR_2->e.IndCh, VAR_2->e.RLength,
     VAR_2->e.R->PLength));

  } else {
   FUNC_0(("A(%d) E(%08x) ind(%02x-%02x-%02x)-RNR",
     VAR_2->adapter->adapter_nr, VAR_2, VAR_2->e.Id, VAR_3,
     VAR_2->e.IndCh));
   VAR_2->e.RNum = 0;
   VAR_2->e.RNR = 1;
   VAR_4 = 1;
  }
 } else {
  diva_um_idi_ind_hdr_t *VAR_6 =
      (diva_um_idi_ind_hdr_t *) (VAR_2->e.R->P);

  FUNC_0(("A(%d) E(%08x) ind(%02x-%02x-%02x)-[%d]",
    VAR_2->adapter->adapter_nr, VAR_2, VAR_2->e.Id, VAR_3,
    VAR_2->e.IndCh, VAR_2->e.R->PLength));

  VAR_6--;
  VAR_6->type = VAR_0;
  VAR_6->hdr.ind.Ind = VAR_3;
  VAR_6->hdr.ind.IndCh = VAR_2->e.IndCh;
  VAR_6->data_length = VAR_2->e.R->PLength;
  FUNC_1(&VAR_2->data,
           (int) (sizeof(*VAR_6) +
           VAR_2->e.R->PLength));
  VAR_4 = 1;
 }

 if ((VAR_2->status & VAR_1) && !VAR_2->rc.count) {
  VAR_4 = 0;
 }

 return (VAR_4);
}
