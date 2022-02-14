
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int enc; } ;
typedef TYPE_1__ symmetric_xts ;
struct ccmode_xts {int (* xts ) (int ,int ,unsigned long,int const*,int *) ;int (* set_tweak ) (int ,int ,int const*) ;int tweak_size; } ;
struct TYPE_5__ {struct ccmode_xts* ccaes_xts_encrypt; } ;


 int FUNC_0 (int ,int ) ;
 TYPE_3__* VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int ,int const*) ;
 int FUNC_3 (int ,int ,unsigned long,int const*,int *) ;
 int VAR_1 ;

int FUNC_4(const uint8_t *VAR_2, unsigned long VAR_3,
   uint8_t *VAR_4,
   const uint8_t *VAR_5,
   symmetric_xts *VAR_6)
{
 const struct ccmode_xts *VAR_7 = VAR_0->ccaes_xts_encrypt;
 FUNC_0(VAR_7->tweak_size, VAR_1);

 if(VAR_3%16) FUNC_1("xts encrypt not a multiple of block size\n");

 VAR_7->set_tweak(VAR_6->enc, VAR_1, VAR_5);
 VAR_7->xts(VAR_6->enc, VAR_1, VAR_3/16, VAR_2, VAR_4);

 return 0;
}
