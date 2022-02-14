
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ccmode_ecb {int (* ecb ) (int *,int,int *,int *) ;} ;
struct TYPE_4__ {int * dec; int * enc; } ;
typedef TYPE_1__ des_ecb_key_schedule ;
typedef int des_cblock ;
typedef int ccecb_ctx ;
struct TYPE_5__ {struct ccmode_ecb* ccdes_ecb_decrypt; struct ccmode_ecb* ccdes_ecb_encrypt; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (int *,int,int *,int *) ;

void FUNC_1(des_cblock *VAR_1, des_cblock *VAR_2, des_ecb_key_schedule *VAR_3, int VAR_4)
{
 const struct ccmode_ecb *VAR_5 = VAR_4 ? VAR_0->ccdes_ecb_encrypt : VAR_0->ccdes_ecb_decrypt;
 ccecb_ctx *VAR_6 = VAR_4 ? VAR_3->enc : VAR_3->dec;

 VAR_5->ecb(VAR_6, 1, VAR_1, VAR_2);
}
